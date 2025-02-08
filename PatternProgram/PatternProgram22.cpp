// program22------------------------------------------------

#include<iostream>
using namespace std;

int main(){
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    int countvalue=limitcase;
    int countcase=limitcase;
    int refervalue=countcase;
    for(int i=1;i<=limitcase;i++){
        for(int j=1;j<=(limitcase*2)-1;j++){
            if(i<=limitcase && j<=limitcase){
                if(countcase==countvalue){cout<<countvalue<<" ";}
                else{cout<<countvalue--<<" ";}
            }
            else if(i<=limitcase && j>=limitcase){
                if(refervalue>1){cout<<countvalue<<" ";refervalue--;}
                else{cout<<++countvalue<<" ";}
            }
        }
        countcase--;
        refervalue=countcase;
        countvalue=limitcase;
        cout<<"\n";
    }
    countcase=2;
    refervalue=countcase;
    for(int i=1;i<limitcase;i++){
        for(int j=1;j<=(limitcase*2)-1;j++){
            if(i<limitcase && j<limitcase){
                if(countcase==countvalue){cout<<countvalue<<" ";}
                else{cout<<countvalue--<<" ";}
            }
            else if(i<limitcase && j>=limitcase){
                if(refervalue>=1){cout<<countvalue<<" ";refervalue--;}
                else{cout<<++countvalue<<" ";}
            }
        }
        countcase++;
        refervalue=countcase;
        countvalue=limitcase;
        cout<<"\n";
    }
    return 0;
}
