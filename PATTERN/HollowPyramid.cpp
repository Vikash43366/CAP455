#include<iostream>
using namespace std;
int main(){
    int n;
    int row,col;
    cout<<"Enter the no. of Row : ";
    cin>>n;

    for(row=0;row<n;row++){
        //space
        for(col=0;col<n-row-1;col++){
            cout<<" ";
        }
        //star
        for(col=0;col<row+1;col++){
            if(col==0 || col==row+1-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}