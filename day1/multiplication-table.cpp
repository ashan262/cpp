#include<iostream>
using namespace std;

int main(){
    int tableNumber;
    int tableLimit;

    cout<<"Enter Table Number: ";
    cin>>tableNumber;
    cout<<"Enter Table Limit: ";
    cin>>tableLimit;

    for(int i= 1; i<=tableLimit; i++){
        cout<<i<<" * "<<tableNumber<<" = "<<tableNumber*i<<endl;


    }

}