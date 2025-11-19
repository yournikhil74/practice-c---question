// program check the number is palindrome or not.
// palindrome number is a number in which their value is equal to there reverse value 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int t=n; //1221=1222
    int rev=0;

    while (t>0) // 1221>0=yes
    {
        int dig= t % 10;  //dig=1221%10=1
        rev= rev * 10 + dig; //rev=0 ; rev=0*10+1=1
        t/= 10; // 1221/10=122.1
    }
    
    if(n==rev){  //1221==1
       cout<<"palindrome";
    }
    else{
        cout<<"not";
    } 
}