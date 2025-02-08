// program20----------------------------------------------

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    int countvalue=1;
    int countvalue1=limitcase-1;
    for(int i=1;i<=limitcase*2;i++){
        if(i<=limitcase){
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            for(int k=1;k<=((limitcase*2)-(2*i));k++){
                cout<<"  ";
            }
            for(int l=i;l>=1;l--){
                cout<<"* ";
            }
        }
        else{
            for(int j=1;j<=limitcase-countvalue;j++){
                cout<<"* ";
            }
            for(int k=1;k<=(limitcase*2-2*countvalue1);k++){
                cout<<"  ";
            }
            for(int l=1;l<=limitcase-countvalue;l++){
                cout<<"* ";
            }
            countvalue++;
            countvalue1--;
        }
        cout<<"\n";
    }
    return 0;
}
