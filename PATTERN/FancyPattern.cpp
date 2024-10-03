#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter the no. of Row : ";
    cin>>n;
//first method 

    // for(row=0;row<n;row++){
    //     for(col=0;col<2*row+1;col++){
    //         if(col%2==1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<row+1;
    //         }
    //     }
    //     cout<<endl;
    // }
    //     return 0;

// second method 

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

}