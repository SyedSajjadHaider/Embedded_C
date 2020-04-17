#include<stdio.h>
int main(){
int num=0;
if( num  && !(num & (num-1)))
    printf("power of 2\n");
else
    printf("Not Power of 2");

}
