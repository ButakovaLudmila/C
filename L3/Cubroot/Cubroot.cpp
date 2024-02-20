# include <iostream>
# include <math.h>
using namespace std;

double iteration(double x)
{
    const double e = 1e-10;
    double x_prev, x_curr = x/3;
    
    do {
        x_prev = x_curr;
        x_curr = (2 * x_prev + x / (x_prev * x_prev)) / 3;
    } while (abs(x_prev - x_curr) >= e);
    cout << x_curr << endl;
    return x_curr;
}

double pow(double x)
{
    double root;
    root=pow(x, 1.0 / 3);
    return root;
}

void main()
{
    system("chcp 1251");
 
    double first, x, second;
    cout << "\nВведите значение x : " << endl; 
    cin >> x;
    first = pow(x);
    second = iteration(x);
    
    cout << "\nКорень через POW = " << first << endl;
    cout << "\nКорень через итерационную формулу = " << second << endl;

}
