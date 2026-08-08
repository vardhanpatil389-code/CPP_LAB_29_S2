//To find largest of three nos
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 3 Numbers : ";
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
       cout<<a<<" is the greatest among the three"<<endl;
    }
    else if (b>a && b>c)
    {
        cout<<b<<" is the greatest among the three"<<endl;
    }
    else if (c>a && c>b)
    {
        cout<<c<<" is the greatest among the three"<<endl;
    }
    else{
        cout<<"None is the greatest"<<endl;
    }
    
    return 0;
}