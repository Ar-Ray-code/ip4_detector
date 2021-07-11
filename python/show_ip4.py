#!/bin/python3
import netifaces as ni
import psutil
import os
import sys

def ip_get(interface:str)->str:
    i = 0
    result = []
    address_list = psutil.net_if_addrs()

    for nic in address_list.keys():
        if (interface in ni.interfaces()[i]):
            ip = ni.ifaddresses(ni.interfaces()[i])[ni.AF_INET][0]['addr']
            return ip
        i += 1
    return "0.0.0.0"

if __name__=='__main__':
    if (len(sys.argv) < 2):
        print("Usage: python3 show_ip4.py [interface]")
        exit(1)
    
    argv = sys.argv[1]
    print(ip_get(argv))
