cmd_net/ipv4/built-in.o :=  arm-uclinuxeabi-ld -EL    -r -o net/ipv4/built-in.o net/ipv4/route.o net/ipv4/inetpeer.o net/ipv4/protocol.o net/ipv4/ip_input.o net/ipv4/ip_fragment.o net/ipv4/ip_forward.o net/ipv4/ip_options.o net/ipv4/ip_output.o net/ipv4/ip_sockglue.o net/ipv4/inet_hashtables.o net/ipv4/inet_timewait_sock.o net/ipv4/inet_connection_sock.o net/ipv4/tcp.o net/ipv4/tcp_input.o net/ipv4/tcp_output.o net/ipv4/tcp_timer.o net/ipv4/tcp_ipv4.o net/ipv4/tcp_minisocks.o net/ipv4/tcp_cong.o net/ipv4/datagram.o net/ipv4/raw.o net/ipv4/udp.o net/ipv4/udplite.o net/ipv4/arp.o net/ipv4/icmp.o net/ipv4/devinet.o net/ipv4/af_inet.o net/ipv4/igmp.o net/ipv4/fib_frontend.o net/ipv4/fib_semantics.o net/ipv4/inet_fragment.o net/ipv4/sysctl_net_ipv4.o net/ipv4/fib_hash.o net/ipv4/proc.o net/ipv4/ipconfig.o net/ipv4/tcp_cubic.o 
