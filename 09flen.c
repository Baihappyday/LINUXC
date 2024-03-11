#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{

    FILE *fp;
    int cout = 0;
    if(argc < 2){
        fprintf(stderr, "Usage...\n");
        exit(1);
    }

    fp = fopen(argv[1], "r");
    if(fp == NULL){
        perror("fopen()");
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    printf("%ld\n", ftell(fp));


    /*while(fgetc(fp) != EOF){
        cout++;
    }
    printf("cout = %d\n", cout);*/


    free(fp);
    exit(0);
}