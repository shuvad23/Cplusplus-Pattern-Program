// program19------------------------

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    int countvalue=limitcase;
    for(int i=0;i<limitcase*2;i++){
        if(i<limitcase){
            for(int j=1;j<=limitcase-i;j++){
                cout<<"* ";
            }
            for(int k=1;k<=(limitcase*2-2*countvalue);k++){
                cout<<"  ";
            }
            for(int l=1;l<=limitcase-i;l++){
                cout<<"* ";
            }
            countvalue--;
        }
        else{
            if(countvalue<1){countvalue=1;}
            for(int j=1;j<=countvalue;j++){
                cout<<"* ";
            }
            for(int k=1;k<=((limitcase*2)-(2*countvalue));k++){
                cout<<"  ";
            }
            for(int l=countvalue;l>=1;l--){
                cout<<"* ";
            }
            countvalue++;
        }
        cout<<"\n";
    }
    return 0;
}
