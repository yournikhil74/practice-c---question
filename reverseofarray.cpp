#include <iostream>
using namespace std;

int reverse(int arr[],int sz){
     
    int start=0; 
    int end=sz-1;
    
    for(int i = 0; i < sz; i++){
        cin>>arr[i];
    }
    cout<<"your array elements "<<endl;
    for(int i = 0; i < sz; i++){ 
     cout<<arr[i];
      
    }
    for(int i = 0; i < sz; i++){
        swap(start,end);
        arr[i];
    }
    return arr[sz];
}

int main() {
     
     int arr[]={1,2,3,4};
     int sz=4;
     

    return 0;
}