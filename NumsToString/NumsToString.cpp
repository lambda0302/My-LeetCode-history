#include<stdio.h>
#include<iostream>
using namespace std;

int main() {											//数字转数字字符
	int a;
	char c;
	cout << "please" << endl;
	cin >> a;
	c = a + '0';
	cout << c << endl;
	system("pause");
	getchar();
	return 0;


}




/*
int main() {												//数字转数字字符串
	int a;
	//char c;
	char* d = (char*)malloc(sizeof(char) * 4);
	cout << "qingshuruzifushuzi" << endl;
	cin >> a;
	sprintf(d, "%d", a);
	cout << d <<endl;


	return 0;
}
*/
/*
int main() {										//数字字符串转数字
	int a=0;
	char *c = (char*)malloc(sizeof(char));
	cout << "please" << endl;
	cin >> c;
	for (int i = 0; i < strlen(c); i++) {
		a = a * 10 + (c[i] - '0');
	}
	

	cout << a << endl;

	return  0;
}
*/