# include <iostream>
#include <cmath>
using namespace std;

string tobinary(int n)
{
    string b; 

    do
    {
        b += char('0' + n % 2);
        n = n / 2;
    } while (n > 0);
    return string(b.crbegin(), b.crend()); 
}

int main()
{
    system("chcp 1251");
    int a;

    cout << "������� ���������� ����� ��� �������� � ��������: ";
    cin >> a;
    cout << "\n�������� �����: " << tobinary(a) << endl;

    return 0;
}