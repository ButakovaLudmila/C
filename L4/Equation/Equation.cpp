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

    
    cout << "\nВведите коэффициент а квадратного уравнения, отличный от 0: " << endl;
    cin >> a;

    if (a != 0) {
        cout << "\nВведите коэффициент b квадратного уравнения: " << endl;
        cin >> b;
        cout << "\nВведите коэффициент c квадратного уравнения: " << endl;
        cin >> c;
    }
    else
        cout << "\nУравнение с коэффициентом a=0 не является квадратным уровнением" << endl;

    if (Root(a, b, c, x1, x2) < 0) {
        cout << "\nКорней уравнения нет" << endl;
    }
    else if (Root(a, b, c, x1, x2) > 0) {
            cout << "\nКорней уравнения два. x1 = " << x1 << ", x2 = " << x2 << endl;
        }
        else
            cout << "\nКорней уравнения один. x1 = x2 = " << x1 << endl;

}