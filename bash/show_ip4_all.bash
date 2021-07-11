#!/bin/bash
echo `ip -4 a | grep -oP '(?<=inet\s)\d+(\.\d+){3}' | grep -v 127`

# ignore docker
# echo `ip -4 a | grep -v docker | grep -oP '(?<=inet\s)\d+(\.\d+){3}' | grep -v 127`