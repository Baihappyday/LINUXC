#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <errno.h>
int main(int argc, char ** argv)
{
   if(argc < 2)
   {
       fprintf(stderr, "Usage...");
       exit(1);
   }
   char* linebuf;
   size_t linesize;

   FILE *fp = NULL;
   fp = fopen(argv[1], "r");


   if(fp == NULL)
   {
       perror("fopen");
       exit(1);
   }

   linebuf = NULL;
   linesize = 0;
   while(1)
   {
       if(getline(&linebuf,&linesize,fp)<0){
           break;
       }
       printf("%d\n",strlen(linebuf));
       printf("%d\n",linesize);
   }
   fclose(fp);
   exit(0);
}
