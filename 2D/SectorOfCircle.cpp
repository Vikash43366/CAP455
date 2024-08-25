#include<iostream>
using namespace std;
int main(){
    //radius =r , degree= d ,
    float r,pi=3.14,area,d;
    cout<<"\nEnter the value of radius : ";
    cin>>r;
    cout<<"\nEnter the angle of sector : ";
    cin>>d;
    area=((d/360)*(pi*r*r));
    cout<<"The area of sector : "<<area;
    return 0;
    

}