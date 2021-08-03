# ip4-detector (Example Programs)
Sample programs to identify ip addresses (v4).

For Copy & Paste :laughing: :exclamation:

| language | Show-IP4 | Show-IP4-All |
| -------- | -------- | ------------ |
| Bash     | ✅        | ✅            |
| Python   | ✅        | ✅            |
| C / C++  | ✅        |              |
| Rust     | ✅        | ✅            |
| Java     |          |              |

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

## C or C++  [c_unix/]

### show_ip4.cpp

```bash
$ gcc -o show_ip4 c_unix/show_ip4.c
$ ./show_ip4 docker0
> 172.17.0.1
```

## Rust [rust/]

### show_ip4

```bash
$ cd rust/show_ip4
$ cargo run docker0
> ...
>    Finished dev [unoptimized + debuginfo] target(s) in 0.34s
>     Running `target/debug/show_ip4 docker0`
> 172.17.0.1
```

### show_ip4_all

```bash
$ cd rust/show_ip4_all
$ cargo run
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
