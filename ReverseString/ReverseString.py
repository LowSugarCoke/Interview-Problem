#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(int b, int e, char *s);
char* reverseWords(char* s);

int main(void) {
  puts("寫個程式其輸入為 Let's take LeetCode contest , 其輸出為s'teL ekat edoCteeL tsetnoc");

  char *s=(char*)malloc(sizeof(char)*28);
  strncpy(s,"Let's take LeetCode contest",28);
  s = reverseWords(s);
  
  printf("Ans = %s",s);
  free(s);
  return 0;
}

void reverse(int b, int e, char *s){

    while(b < e) {
        s[b] = s[b] ^ s[e];
        s[e] = s[b] ^ s[e];
        s[b] = s[b] ^ s[e];
        b++;
        e--;
    }
}

char* reverseWords(char* s) {
    int i, s_len = strlen(s), index = 0;
    
    for(i = 0; i <= s_len; i++) {
        if((s[i] == ' ') || (s[i] == '\0')){
            reverse(index, i - 1, s);
            index = i + 1;
        }
    }
    return s;
}