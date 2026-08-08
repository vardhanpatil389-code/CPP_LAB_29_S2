//to check whether a yaer is a leap year or not
#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter a year"<<endl;
    cin>>year;
    if(year%400==0){
        cout<<"Entered year is a leap year"<<endl;
     }
     else{
        cout<<"Entered year isn't a leap year"<<endl;
     }
    return 0;
}