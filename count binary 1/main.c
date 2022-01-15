#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define RANGE 1000

int IsDigit(char s[RANGE]);
void ToBinary(int num);

int main(void) {
  puts("請寫一個程式, 輸入一個字串, 先判定字串是否只包含0~9, 請將此字串轉為十進制數字, 將十進制數字輸出2進位, 並且計算2進位數字裡有多少個”1”");

   printf("請輸入任意數字轉成二進位\n");
  char str[RANGE];
  scanf("%s",str);
  
 if(!IsDigit(str))
 {
    printf("非數字");
    return 0;
 }
 printf("是數字\n");

  int num = atoi( str );  //char[] to int
  ToBinary( num);
  return 0;
}

int IsDigit(char s[RANGE]){
   int num = strlen(s);

   for (int i=0;i<num;++i)
  {
    if(!(s[i]-'0'>=0) || !(s[i]-'9'<=0))
    {
      return 0;   
    }
    
  }
  return 1;

}

void ToBinary(int num){

  int i=0,a[RANGE];
  int count_1=0;

 while (num>0)   
    {
        a[i] = num%2;  
        if(num%2==1)
        {
          count_1++;
        }
        i = i+1;
        num = num/2;
    }
       printf("十進位制整數轉換為二進位制數是:");
    for(; i > 0; i--)
        printf("%d",a[i-1]);
    printf("\n");
    printf("總共有%d個1",count_1);

}