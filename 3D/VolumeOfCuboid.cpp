//Volume of cuboid

#include<iostream>
using namespace std;
int main(){
    // length=a, breath =b,height=h
    double l,b,h,area;
    cout<<"\nEnter the value of length : ";
    cin>>l;
    cout<<"\nEnter the value of Breath : ";
    cin>>b;
    cout<<"\nEnter the value of Height : ";
    cin>>h;
    area=(l*b*h);
    cout<<"\nVolume of cuboid : "<<area;
    return 0;

}