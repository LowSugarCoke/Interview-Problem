#include <stdio.h>
#include <stdlib.h>

int main(void) {
  puts("有N個人圍成一圈並順序排號, 從第一個人開始報數, 1, 2, 3等順序, 每報到3的人退出, 最後留下的是編號幾號的人");


  int RANGE;
  puts("請輸入人數=");
  scanf("%d",&RANGE);

  int* people = (int*)malloc(sizeof(int)*RANGE);

  for(int i=0;i<RANGE;++i)
  {
    people[i]=i+1;
  }

  int count=RANGE;
  int i=0;
  int pt=0;
  while(count!=1)
  {
    if(people[i]>0)
    {
      pt++;
    }
    if(pt==3)
    {
      people[i]=-1;
      pt=0;
       count--;
    }
    ++i;
    if(i==RANGE)
    {
      i=0;
    }
   
  }
  
  for(int i=0;i<RANGE;++i)
  {
    if(people[i]>0)
    {
      printf("剩下:%d號",people[i]);
    }
  }

  free(people);
  return 0;
}