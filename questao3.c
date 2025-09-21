#include <stdio.h>

int main() {
  int n;
  int dado=0;
  while(dado < 20){
  printf("Insira um numero:");
  scanf("%d" , &n);
  dado+=n;
  }
  printf("Você ganhou");
    return 0;
}