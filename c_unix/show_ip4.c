// Writer Ar-ray-code (2021)

// https://www.geekpage.jp/programming/linux-network/get-ipaddr.php
// How to compile (C)   : gcc -o show_ip4 show_ip4.cpp
// How to compile (C++) : g++ -o show_ip4 show_ip4.cpp
// How to use : ./show_ip4 eth0

#include "get_ip.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: show_ip4 [interface]");
        return 1;
    }
    printf("%s\n",get_ip4_address(argv[1]));
}