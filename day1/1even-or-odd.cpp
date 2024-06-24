#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number :";
    cin>>a;
    if(a % 2 == 0){
        cout<<"The given number \""<<a<<"\" is even.";
    }else{

        cout<<"The given number \""<<a<<"\" is odd.";
    }
    
    getchar();
    return 0;
}