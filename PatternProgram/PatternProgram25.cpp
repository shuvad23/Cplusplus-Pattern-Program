// program25-------------------------

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the value: ";
    cin>>limitcase;
    int countvalue=0;
    for(int i=1;i<=limitcase;i++){
        for(int j=1;j<=limitcase-i;j++){cout<<"  ";}
        for(int k=1;k<=2*i-1;k++){
            if(k<=i){cout<<++countvalue<<" ";}
            else{cout<<--countvalue<<" ";}
        }
        cout<<"\n";
    }

    return 0;
}
