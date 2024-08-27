//Curved surface area of hemisphere
#include<iostream>
using namespace std;
int main(){
    float pi=3.14,r,area;
    cout<<"\nEnter the value of radius : ";
    cin>>r;
    area=(pi*r*r)*2;
    cout<<"\nCurved surface area of hemisphere : "<<area;
    return 0;
} 
