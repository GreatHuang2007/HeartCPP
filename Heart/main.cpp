#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	float x, y, a;
	cout << "����ϲ���ĸ��֣�" << endl << "> ";
	string character;
input:
	cin >> character;
	if (character.length() > 1) {
		character = "";
		cout << "����һ����Ŷ" << endl << "> ";
		goto input;
	}
	cout << "�õģ���֪���ˡ�" << endl;
	cout << "��գ��Ŷ......" << endl;
	int t = 0;
	for (y = 1.5; y > -1.5; y -= 0.1) {
		for (x = -1.5; x < 1.5; x += 0.05) {
			a = x * x + y * y - 1;
			printf("%s", a * a * a - x * x * y * y * y <= 0.0 ? character.c_str() : " ");
			Sleep(2);
		}
		t++;
		if (t == 28)
			break;
		putchar('\n');
	}
	system("color 0c");
	system("pause");
	return 0;
}