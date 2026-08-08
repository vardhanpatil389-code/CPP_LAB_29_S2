//To calculate area and circumference of a circle
#include<iostream>
using namespace std;
const float PI=3.141;
float areA(float r){
    cout<<"The area of the circle is : "<<PI*r*r<<endl;
    return PI*r*r;
}
float Circumference(float r){
    cout<<"The Circumference of the circle is : "<<2*PI*r<<endl;
    return PI*r*2;
}



int main(){
    float a;
    cout<<"Enter the radius"<<endl;
    cin>>a;
areA(a);
Circumference(a);
    return 0;
}