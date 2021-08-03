// Writer Ar-ray-code (2021)

// https://www.geekpage.jp/programming/linux-network/get-ipaddr.php
// https://www.geekpage.jp/programming/linux-network/get-iflist.php
// How to compile (C++) : g++ -o show_ip4_all_exe show_ip4_all.cpp
// How to use : ./show_ip4_all_exe eth0

#include "get_ip.h"

#include <iostream>
#include <vector>
#include <sstream>

std::vector<std::string> get_ip4_address_all() {
    struct ifreq ifr[MAX_IFR];
    struct ifconf ifc;
    int fd;
    int nifs, i;

    char* name[MAX_IFR] = {};
    auto ip = new std::vector<std::string>();

    fd = socket(AF_INET, SOCK_DGRAM, 0);

    ifc.ifc_len = sizeof(ifr);
    ifc.ifc_ifcu.ifcu_buf = (caddr_t) ifr;

    ioctl(fd, SIOCGIFCONF, &ifc);

    nifs = ifc.ifc_len / sizeof(struct ifreq);

    int target_ips_count = 0;
    for (i=0; i<nifs; i++) {
        // if not "lo"
        if (strncmp(ifr[i].ifr_name, "lo", 2) != 0) {
            name[target_ips_count] = ifr[i].ifr_name;
            target_ips_count++;
        }
    }
    close(fd);

    for (i=0; i<target_ips_count; i++) {
        ip->push_back(std::string(get_ip4_address(name[i])));
    }
    return *ip;
}

int main(int argc, char *argv[])
{
    auto ip_all = get_ip4_address_all();
    for (int i=0; i<ip_all.size(); i++) {
        std::cout << ip_all[i] << std::endl;
    }
}