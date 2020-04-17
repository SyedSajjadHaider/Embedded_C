#include<stdio.h>

countbits(int num){
 int count=0,i;
 for(i=31; i>=0; i--){
   if(num & 1<<i)
     count++;
 }
 return count;
}

