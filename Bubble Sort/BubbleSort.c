#include <stdio.h>


void BubbleSort(int* input,int size);

int main(void) {

  int data[10];
  data[0] = 2;
  data[1] = 1;
  data[2] = 4;;
  data[3] = 10;
  data[4] = 30;
  data[5] = 70;
  data[6] = 15;
  data[7] = 20;
  data[8] = 100;
  data[9] = 3;

  int size = sizeof(data)/sizeof(int);
  BubbleSort(data,size);
    
  for(int i=0;i<10;++i)
  {
    printf(" %d",data[i]);
  }

  
  return 0;
}

void BubbleSort(int* input,int size)
{

  for(int i=0;i<size;++i)
  {
    for(int j=i;j<size;++j)
    {
      if(input[i]>input[j])
      {
        int temp = input[i];
        input[i]=input[j];
        input[j] = temp;
      }
    }
  }
    

}