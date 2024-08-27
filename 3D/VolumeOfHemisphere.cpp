//volume of hemisphere
#include<iostream>
using namespace std;
int main(){
    float pi=3.14,r,volume;
    cout<<"\nEnter the value of radius : ";
    cin>>r;
    volume=((pi*r*r*r)*2)/3;
    cout<<"\nVolume of hemisphere : "<<volume;
    return 0;
} 
