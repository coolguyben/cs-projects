#include <stdio.h>

int main(void){
    char name[9];
    printf("hello, what is your name?\n");
    scanf("%s", name);
    printf("hello %s\n", name);
    return 0;
}