//area of traapezium
#include<iostream>
using namespace std;
int main(){
    //smallest parallel side=a, longest parallel side =b, height=h
    float a,b,h,area;
    cout<<"Enter smallest parallel side :  ";
    cin>>a;
    cout<<"Enter longest parallel side :  ";
    cin>>b;
    cout<<"Enter the value of hight :  ";
    cin>>h;
    area=((a+b)*h)/2;
    cout<<"Area of Trapezium : "<<area;

    return 0;

}