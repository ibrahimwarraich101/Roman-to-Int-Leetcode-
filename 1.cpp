#include<iostream>
#include<string>
using namespace std;

int roman_to_int(string num)
{
	int temp = 0, I = 1, v = 5, x = 10, l = 50, c = 100, d = 500, m = 1000;
	for (int i = 0; i < num.length(); i++)
	{
		if (num[i] == 'I' || num[i] == 'i')
		{
			if (i + 1 < num.length() && (num[i + 1] == 'V' || num[i + 1] == 'v' || num[i + 1] == 'X' || num[i + 1] == 'x'))
				temp -= I;
			else
				temp += I;
		}
		else if (num[i] == 'V' || num[i] == 'v')
			temp += 5;
		else if (num[i] == 'X' || num[i] == 'x')
		{
			if (i + 1 < num.length() && (num[i + 1] == 'L' || num[i + 1] == 'l' || num[i + 1] == 'C' || num[i + 1] == 'c'))
				temp -= x;
			else
				temp += x;
		}
		else if (num[i] == 'L' || num[i] == 'l')
			temp += l;
		else if (num[i] == 'C' || num[i] == 'c')
		{
			if (i + 1 < num.length() && (num[i + 1] == 'M' || num[i + 1] == 'm' || num[i + 1] == 'D' || num[i + 1] == 'd'))
				temp -= c;
			else
				temp += c;
		}
		else if (num[i] == 'D' || num[i] == 'd')
			temp += d;
		else if (num[i] == 'M' || num[i] == 'm')
			temp += m;
	}

	return temp;
}

int main()
{
	string num;
	cout << "Enter a Roman number to convert into integer: "; cin >> num; cout << endl;
	cout << "The answer in integer is: " << roman_to_int(num);

	cout << endl << endl;
	system("pause");
	return 0;
}
