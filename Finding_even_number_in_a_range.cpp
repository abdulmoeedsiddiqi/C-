#include <iostream>
using namespace std;
int main()
{
    int n1, n2, check = 0;
    cout << "Enter the range:";
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {
        if (i % 2 == 0)
        {
            check++;
        }
    }
    cout << "Even numbers b/w " << n1 << " and " << n2 << " is " << check;
    return 0;
}