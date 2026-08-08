//To Callculate area and pperimeter of a rectangle
#include<iostream>
using namespace std;
float areA (float l,float b){
    cout<<"The area of the Rectangle is : " <<l*b<<endl;
   return l*b;
}
float perImeteR(float l,float b){
    cout<<"The Perimeter of the Rectangle is : " <<(l+b)*2<<endl;
    return (l+b)*2;
}


int main(){
float a,b;
cout<<"Enter the Parameters of the rectangle "<<endl;
cin>>a>>b;
areA(a,b);
perImeteR(a,b);
}