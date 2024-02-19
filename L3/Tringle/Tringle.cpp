# include <iostream>
# include <math.h>
using namespace std;

double areatringle(double a)
{
    double area;
    area = a*a*pow(3, 1.0 / 2)/4;
    return area;
}

double areatringle(double a, double b, double c)
{
    double area, p2;
    p2 = (a + b + c) / 2;
    area = pow((p2 * (p2 - a) * (p2 - b) * (p2 - c)), 1.0 / 2);
    return area;
}

void main()
{
    system("chcp 1251");
    char op;
    double earea, a, b, c;

    cout << "\n�� ������ ��������� ������� ���������������(1) ��� ���������������(2) ������������? " << endl;
    cin >> op;
    switch (op)
    {
    case '1':
    {
        cout << "\n������� �������� ������� a : " << endl;
        cin >> a;
        earea = areatringle(a);
        cout << "\n������� ��������������� ������������  = " << earea << endl;
        break;
    }
       
    case '2':
    {
        cout << "\n������� �������� ������� a : " << endl;
        cin >> a;
        cout << "\n������� �������� ������� b : " << endl;
        cin >> b;
        cout << "\n������� �������� ������� c : " << endl;
        cin >> c;
        earea = areatringle(a, b, c);
        cout << "\n������� ��������������� ������������  = " << earea << endl;
        break;
    }
    default:
        cout << "�� ������� �� �����������\n";
    }
    
}