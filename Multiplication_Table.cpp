#include <iostream>
#include<iomanip>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout <<setw(3)<< n <<setw(3)<< "X" <<setw(3)<< i <<setw(3)<< " = " <<setw(3)<< n * i << setw(3)<<endl;
    }
    return 0;
}