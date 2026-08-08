//to swap two numbers using 3rd variable
#include<iostream>
using namespace std;
void noSwap(int &a,int &b){
 int temp;
 temp=a;
 a=b;
 b=temp;

}


int main(){
    int r,g;
    cout<<"Enter Two numbers that are to be swapped"<<endl;
cin>>r>>g;
 cout<<"You entered "<<r<<" "<<g<<endl;
 noSwap(r,g);
 cout<<"Numbers after swapping "<<r<<" "<<g<<endl;
    
 return 0;
}