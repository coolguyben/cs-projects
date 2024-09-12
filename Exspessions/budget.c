#include <stdio.h>

int main(void){
float income[9];
char utilities[9];
char grocies[9];
char car[9];
printf("This is a budget calculator. /n how much do you make a month?/n");
scanf(income, sizeof(income), stdin);
printf("how much do your utilities/n");
scanf("%s", utilities);
scanf("%1f" , income);
printf("you mske %lf", income);
float spend[] = (float) income - (float) utilities;
printf("%f",spend);
return 0;
}