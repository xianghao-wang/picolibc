#ifndef _NETINET_TCP_H
#define _NETINET_TCP_H

#define TCP_NODELAY 1
#define TCP_MAXSEG	 2
#define TCP_CORK	 3
#define TCP_KEEPIDLE	 4
#define TCP_KEEPINTVL	 5
#define TCP_KEEPCNT	 6
#define TCP_SYNCNT	 7
#define TCP_LINGER2	 8
#define TCP_DEFER_ACCEPT 9
#define TCP_WINDOW_CLAMP 10
#define TCP_INFO	 11
#define	TCP_QUICKACK	 12
#define TCP_CONGESTION	 13
#define TCP_MD5SIG	 14
#define TCP_THIN_LINEAR_TIMEOUTS 16
#define TCP_THIN_DUPACK  17
#define TCP_USER_TIMEOUT 18
#define TCP_REPAIR       19
#define TCP_REPAIR_QUEUE 20
#define TCP_QUEUE_SEQ    21
#define TCP_REPAIR_OPTIONS 22
#define TCP_FASTOPEN     23
#define TCP_TIMESTAMP    24
#define TCP_NOTSENT_LOWAT 25
#define TCP_CC_INFO      26
#define TCP_SAVE_SYN     27
#define TCP_SAVED_SYN    28
#define TCP_REPAIR_WINDOW 29

#define TCP_ESTABLISHED  1
#define TCP_SYN_SENT     2
#define TCP_SYN_RECV     3
#define TCP_FIN_WAIT1    4
#define TCP_FIN_WAIT2    5
#define TCP_TIME_WAIT    6
#define TCP_CLOSE        7
#define TCP_CLOSE_WAIT   8
#define TCP_LAST_ACK     9
#define TCP_LISTEN       10
#define TCP_CLOSING      11

#endif