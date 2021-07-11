#!/bin/bash
echo `ip -4 a | grep -oP '(?<=:\s).+(?=:)'`