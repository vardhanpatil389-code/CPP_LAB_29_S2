#include<stdio.h>

int main(){
int a[4];
int sum=0;

printf("Enter 4 elements of array\n");
for (int i=0;i<4;i++){
    scanf("%d",&a[i]);
}
for (int i=0;i<4;i++){
sum=sum+(a[i]);
}
printf("%d",sum);
return 0;

}