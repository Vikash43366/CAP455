#include<iostream>
using namespace std;
int main(){
    float l,b,perimeter;
    cout<<"\nEnter the value of length : ";
    cin>>l;
    cout<<"\nEnter the value of breath : ";
    cin>>b;
    perimeter=2*l+2*b;
    cout<<"\nPerimeter of parallelogram : "<<perimeter;
    return 0;
}