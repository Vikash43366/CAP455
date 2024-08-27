//volume of cone
#include<iostream>
using namespace std;
int main(){
    //r=radius h=height
    float pi=3.14,r,h,volume;
    cout<<"\nEnter the value of Radius : ";
    cin>>r;
    cout<<"\nEnter the value of Height : "; 
    cin>>h;
    volume=(pi*r*r*h)/3;
    cout<<"\nVolume of Cone : "<<volume;
    return 0;


}