#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter the no. of Row : ";
    cin>>n;

    for(row=0;row<n;row++){
        for(col=0;col<n-row;col++){
          if(row==0 || row==n-1){
            cout<<"* ";
          }
            else{
                if(col==0 || col==n-row-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }

}