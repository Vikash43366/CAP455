#include<iostream>
using namespace std;
int main(){
    float pi=3.14,r,h,volume;
    cout<<"\nEnter the value of Radius : ";
    cin>>r;
    cout<<"\nEnter heigh : ";
    cin>>h;
    volume=(r*r*h*pi);
    cout<<"\nVolume of cylinder : "<<volume;
    return 0;

}