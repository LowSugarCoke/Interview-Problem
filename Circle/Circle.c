#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int x_1,y_1,r_1;
int x_2,y_2,r_2;

void InitCircle();
void CircleSituation();

int main(void) {

  puts("設計一程式，提示使用者輸入兩個圓形的中心點(x,y)和半徑。判斷第二個圓形是在第一個圓形的1.內部2.重疊3.無相交");

 InitCircle();
 CircleSituation();
  return 0;
}

void InitCircle(){
  printf("請輸入第一個圓的x,y,半徑，舉例來說(2,3,7)\n");
  scanf("%d%d%d",&x_1,&y_1,&r_1);

  printf("請輸入第二個圓的x,y,半徑，舉例來說(1,0,3)\n");
  scanf("%d%d%d",&x_2,&y_2,&r_2);
}

void CircleSituation(){
  double distance = sqrt((x_2-x_1)*(x_2-x_1)+(y_2-y_1)*(y_2-y_1));


  if(distance < abs(r_1 + r_2))
  {
     puts("兩圓重疊");
  }
  else if(distance == abs(r_1-r_2)&& r_1>r_2)
  {
    puts("第二個圓在第一個圓的內部，並內切");
  }
    else if(distance == abs(r_1-r_2)&& r_2>r_1)
  {
    puts("第一個圓在第二個圓的內部，並內切");
  }
  else if(distance == (r_1 + r_2))
  {
    puts("第二個圓在第一個圓的外部，並外切");
  }
   else if(distance > (r_1 + r_2))
  {
   puts("無相交");
  }
}
