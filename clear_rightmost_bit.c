/*
When one is subtracted from a number , all the bits uptop and including the rightmost 1-bit
starting from the leftmost bit are inverted, and other bits remain unchanged.

Example:-
n=2000, 111 11010000
n=1999, 111 11001111
*/
#include<stdio.h>
int main(){
    unsigned int num = 140;
    (num & 1<<2) ? printf("YES\n") : printf("NO\n");
    num = num & (num - 1);
    (num & 1<<2) ? printf("YES\n") : printf("NO\n");

}