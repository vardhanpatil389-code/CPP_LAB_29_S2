#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0){
    return 1; 
}
return n*factorial(n-1);
}
    

int main(){

    int n;
printf("Enter a no\n");
scanf("%d",&n);
printf("THe factorial of no %d id %d ",n,factorial(n));
return 0;

}