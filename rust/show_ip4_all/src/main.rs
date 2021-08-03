extern crate pnet;

use pnet::datalink;

fn ip_find_all() -> Vec<String> {
    let mut vec_ip4 = Vec::new();

    for iface in datalink::interfaces() {
        let ips = iface.ips;
        let mut i = 0;
        if !(iface.name == "lo") {
            for ip in ips { 
                if i == 0 {
                    let addr = ip.to_string();
                    let addr_fixed: Vec<&str> = addr.split("/").collect();
                    // println!("{}", addr_fixed[0]);
                    vec_ip4.push(addr_fixed[0].to_string());
                }
                i += 1;
            }
        }
    }
    return vec_ip4;
}

fn main() {
    println!("{:?}", ip_find_all());
}