//Curved surface area of cuboid

#include<iostream>
using namespace std;
int main(){
    // length=l, breath =b,height=h
    double l,b,h,area;
    cout<<"\nEnter the value of length : ";
    cin>>l;
    cout<<"\nEnter the value of Breath : ";
    cin>>b;
    cout<<"\nEnter the value of Height : ";
    cin>>h;
    area=((l+b)*h*2);
    cout<<"\nCurved surface area of cuboid : "<<area;
    return 0;

}