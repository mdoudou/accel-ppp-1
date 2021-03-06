#ifndef __UTILS_H
#define __UTILS_H

#include <netinet/in.h>

void u_inet_ntoa(in_addr_t, char *str);
int u_readlong(long int *dst, const char *src, long int min, long int max);
int u_parse_ip4addr(const char *src, struct in_addr *addr,
		    const char **err_msg);
int u_randbuf(void *buf, size_t buf_len, int *err);

#endif
