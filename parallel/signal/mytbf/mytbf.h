#ifndef MYTBF_H__
#define MYTBF_H__

#define MAXBUCKET	1024

typedef void mytbf_t;

mytbf_t *mytbf_init(int cps, int burst);
int get_token(int size);
int put_token(int);
void mytbf_destroy(void);

#endif
