#include <iostream>
#include <string>
#include <regex>
using namespace std;

int valid;
regex r(R"(^\d-\s+$)");

void verification(string S)
{
    if (regex_match(S, r)==true)
    {
        valid = 1;
    }
    else
        valid = 0;

    if (valid==1) {
        int sum = stoi(S.substr(0, 1)) * 9 + stoi(S.substr(1, 1)) * 8 + stoi(S.substr(2, 1)) * 7 + stoi(S.substr(3, 1)) * 6 + stoi(S.substr(4, 1)) * 5 + stoi(S.substr(5, 1)) * 4 +
        stoi(S.substr(6, 1)) * 3 + stoi(S.substr(7, 1)) * 2 + stoi(S.substr(8, 1)) * 1;

        string control = S.substr(9, 2);


        if (sum < 100) {
            if (stoi(control) == sum) {
            valid = 1;
            }
            else
            valid = 0;
        }
        else if (sum == 100 || sum == 101) {
            if (control == "00") {
            valid = 1;
            }
            else
            valid = 0;
        }
        else if (sum > 101) {
            int t = sum % 101;
            if (t < 100) {
                if (stoi(control) == t) {
                    valid = 1;
                }
                else
                    valid = 0;
            }
            else if (t == 100) {
                if (control == "00")
                {
                    valid = 1;
                }
                else
                    valid = 0;
            }
        }
            
    }

        if (valid == 1) {
            cout << "\nTrue" << endl;
        }
        else
            cout << "\nFalse" << endl;
        
}

int main()
{
    system("chcp 1251");
    string S;
    cout << "Введите 11 значный номер СНИЛС для проверки: ";
    cin >> S;
    verification(S);
    
    return 0;
}