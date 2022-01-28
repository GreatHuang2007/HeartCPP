#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	float x, y, a;
	cout << "你最喜欢哪个字？" << endl << "> ";
	string character;
input:
	cin >> character;
	if (character.length() > 1) {
		character = "";
		cout << "输入一个字哦" << endl << "> ";
		goto input;
	}
	cout << "好的，我知道了。" << endl;
	cout << "别眨眼哦......" << endl;
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