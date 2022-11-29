#include<stdio.h>
int main(){
 int a =10;
 {
  int b = 20;
  printf("%d %d",a,b);
 }
printf("%d %d",a,b);
}