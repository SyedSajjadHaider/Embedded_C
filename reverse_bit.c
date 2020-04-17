int reverse(int num){
  int i,rev=0;
  for(i=0; i<=31; i++){
  if( num & 1<<i ){
    rev = rev | (1<< 31-i);
  }
 }
return rev;
}
