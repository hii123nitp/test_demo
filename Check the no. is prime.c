#include<stdio.h>
int isprime(int);
int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  while(isprime(n)){
    printf("Prime Number.");
    break;
  }
  return 0;
}
int isprime(int n){
  int i=1;
  for(int i=1;i<n/2;i++){
    if(n%i==0){
      return 0;
    }
    else{
      return 1;
    }
  }
}