#include<iostream>
using namespace std;
int main(){
    int n,num;
    int row,col;
    cout<<"Enter the no. of Row : ";
    cin>>num;
    n=num/2;
if(num>4){
    for(row=0;row<n;row++){
        for(col=0;col<n-row-1;col++){
            cout<<" ";
        }
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

     for(row=0;row<n;row++){
        for(col=0;col<row;col++){
            cout<<" ";
        }
        for(col=0;col<n-row;col++){
            if(col==0 || col==n-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
else{
    cout<<"Enter more then 4 Row ";
}

    

}