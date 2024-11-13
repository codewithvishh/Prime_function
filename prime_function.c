#include<stdio.h>
int prime(int n);
int prime(int n){
  int c=0;
  for(int i=1;i<=n;i++){
if(n%i==0) c++;
}
  printf(c==2 ?"Prime Number" : "Not Prime Number");
}
int main(){
  int n;
printf("enter number");
scanf("%d",&n);
prime(n);
return 0;
}
