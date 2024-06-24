#include <iostream>
using namespace std;

int main()
{
    int a[5];
    cout << "Enter a digit ";
    cin >> a[0];

    for (int i = 1; i < 5; i++)
    {
        cout << "Enter another digit ";
        cin >> a[i];
        int j = i;
        if (a[j] - a[--j] != 1)
        {
            cout << "Sequence is incorrect" << endl;
            cout << "Stick unsuccessful";
            break;
        }
    }
    int isSuccess = a[4] - a[3];
    if (isSuccess == 1)
    {
        cout << "The Sequence is :";
        for (int i = 0; i < 5; i++)
        {
            cout << a[i] << ", ";
        }
    }
}