// To find largest of two numbers using if else Statement
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two Numbers"<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if (b>a)
    {
      cout<<b<<" is greater than "<<a<<endl;
    }
    else{
        cout<<"Both are Equal or none i greater than the other"<<endl;
    }
    
    return 0;
}