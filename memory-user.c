#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
int x = atoi(argv[1]);
int *mem = malloc(x * 1,048,576);//1,048,576 bits in a megabyte
while{
    for (int i = 0; i < (x*1,048,576); i++)
            mem[i] += 1;
}
}