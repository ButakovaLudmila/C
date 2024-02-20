# include <iostream>
# include <math.h>
using namespace std;

double Root(int a, int b, int c, double &x1, double &x2)
{
    int D = b * b - 4 * a * c;
    x1 = (-b + pow(D, 1.0/2)) / 2 * a;
    x2 = (-b - pow(D, 1.0 / 2)) / 2 * a;
    return D;
}

void main()
{
    system("chcp 1251");
    double x1, x2;
    int a = 0, b = 0, c = 0;

    
    cout << "\n������� ����������� � ����������� ���������, �������� �� 0: " << endl;
    cin >> a;

    if (a != 0) {
        cout << "\n������� ����������� b ����������� ���������: " << endl;
        cin >> b;
        cout << "\n������� ����������� c ����������� ���������: " << endl;
        cin >> c;
    }
    else
        cout << "\n��������� � ������������� a=0 �� �������� ���������� ����������" << endl;

    if (Root(a, b, c, x1, x2) < 0) {
        cout << "\n������ ��������� ���" << endl;
    }
    else if (Root(a, b, c, x1, x2) > 0) {
            cout << "\n������ ��������� ���. x1 = " << x1 << ", x2 = " << x2 << endl;
        }
        else
            cout << "\n������ ��������� ����. x1 = x2 = " << x1 << endl;

}