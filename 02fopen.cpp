#include<stdio.h>
#include<stdlib.h>
#include <errno.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp = fopen("lin","r");
    if(fp == NULL)
    {
        
//	fprintf(stderr, "fopen() failed errno = %d\n", errno);
//	perror("fopen()");
	fprintf(stderr,"fopen():%s\n",strerror(errno));
        exit(1);
    }
    puts("ok!");
    exit(0);
    return 0;
}
