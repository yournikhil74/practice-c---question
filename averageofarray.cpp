#include <iostream>
using namespace std;
int main(){
    int sz;
    cout<<"enter the size of array: "<<endl;
    cin>>sz; 
    
    int arr[sz];
    cout<<"enter the elments of aray: "<<endl;
    for(int i = 0;i < sz; i++){
        cin>>arr[i];
    }

    cout<<"your elements are: "<<endl;
    for(int i = 0;i < sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int sum=0;
    for(int i = 0;i < sz;i++){
        sum+=arr[i];
    }
    cout<<"sum of array: "<<sum<<endl;
    int avg=(int)sum/sz;
    cout<<"averag of array is: "<<avg<<endl;   //average of array.







    int target;        //compare between target num and avg of array.
    cout<<"enter the number to be compare: "<<endl;
    cin>>target;
    
    if (avg > target)
    {
     cout<<"average is greater than target..";
     }
    else{
    cout<<"avg is smaller than target...";
    }
     
}