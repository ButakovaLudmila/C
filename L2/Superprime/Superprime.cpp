#include <iostream>
#include <string>
using namespace std;
int main()
{
    system("chcp 1251");
    int x;
    int n=1;
    int k = 1;
    int kolichestvo = 0;
    cout << "������� ����� ��� �������� �� ������������: ";
    cin >> x;

    if (x > 1)
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
                n = 0;              
        }

        for (int j = 2; j <= x; j++)
        {
            for (int i = 2; i < j; i++)
            {
                if (j % i == 0)
                {
                    k = k + 1;
                }   
            }
            if (k < 2)
            {
                kolichestvo += 1;
            }
            k = 1;
        }
        if (kolichestvo > 1)
        {
            for (int i = 2; i < kolichestvo; i++)
            {
                if (kolichestvo % i == 0)
                    n = 0;
            }
        }
        else
            n = 0;
    
    }
    else 
        n = 0;

    if (n == 0)
    {
        cout << "\n����� " << x << " �� ������������" << endl;
    }
    else 
        cout << "\n����� " << x << " ������������" << endl;

    return 0;
  
}
