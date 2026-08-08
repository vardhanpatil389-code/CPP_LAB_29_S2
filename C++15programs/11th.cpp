//To check a no is +ve or -ve
#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a no"<<endl;
    cin>>a;
    if(a==0){
        cout<<"Entered No is 0 "<<endl;
    }
    else if(a>0){
        cout<<"Entered No is +ve "<<endl;
    }
    else if(a<0){
        cout<<"Entered No is -ve "<<endl;
    }
    return 0;
}