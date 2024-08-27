//Curved surface of  cylinder

#include<iostream>
using namespace std;
int main(){
    //radius=r height=h
    float pi=3.14,r,h,area;
    cout<<"\nEnter the value of Radius : ";
    cin>>r;
    cout<<"\nEnter heigh : ";
    cin>>h;
    area=(r*h*pi*2);
    cout<<"\nCurved surface of cylinder : "<<area;
    return 0;

}