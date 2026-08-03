#include<iostream>
#include<string>
using namespace std;
class productInfo{
int prod_id;
string prod_name;
int prod_quantity;
float prod_price;

public:
void getDetails(){
cout<<"Enter the Product id"<<endl;
cin>>prod_id;
cout<<"Enter the Product name"<<endl;
cin>>prod_name;
cout<<"Enter the Product quantity"<<endl;
cin>>prod_quantity;
cout<<"Enter the Product price"<<endl;
cin>>prod_price;
}
float totalCost(){
    return prod_price*prod_quantity;
}
void displayDetails(){
cout<<"The Product ID is :"<<prod_id<<endl;
cout<<"The Product Name is :"<<prod_name<<endl;
cout<<"The Product quantity is :"<<prod_quantity<<endl;
cout<<"The Product Price is :"<<prod_price<<endl;
cout<<"The total cost is :"<<totalCost()<<endl;
}
};
int main(){
productInfo p1;
p1.getDetails();
p1.displayDetails();


return 0;

}