#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
        while (a % 2 == 0) 
            cin >> a;
    if (a % 2 == 1)
        cout << "sys_syccess\n";
}