#include<iostream>
using namespace std;
int main(){
    int n,num;
    int row,col;
    cout<<"Enter the no. of Row : ";
    cin>>num;
    if(num>3){
         n=num/2;
    for(row=0;row<n;row++){
        // space 
        for(col=0;col<n-row-1;col++){
            cout<<" ";
        }
        // star
        for(col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
     for(row=0;row<n;row++){
        //space
        for(col=0;col<row;col++){
            cout<<" ";
        }
        //star
        for(col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
        
        }     
        
    }
    else{
        cout<<"Enter more then 3 Row "<<endl;
    }
   
    return 0;
    
}