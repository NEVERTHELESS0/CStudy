//���ȣ� ��� ����ַ�������
//ios���������������þ��ȵĳ�Ա����
// int ios::precision();
// int ios::precision(int n);���øþ��Ⱥ�ֱ����һ�ξ�������֮ǰ����Ч
// ������������ھ��ȣ�ֻ����ֻ������һ�θ�ʽ�����ʱ��Ч������û��Ӱ����
#include<iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
int main() {
	double d = sqrt(2.0);
	cout << "��������" << endl;
	for (int i = 0; i < 54; i++) {
		cout.precision(i);
		cout << i << "\t" << d << endl;
	}
	cout << "\n��ȴ�..." << endl;
	Sleep(3000);
	cout << "��ǰ����Ϊ��" << cout.precision() << endl;
	cout << "��ǰ��� " << cout.width() << endl;
	cout << " ����֮��" << endl;
	cout.precision(4);
	cout.width(10);
	cout << d << endl;
	cout << d << endl;
	cout << "��ǰ����ַ��� " << cout.fill() << "|" << endl;
	cout.width(10);
	cout << setfill('*') << d << endl;
	system("pause");
	return 0;
}