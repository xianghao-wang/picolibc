#ifndef	_NETDB_H
#define	_NETDB_H


#include <netinet/in.h>

struct addrinfo {
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    socklen_t ai_addrlen;
    struct sockaddr *ai_addr;
    char *ai_canonname;
    struct addrinfo *ai_next;
};

#define IPPORT_RESERVED 1024

#define AI_PASSIVE      0x01
#define AI_CANONNAME    0x02
#define AI_NUMERICHOST  0x04
#define AI_V4MAPPED     0x08
#define AI_ALL          0x10
#define AI_ADDRCONFIG   0x20
#define AI_NUMERICSERV  0x400


#define NI_NUMERICHOST  0x01
#define NI_NUMERICSERV  0x02
#define NI_NOFQDN       0x04
#define NI_NAMEREQD     0x08
#define NI_DGRAM        0x10
#define NI_NUMERICSCOPE 0x100

#define EAI_BADFLAGS   -1
#define EAI_NONAME     -2
#define EAI_AGAIN      -3
#define EAI_FAIL       -4
#define EAI_FAMILY     -6
#define EAI_SOCKTYPE   -7
#define EAI_SERVICE    -8
#define EAI_MEMORY     -10
#define EAI_SYSTEM     -11
#define EAI_OVERFLOW   -12

int getaddrinfo (const char *__restrict, const char *__restrict, const struct addrinfo *__restrict, struct addrinfo **__restrict);
void freeaddrinfo (struct addrinfo *);
int getnameinfo (const struct sockaddr *__restrict, socklen_t, char *__restrict, socklen_t, char *__restrict, socklen_t, int);
const char *gai_strerror(int);


/* Legacy functions follow (marked OBsolete in SUS) */

struct netent {
    char *n_name;
    char **n_aliases;
    int n_addrtype;
    uint32_t n_net;
};

struct hostent {
    char *h_name;
    char **h_aliases;
    int h_addrtype;
    int h_length;
    char **h_addr_list;
};
#define h_addr h_addr_list[0]

struct servent {
    char *s_name;
    char **s_aliases;
    int s_port;
    char *s_proto;
};

struct protoent {
    char *p_name;
    char **p_aliases;
    int p_proto;
};

void sethostent (int);
void endhostent (void);
struct hostent *gethostent (void);

void setnetent (int);
void endnetent (void);
struct netent *getnetent (void);
struct netent *getnetbyaddr (uint32_t, int);
struct netent *getnetbyname (const char *);

void setservent (int);
void endservent (void);
struct servent *getservent (void);
struct servent *getservbyname (const char *, const char *);
struct servent *getservbyport (int, const char *);

void setprotoent (int);
void endprotoent (void);
struct protoent *getprotoent (void);
struct protoent *getprotobyname (const char *);
struct protoent *getprotobynumber (int);

#endif