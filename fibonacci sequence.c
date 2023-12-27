#include<stdio.h>
int fibo(int);
int main(){
  printf("Enter a number: ");
  int n;
  scanf("%d",&n);
  fibo(n);
}
int fibo(int x){
  if(x==0){
    return 0;
  }
  if(x==1){
    return 1;
  }
  int fib;
  int fibo1=fibo(x-1);
  int fibo2=fibo(x-2);
  fib=fibo1+fibo2;
  printf("Fibonacci of %d is %d",x,fib);
}