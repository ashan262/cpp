#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number :";

    cin >> num;
    cout<<num;

    if (num > 0)
    {
        cout << "The given number \"" << num << "\" is positive.";
    }
    else if (num < 0)
    {

        cout << "The given number \"" << num << "\" is negative.";
    }
    else
    {
        cout << "The given number \"" << num << "\" is zero.";
    }
    

    getchar();
    return 0;
}