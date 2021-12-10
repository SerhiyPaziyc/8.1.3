#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* s)
{
	int k = 0,
		pos = 0;
	char* t;
	while (t = strchr(s + pos, s[pos + 2]))
	{
		pos = t - s + 1;
		if (s[pos + 1] == s[pos + 2])
		{
			k++;
			break;
		}
		return k;
	}
}

char* Change(char* s)
{
	char* t = new char[strlen(s)];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;
	while (p = strchr(s + pos1, s[pos2 + 2]))
	{
		if (s[p - s + 3] == s[p - s + 2])
		{
			pos2 = p - s + 4;
			strncat(t, s + pos1, pos2 - pos1 - 4);
			strcat(t, "**");
			pos1 = pos2;
		}

		strcat(t, s + pos1);
		strcpy(s, t);
		return t;
	}
}

int main()
{
	char str[228];

	cout << "Enter String:" << endl;
	cin.getline(str, 227);

	if (Count(str) == -1)
		cerr << "Enter more characters" << endl;
	else
	{
		if (Count(str) == 1)
			cout << "yes" << endl;
		else
			cout << "no" << endl;

		cout << endl;
		cout << "String conteined " << Count(str) << " groups of ' '" << endl;

		char* dest = new char[228];
		dest = Change(str);

		cout << "Modified string (param): " << str << endl;
		cout << "Modified string (result): " << dest << endl;
	}

	return 0;
}