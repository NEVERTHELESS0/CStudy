//const_cast<>
#include <iostream>
using namespace std;
int main() {
	int num1 = 100;
	const int *p = &num;
	int *p2 = const_cast<int*>(p1);//������ָ��p1ȥ��const����
	*p2 = 200;
	cout << "num = " << num << endl;
	system("pause");
	return 0;
}