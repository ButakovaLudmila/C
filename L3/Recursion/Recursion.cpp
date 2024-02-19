# include <iostream>
#include <cmath>
using namespace std;

int sum(int a)
{
    if (a <= 0)
        return 0;
    if (a > 0)
        return sum(a - 1)+5*a;
}


int main()
{
    system("chcp 1251");
    int n;

    cout << "Введите n для вычисления суммы ряда: ";
    cin >> n;
    cout << "\nСумма ряда равна: " << sum(n) << endl;

    return 0;
}


