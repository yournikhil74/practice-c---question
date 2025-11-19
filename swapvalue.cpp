#include<iostream>
using namespace std;  

void swap(int *a,int *b )
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=10;
    int b=22;
    cout<<"before swapping: "<<"a = "<<a<<" and b = "<<b<<endl;
    swap(&a,&b);
    cout<<"after swapping: "<<"a = "<<a<<" b = "<<b<<endl;
    return 0;
}