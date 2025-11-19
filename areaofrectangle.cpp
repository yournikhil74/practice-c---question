#include<iostream>
using namespace std;   // ✅ Correct namespace

class Area {
public:
    int l;
    int b;

    void getInfo(int l, int b) {   // method with parameters
        cout << "Area: " << l * b << endl;
    }
};

int main() {
    Area a;   
    int l,b;
    cout<<"enter the length: "<<endl;
    cin>>l;
    cout<<"enter the breadth: "<<endl;
    cin>>b;         
    a.getInfo(l, b);   // ✅ pass values here
    return 0;
}
