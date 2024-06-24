#include<iostream>
using namespace std;

int main(){
    int userValue;
    cout<<"Enter a value in decimal: ";
    cin>>userValue;

    // the sum of odd numbers
    int evenSum = 0;
    int oddSum = 0;
        cout<<"The Sequence upto given vlaue is :"<<endl;
    for(int i = 1; i<=userValue; i++){
        cout<<i<<endl;
        if(i%2 == 0){

          evenSum +=i;
        }else{
            oddSum +=i;

        }
    }
    cout<<"The sum of all even numbers in the sqeuence : "<<evenSum<<endl;

    cout<<"The sum of all odd numbers in the sqeuence : "<<oddSum<<endl;



}