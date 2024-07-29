// Find the multiples M of number num between N1 and N2 from taking numbers from the user
#include <iostream>
using namespace std;
int M = 0, num, N1, N2;
void input()
{
    cout << "Enter the number of which you want to find the multiples: ";
    cin >> num;
    cout << "Enter the range (starting and ending): ";
    cin >> N1 >> N2;
}
int check()
{
    for (int a = N1; a <= N2; a++)
    {
        if (a % num == 0)
        {
            M++;
        }
    }
    return M;
}
void show(int c)
{
    cout << "There are " << c << " multiples between " << N1 << " and " << N2 << endl;
}
int main()
{
    input();
    int c = check();
    show(c);
    return 0;
}