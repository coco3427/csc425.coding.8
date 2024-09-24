#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc<2){
        fprintf(stderr, "not enough arguments bozo \n");
        exit(EXIT_FAILURE);
    }
int x = atoi(argv[1])*1048576;//1,048,576 bits in a megabyte
int leng = (int)(x / sizeof(int));
int *mem = malloc(x);
while(1){
    for (int i = 0; i < (leng); i++)
            mem[i] += 1;
}

free(mem);
}