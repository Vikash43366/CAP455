//perimeter of rectangle

#include<iostream>
using namespace std;
int main(){
    float l,b,perimeter;
    //l=length ,b=breath;
    cout<<"\nEnter the value of Length : ";
    cin>>l;
    cout<<"\nEnter the value of Breath : ";
    cin>>b;
    perimeter=2*l+2*b;
    cout<<"\nPerimeter of Rectangle : "<<perimeter;
    return 0;
}