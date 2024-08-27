//volume of sphere
#include<iostream>
using namespace std;
int main(){
    float pi=3.14,r,volume;
    cout<<"\nEnter the value of radius : ";
    cin>>r;
    volume=((pi*r*r*r)*4)/3;
    cout<<"\nVolume of sphere : "<<volume;
    return 0;
} 
