int Right_shift(int num,int times){
    return (num<<(32-times) | num>>times);
}

int Left_shift(int num,int times){
   return (num>>(32-times) | num<<times );
}

