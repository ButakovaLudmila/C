# include <iostream>
using namespace std;

bool Input(int a, int b)
{
	system("chcp 1251");
	cout << "\n�������� 2 �����, ������ ������ �������?: " << endl;
	cout << "\n������� ������ �����: " << endl;
	cin >> a;
	cout << "\n������� ������ �����: " << endl;
	cin >> b;

	if (a > b) {
		return true;
	}
	else
		return false;
}

int main()
{
	int a=0, b=0;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	return 0;
}