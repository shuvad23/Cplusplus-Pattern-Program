// program27----------------------

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    //Hollow Diamond-----------
    int limitcase;
    cout<<"Enter the value: ";
    cin>>limitcase;
    int countvalue=limitcase-1;
    for(int i=1;i<=limitcase;i++){
        for(int j=1;j<=limitcase-i;j++){cout<<"  ";}
        for(int k=1;k<=2*i-1;k++){
            if(k==1 || k==2*i-1){cout<<"* ";}
            else{cout<<"  ";}
        }
        cout<<"\n";
    }
    for(int i=1;i<limitcase;i++){
        for(int j=1;j<=limitcase-(limitcase-i);j++){cout<<"  ";}
        for(int k=1;k<=2*countvalue-1;k++){
            if(k==1 || k==2*countvalue-1){cout<<"* ";}
            else{cout<<"  ";}
        }
        countvalue--;
        cout<<"\n";
    }
    return 0;
}