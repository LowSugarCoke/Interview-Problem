#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void) {

  puts("請寫出一個stack功能的函數組, 包含以下function,  stack深度是5\na.	init () 清空stack\nb.	push(value) 將資料放入stack\nc.	pop()將資料取出, 並從stack把資料刪除\nd.	top()僅取出資料, 不刪除資料\ne.	full() stack 已滿, empty() stack 已經空了\n	輸入”abcdef”, 打印出 ‘”edcba”");

  Stack * t = (Stack*)malloc(sizeof(Stack*));
  init(t);

  puts("放入\nabcdef");
  push(t,'a');
  push(t,'b');
  push(t,'c');
  push(t,'d');
  push(t,'e');
  push(t,'f');

  puts("輸出");
  pop(t);
  pop(t);
  pop(t);
  pop(t);
  pop(t);

  free(t);

  return 0;
}