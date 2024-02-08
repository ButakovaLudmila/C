#include <iostream>
using namespace std;

int main() {

    system("chcp 1251");
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
    double x5;
    double y5;

    cout << "Введите первую координуту x\n";
    cin >> x1;
    cout << "Введите первую координату y\n";
    cin >> y1;
    cout << "Введите вторую координуту x\n";
    cin >> x2;
    cout << "Введите вторую координату y\n";
    cin >> y2;
    cout << "Введите третью координуту x\n";
    cin >> x3;
    cout << "Введите третью координату y\n";
    cin >> y3;
    cout << "Введите четвертую координуту x\n";
    cin >> x4;
    cout << "Введите четвертую координату y\n";
    cin >> y4;
    cout << "Введите пятую координуту x\n";
    cin >> x5;
    cout << "Введите пятую координату y\n";
    cin >> y5;

    double t = x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5;
    if (t < 0) t = -t;
    double s = t / 2;
    cout.precision(3);
    cout << "\nПлощадь пятиугольника равна: " << s << endl;

    return 0;
}
