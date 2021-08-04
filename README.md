# ip4-detector (Example Programs)
Sample programs to identify ip addresses (v4).

Copy & Paste :laughing: :exclamation:

| language | Show-IP4 | Show-IP4-All |
| -------- | -------- | ------------ |
| Bash     | ✅        | ✅            |
| Python   | ✅        | ✅            |
| C        | ✅        |              |
| C++      | ✅        | ✅            |
| Rust     | ✅        | ✅            |
| Others   | :question:         | :question: |

## Bash [bash/]

### show_interfaces.bash

```bash
$ bash bash/show_interfaces.bash
> lo wlan0 docker0
```

### show_ip4.bash

```bash
$ bash bash/show_ip4.bash docker0
> 172.17.0.1
```

### show_ip4_all.bash

```bash
$ bash bash/show_ip4_all.bash
> 192.168.10.5 172.17.0.1
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
> ['192.168.10.5', '172.17.0.1']
```

## C   [c_unix/]

### show_ip4.c

```bash
$ cd c_unix/
$ gcc -o show_ip4 c_unix/show_ip4.c
$ ./show_ip4 eth0
> 172.17.0.1
```

## C++  [c++_unix/]

### show_ip4.cpp

```bash
$ cd c++_unix/
$ g++ -o show_ip4_exe show_ip4.cpp
$ ./show_ip4_exe eth0
> 172.17.0.1
```

### show_ip4_all.cpp

```bash
$ cd c++_unix/
$ g++ -o show_ip4_all_exe show_ip4_all.cpp
$ ./show_ip4_all_exe
> 192.168.10.5
> 172.17.0.1
```

## Rust [rust/]

### show_ip4

```bash
$ cd rust/show_ip4
$ cargo run eth0
> ...
>    Finished dev [unoptimized + debuginfo] target(s) in 0.34s
>     Running `target/debug/show_ip4 eth0`
> 172.17.0.1
```

### show_ip4_all

```bash
$ cd rust/show_ip4_all
$ cargo run
> ...
>     Finished dev [unoptimized + debuginfo] target(s) in 0.40s
>      Running `target/debug/show_ip4_all`
> ["192.168.10.5", "172.17.0.1"]
```

## Contributions
Contributions of sample programs in various languages are welcome.

## About writer

- Ar-Ray : Japanese student.
- Blog (Japanese) : https://ar-ray.hatenablog.com
- Twitter : https://twitter.com/Ray255Ar
