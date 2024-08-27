//curved surface area of cone
#include<iostream>
using namespace std;
int main(){
    //r=radius l=latent height
    float pi=3.14,r,l,volume;
    cout<<"\nEnter the value of Radius : ";
    cin>>r;
    cout<<"\nEnter the value of Height : "; 
    cin>>l;
    volume=pi*r*l;
    cout<<"\nCurved surface area of Cone : "<<volume;
    return 0;


}