// Writer Ar-ray-code (2021)

// https://www.geekpage.jp/programming/linux-network/get-ipaddr.php
// https://www.geekpage.jp/programming/linux-network/get-iflist.php
// How to compile (C++) : g++ -o show_ip4_exe show_ip4.cpp
// How to use : ./show_ip4_exe eth0

#include "get_ip.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: show_ip4 [interface]\n");
        return 1;
    }
    printf("%s\n",get_ip4_address(argv[1]));
}