#include<iostream>
using namespace std;
int main(){
int n;
int *a;
cout<<"Enter size of array\n";
cin>>n;
a=new int [n];
delete[]a;
return 0;
}