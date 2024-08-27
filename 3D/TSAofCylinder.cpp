//Total surface of  cylinder

#include<iostream>
using namespace std;
int main(){
    //radius=r height=h
    float pi=3.14,r,h,area;
    cout<<"\nEnter the value of Radius : ";
    cin>>r;
    cout<<"\nEnter heigh : ";
    cin>>h;
    area=((2*r*h*pi)+(pi*r*r*h));
    cout<<"\nTotal surface of cylinder : "<<area;
    return 0;

}