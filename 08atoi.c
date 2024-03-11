#include<stdio.h>
#include<stdlib.h>

int main()
{
//    char str[] = "1234aa561";
//    printf("%d\n" ,atoi(str));
    char buf[1024];
    int year = 2024, month = 3, day = 11;
    sprintf(buf,"%d-%d-%d",year,month,day);
    puts(buf);
//sprintf(buf, "format",...)
    exit(0);
}