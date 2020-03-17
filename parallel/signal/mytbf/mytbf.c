#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <signal.h>

struct mytbf_st
{
	int cps;
	int burst;
	int token;
	int pos;
};
