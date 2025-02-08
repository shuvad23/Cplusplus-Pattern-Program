// program21----------------------------

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    for(int i=1;i<=limitcase;i++){
        for(int j=1;j<=limitcase;j++){
            if(i==limitcase){cout<<"* ";}
            else if(i>=2 && i<=limitcase-1){
                if(j==1){cout<<"* ";}
                else if(j==limitcase){cout<<"* ";}
                else{cout<<"  ";}
            }
            else{cout<<"* ";}
        }
        cout<<"\n";
    }

    return 0;
}
