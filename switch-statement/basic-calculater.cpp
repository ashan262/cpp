#include<iostream>
using namespace std;

int main(){
    char operater;
    int value1, vlaue2;
    cout<<"Enter a value : ";
    cin>>value1;
    cout<<"Enter another value : ";
    cin>>vlaue2;
    cout<<"Enter 'A' for addition "<<endl;
    cout<<"Enter 'S' for subtraction "<<endl;
    cout<<"Enter 'M' for multiplication "<<endl;
    cout<<"Enter 'D' for division "<<endl;
    cin>>operater;
    switch (operater)
    {
    case 'A':
    case 'a':
         cout<<value1<<" + "<<vlaue2<<" = "<<value1+vlaue2;
        
        break;
    case 'S':
    case 's':
         cout<<value1<<" - "<<vlaue2<<" = "<<value1-vlaue2;
        
        break;
    case 'M':
    case 'm':
         cout<<value1<<" * "<<vlaue2<<" = "<<value1*vlaue2;
        
        break;
    case 'D':
    case 'd':
         cout<<value1<<" / "<<vlaue2<<" = "<<value1/vlaue2;
        
        break;
    
    default:
        cout<<"Please enter above mantion opetators for required calulation!";
        break;
    }



}