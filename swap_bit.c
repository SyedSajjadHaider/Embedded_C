#include<stdio.h>

void function(int no,int pos1,int pos2){

unsigned int bit1 = (no >> pos1) & 1;
unsigned int bit2 = (no >> pos2) & 1;
unsigned x = bit1 ^ bit2;

unsigned int z = (x<<pos1)|(x<<pos2);

printf("%d",no^z);

}

int main(){

function(28,0,3);

}
