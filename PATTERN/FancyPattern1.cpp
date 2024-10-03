#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter the no. of Row : ";
    cin>>n;

    for(row=0;row<n;row++){
        for(col=0;col<row+1;col++){
            if(col==row+1-1){
               cout<<row+1; 
            }
            else{
                cout<<row+1<<"*";
            }
           
        }
        cout<<endl;
    }
     for(row=0;row<n;row++){
        for(col=1;col<n-row;col++){
            if(col==n-row-1){

               cout<<n-row-1; 
            }
            else{
                cout<<n-row-1<<"*";
            }
           
        }
        cout<<endl;
    }

}