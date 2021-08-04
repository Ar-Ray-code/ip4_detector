extern crate pnet;

use std::env;
use pnet::datalink;

fn ip_find(interface_name: &str) -> String{
    for iface in datalink::interfaces() {
        let ips = iface.ips;
        let mut i = 0;
        if !(iface.name == "lo") {
            for ip in ips { 
                if i == 0 {
                    let addr = ip.to_string();
                    if iface.name == interface_name {
                        let addr_fixed: Vec<&str> = addr.split("/").collect();
                        return addr_fixed[0].to_string();
                    }
                }
                i += 1;
            }
        }
    }
    return "".to_string();
}

fn main() {
    let args: Vec<String> = env::args().collect();
    println!("{}", ip_find(&args[1]));
}