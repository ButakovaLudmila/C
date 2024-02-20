# include <iostream>
using namespace std;

bool Input(int a, int b)
{
	system("chcp 1251");
	cout << "\n—равните 2 числа, первое больше второго?: " << endl;
	cout << "\n¬ведите первое число: " << endl;
	cin >> a;
	cout << "\n¬ведите второе число: " << endl;
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