#include<iostream>
using namespace std;
int main(){

    int year;
    cout<<"enter the year  ";
    cin>>year;

    if(year % 4==0){
      cout<<"leap year";
    }
    else{
        cout<<"this year is not an leap year";
    }
    return 0;
}