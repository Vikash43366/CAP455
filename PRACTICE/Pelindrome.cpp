#include <iostream>
using namespace std;

int main ()
{
    int num, reverse = 0, rem, temp;
    cout<<"enter no :";
    cin>>num;
    cout <<"\nThe number is: "<<num<<endl; 
   
    temp = num;
    //loop to find reverse number
    while(temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    };
    
    if (num == reverse){
        cout << num << " is Palindrome";
    }
        
    else{
        cout << num << " is not a Palindrome";
    }
        

}