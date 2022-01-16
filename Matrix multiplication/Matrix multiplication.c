#include <stdio.h>
#include <stdlib.h>

int InitMatrix();
void InsertNumToMatrix();
void MaltiMatrix();
void FreeMatrix();

int r_1,c_1,r_2,c_2;

int** m_1;
int** m_2;
int** m_3;

int main(void) {
 
puts("寫一程式計算兩個矩陣的乘法, 先輸入兩個矩陣的N與M(NxM矩陣), 並逐步輸入矩陣中的所有數字,請輸出兩矩陣相乘後的結果(Ex: A 是 2x3 的矩陣, B 是 3x4 的矩陣, AxB = C為 2x4 矩陣) ");

if(!InitMatrix())
{
    puts("矩陣無法相乘");
}

InsertNumToMatrix();
MaltiMatrix();
FreeMatrix();
return 0;
}

int InitMatrix(){
  printf("請輸入第一個矩陣的row and col,舉例來說(2 3)\n");
  scanf("%d%d",&r_1,&c_1);
  

  printf("請輸入第二個矩陣的row and col,舉例來說(3 2)，注意rol要和第一個矩陣col相同\n");
  scanf("%d%d",&r_2,&c_2);

  if(c_1!=r_2)
  {
    return 0;
  }
   //二為動態陣列
 m_1 =(int**)malloc(sizeof(int*)*r_1);
  for(int i=0;i<r_1;++i)
  {
    m_1[i] = (int*)malloc(sizeof(int)*c_1);
  }

   m_2 =(int**)malloc(sizeof(int*)*r_2);
  for(int i=0;i<r_2;++i)
  {
    m_2[i] = (int*)malloc(sizeof(int)*c_2);
  }

     m_3 =(int**)malloc(sizeof(int*)*r_1);
  for(int i=0;i<r_1;++i)
  {
    m_3[i] = (int*)malloc(sizeof(int)*c_2);
  }
  return 1;
}

void InsertNumToMatrix(){
puts("請矩陣1的數字");
  for(int i=0;i<r_1;++i)
  {
    for( int j=0;j<c_1;++j)
    {
      printf("(%d,%d)=",i,j);
      scanf("%d",&m_1[i][j]);
    }
  }
  
  puts("矩陣1=");
  for(int i=0;i<r_1;++i)
  {
    for( int j=0;j<c_1;++j)
    {
      printf("%d \t",m_1[i][j]);
    }
    printf("\n");
  }

  puts("請矩陣2的數字");
  for(int i=0;i<r_2;++i)
  {
    for( int j=0;j<c_2;++j)
    {
      printf("(%d,%d)=",i,j);
      scanf("%d",&m_2[i][j]);
    }
  }
  
  puts("矩陣2=");
  for(int i=0;i<r_2;++i)
  {
    for( int j=0;j<c_2;++j)
    {
      printf("%d \t",m_2[i][j]);
    }
    printf("\n");
  }

}
void MaltiMatrix(){
  puts("矩陣相乘 = ");
    
  for(int i=0;i<r_1;++i)
  {
    for(int j=0;j<c_2;++j)
    {
      for(int k=0;k<c_1;++k)
      {m_3[i][j] = m_3[i][j]+m_1[i][k] *m_2[k][j];
    }
    printf("%d \t",m_3[i][j]);
    }
    printf("\n");
  }
}
void FreeMatrix(){
  
  for(int i=0;i<r_1;++i)
  {
    free(m_1[i]);
  }
  for(int i=0;i<r_2;++i)
  {
    free(m_2[i]);
  }
  for(int i=0;i<r_1;++i)
  {
     free(m_3[i]);
  }
  free(m_1);
  free(m_2);
  free(m_3);
}