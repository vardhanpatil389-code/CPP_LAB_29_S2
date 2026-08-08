//To check whether a number is even or odd 
#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter your no"<<endl;
cin>>a;
if(a==0){
    cout<<"Entered Number is neither even nor odd"<<endl;
}
else if (a%2==0 && a==0){
    cout<<"Entered Number is Even"<<endl;
}   
else{
    cout<<"Entered Number is Odd"<<endl;
} 
    return 0;
}