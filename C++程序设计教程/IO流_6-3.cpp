//get����
#include <iostream>
using namespace std;
int main() {
	// ��һ����ʽ���ã�����ascll��
	cout << "first call: " << cin.get() << endl;
	char ch;
	//�ڶ���
	cin.get(ch);
	cout << "second call: " << ch << endl;
	char str[10];
	//��ȡ����size-1���ַ�
	cin.get(str, 8, 'T');
	cout << "third call: " << str << endl;
	system("pause");
	return 0;
}