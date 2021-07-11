// https://www.geekpage.jp/programming/linux-network/get-ipaddr.php
// How to compile : g++ -o show_ip4 show_ip4.cpp -lnetlink
// How to use : ./show_ip4 eth0

#include <stdio.h>

#include <string.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <arpa/inet.h>
#include <iostream>

char* get_ip4_address(const char* ifname) {
    int fd = socket(AF_INET, SOCK_DGRAM, 0);
    struct ifreq ifr;

    ifr.ifr_addr.sa_family = AF_INET;
    strncpy(ifr.ifr_name, ifname, IFNAMSIZ-1);
    ioctl(fd, SIOCGIFADDR, &ifr);
    close(fd);

    return inet_ntoa(((struct sockaddr_in *)&ifr.ifr_addr)->sin_addr);
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        std::cout << "Usage: show_ip4 [interface]" << std::endl;
        exit(1);
    }
    std::cout << get_ip4_address(argv[1]) << std::endl;
}