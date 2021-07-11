#!/bin/python3
import netifaces as ni
import psutil
import os
import time

def ip_get():
    i = 0
    result = []
    address_list = psutil.net_if_addrs()
    
    for nic in address_list.keys():
        if ("lo" not in ni.interfaces()[i]):# and ("docker" not in ni.interfaces()[i]):
            ip = ni.ifaddresses(ni.interfaces()[i])[ni.AF_INET][0]['addr']
            result.append(ip)
        i = i + 1
    return result

if __name__=='__main__':
    print(ip_get())
