#include<iostream>
using namespace std;
// ASCII Character vlaue ranges
// 0 - 9  : 48-57
// A - Z  : 65-90
// a - z  : 97-122
//Special Characters : 0-47, 58-64, 91-96, 123-127
int main(){
    char alphabet;
    cout<<"Enter an alphabet: ";
    cin>>alphabet;
    // cout<<"You Enter: "<<int(alphabet);
    if(int(alphabet) >=65 && int(alphabet) <= 95){
        cout<<"The alphabet "<<alphabet<<" is capital.";
    }else
    if(int(alphabet) >=97 && int(alphabet) <= 122){
        cout<<"The alphabet "<<alphabet<<" is small.";
    }else{
        cout<<"The given input is not an alphabat.";
    }


}