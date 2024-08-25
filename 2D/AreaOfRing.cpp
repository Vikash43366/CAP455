//area of ring
#include<iostream>
using namespace std;
int main(){
    //Radius 1st=R , radius 2nd =r
    float R,r,area;
    cout<<"Enter 1st Radius : ";
    cin>>R;
    cout<<"Enter 2nd Radius : ";
    cin>>r;
    area=((R*R)-(r*r))*3.14;
    cout<<"Area of Ring : "<<area;
    return 0;
}