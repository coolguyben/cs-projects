#include <stdio.h>

void name(char name[]){
    printf("hello %s\n", name);
}

int main(void){
    name("Ben");
    name("Steave");
    name("Sawyer");
    name("Cooper");
    name("Gorden");
    return 0;
}