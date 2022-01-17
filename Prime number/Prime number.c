#include <stdio.h>

int IsPrime(int n);

int main(void) {
puts("請計算2~100之間的所有質數並輸出");
for(int num=2;num<=100;++num)
{
  if(IsPrime(num))
  {
    printf("%d\n",num);
  }
}
  return 0;
}

int IsPrime(int n){
  int flag=0;
  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (n == 1) {
   return 0;
  } 
  else {
    if (flag == 0)
      return 1;
    else
      return 0;
  }
}