#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    system("chcp 1251");
    int s;
    int c1 = 1, c2 = 2, c5 = 5, c10 = 10;
    int kc1 = 0, kc2 = 0, kc5 = 0, kc10 = 0;
    cout << "������� �����, ������� �� ������ �������� ��������: ";
    cin >> s;

    if (s > 10)
    {
        kc10 = s / c10;
        s = s % c10;    
    }
    if (s > 5)
    {
        kc5 = s / c5;
        s = s % c5;
    }
    if (s > 2)
    {
        kc2 = s / c2;
        s = s % c2;
    }
    if (s > 1)
    {
        kc1 = s / c1;
        s = s % c1;
    }

    cout << "\n���������� ����� 10 ��� " << kc10 << endl;
    cout << "\n���������� ����� 5 ��� " << kc5 << endl;
    cout << "\n���������� ����� 2 ��� " << kc2 << endl;
    cout << "\n���������� ����� 1 ��� " << kc1 << endl;
    return 0;
}