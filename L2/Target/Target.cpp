#include <iostream>

using namespace std;
int main()
{
    system("chcp 1251");
    double x = 0, y = 0;
    int temp = 0;
    int count = 0;

    while (temp < 50)
    {
        cout << "Введите координаты выстрела x,y:\n";
        cin >> x >> y;

        if ((x >= -1 && y >= -1) && (x <= 1 && y <= 1)) {
            temp = temp + 10;
            count = count + 1;
            cout << "Вы заработали 10 баллов" << endl;
        }
        else if (((x >= -2 && y >= -2) && (x < -1 && y < -1)) || ((x > 1 && y > 1) && (x <=2 && y <= 2))) {
            temp = temp + 10;
            count = count + 1;
            cout << "Вы заработали 5 баллов" << endl;
        }
        else {
            count = count + 1;
            cout << "Вы не попали в мишень" << endl;
        }
    }
    if (count == 5) {
        cout << "Да вы просто СНАЙПЕР! Количество выстрелов " << count << ". Количество очков " << temp << endl;
    }
    else if (count >= 6 && count <= 7) {
        cout << "Да вы просто СТРЕЛОК! Количество выстрелов " << count << ". Количество очков " << temp << endl;
    }
    else {
        cout << "Да вы просто НОВИЧОК! Количество выстрелов " << count << ". Количество очков " << temp << endl;
    }

    return(0);
}