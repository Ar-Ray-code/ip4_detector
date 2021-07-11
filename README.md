# ip4_detector
Sample programs to identify ip addresses (v4)

## Bash [bash/]

### show_interfaces.bash

```bash
$ bash bash/show_interfaces.bash
> lo wlp1s0 docker0
```

### show_ip4.bash

```bash
$ bash bash/show_ip4.bash docker0
> 172.17.0.1
```

### show_ip4_all.bash

```bash
$ bash bash/show_ip4_all.bash
> 192.168.10.6 172.17.0.1
```

## Python [python/]

### show_ip4.py

```bash
$ python python/show_ip4.py docker0
> 172.17.0.1
```

### show_ip4_all.py

```bash
$ python python/show_ip4_all.py 
> ['192.168.10.6', '172.17.0.1']
```

## C++  [cpp_unix/]

### show_ip4.cpp

```bash
$ g++ -o show_ip4 cpp_unix/show_ip4.cpp
$ ./show_ip4 docker0
> 172.17.0.1
```

