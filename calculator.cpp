#include<iostream>
using namespace std;
int main(){

    char op;
    double a,b;
    
    cout<<"Enter the choice(+,-,*,/,%)  ";
    cin>>op;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;

    switch (op)
    {
    case'+':cout<<a+b<<endl;
            break;
    case'-':cout<<a-b<<endl;
            break;
    case'*':cout<<a*b<<endl;
            break;                
    case'/':cout<<a/b<<endl;
            break;        
    default:cout<<"invalid";
        break;

    }
return 0;
    

}