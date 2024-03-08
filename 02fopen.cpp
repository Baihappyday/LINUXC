#include<stdio.h>
#include<stdlib.h>
#include <errno.h>
#include<string.h>
int main()
{
    int count = 0;
    FILE *fp = NULL;
    while(1)
    {
        fp = fopen("lin","r");
        if(fp == NULL){
            perror("fopen()");
            break;
        }
        count++;
    }
    printf("count = %d\n", count);
/*  if(fp == NULL)
    {     
//	fprintf(stderr, "fopen() failed errno = %d\n", errno);
//	fprintf(stderr,"fopen():%s\n",strerror(errno));
	    perror("fopen()");
//      exit(1);
    }
    puts("ok!");
    fclose(fp);
*/

    exit(0);
}
