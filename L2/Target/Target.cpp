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
        cout << "������� ���������� �������� x,y:\n";
        cin >> x >> y;

        if ((x >= -1 && y >= -1) && (x <= 1 && y <= 1)) {
            temp = temp + 10;
            count = count + 1;
            cout << "�� ���������� 10 ������" << endl;
        }
        else if (((x >= -2 && y >= -2) && (x < -1 && y < -1)) || ((x > 1 && y > 1) && (x <=2 && y <= 2))) {
            temp = temp + 10;
            count = count + 1;
            cout << "�� ���������� 5 ������" << endl;
        }
        else {
            count = count + 1;
            cout << "�� �� ������ � ������" << endl;
        }
    }
    if (count == 5) {
        cout << "�� �� ������ �������! ���������� ��������� " << count << ". ���������� ����� " << temp << endl;
    }
    else if (count >= 6 && count <= 7) {
        cout << "�� �� ������ �������! ���������� ��������� " << count << ". ���������� ����� " << temp << endl;
    }
    else {
        cout << "�� �� ������ �������! ���������� ��������� " << count << ". ���������� ����� " << temp << endl;
    }

    return(0);
}