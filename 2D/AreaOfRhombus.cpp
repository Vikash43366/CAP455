#include<iostream>
using namespace std;
int main(){
    //side=a,d=diagonal
    float area,a,d1,d2;
    cout<<"\nEnter the value of side : ";
    cin>>a;
    cout<<"\nEnter the value of first diagonal : ";
    cin>>d1;
    cout<<"\nEnter the value of second diagonal : ";
    cin>>d2;
    area =(d1*d2)/2;
    cout<<"Area of rhombus : "<<area;
    return 0;

}