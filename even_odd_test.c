#include<stdio.h>

void even_odd(int num){
 if(num & 0x1)
   printf("Odd Number\n");
 else
   printf("Even Number\n");
}
