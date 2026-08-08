//to find factorial of a no using for loop
#include<iostream>
using namespace std;

int main(){
    int fac=1;
    int n;
    cout<<"Enter a no whose factorial is to be found"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        fac=fac*i;
    }
    cout<<"The factorial of "<<n<<" is "<<fac<<endl;
    return 0;
}