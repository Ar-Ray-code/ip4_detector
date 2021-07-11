#!/bin/bash
if [ $# -ne 1 ]; then
    echo "The network adapter option is required to run. (Example. eth0, wlan0)"
    exit 1
fi

echo `ip -4 a | grep $1 | grep -oP '(?<=inet\s)\d+(\.\d+){3}' | grep -v 127`
