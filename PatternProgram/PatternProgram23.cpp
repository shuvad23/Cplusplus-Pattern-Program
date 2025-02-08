// program23--------------------------

#include<iostream>
using namespace std;

int main(){
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    for(int i=1;i<=limitcase;i++){
        for(int j=1;j<=limitcase-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            if(k==1 || k==2*i-1 || i==limitcase){cout<<"* ";}
            else{cout<<"  ";}
        }
        cout<<"\n";
    }
    return 0;
}