#include<stdio.h>
void showbits(int num){

int i;
for(i=31; i>=0; i--){

if(num & 1<<i)
  printf("1");

else
  printf("0");
}
printf("\n");
}

