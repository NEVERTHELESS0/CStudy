///*��C++�﷨����дһ����������һԪ���η��̵ĸ��ĳ���
//
//Ҫ������a, b, c�������������ݲ����жϲ������Ӧ�ĸ��������*/
//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//int main() {
//	string value, a, b, c;
//	int i;
//	float d;
//	cout << "\t��һԪ���η��������\n" << endl;
//	cout << "������һԪ���η��̵�һ����ʽ������6x^2-5.55x-9.99=0����������ո��ұ���д�����" << endl;
//	cin >> value;
//	cout << "������ķ���Ϊ: " << value << endl;
//	for (i = 0; i < size(value); i++) {
//		if (value[i] == 'x')
//			break;
//		a += value[i];
//	}
//	for (; i < size(value); i++) {
//		if (value[i + 3] == 'x')
//			break;
//		b += value[i + 3];
//	}
//	for (; i < size(value); i++) {
//		if (value[i + 4] == '=')
//			break;
//		c += value[i + 4];
//	}
//	if (a == "" ||a == "-"||a == "+")
//		a = (a == "") ? a = "1" : a = "-1";
//	if (b == "+" ||b == "-")
//		b = (b == "+") ? b = "1" : b = "-1";
//	cout << " a ��ֵΪ " << atof(a.c_str()) << endl;//atol��std�������еĺ����������ǰ�char*ת��Ϊfloat
//	cout << " b ��ֵΪ " << atof(b.c_str()) << endl;//�ڴ�����Ϊstring -> char * -> float
//	cout << " c ��ֵΪ " << atof(c.c_str()) << endl;
//	d = atof(b.c_str()) * atof(b.c_str()) - 4 * atof(a.c_str())*atof(c.c_str());
//	if (d < 0)
//		cout << "�÷���û��ʵ����" << endl;
//	if (d == 0)
//		cout << "�÷�������ֻ��һ��������ֵΪ " << (-atof(b.c_str())) / (2 * atof(a.c_str())) << endl;
//	if (d > 0) {
//		cout << "�÷��������������ֱ�Ϊ x1 = " << (-atof(b.c_str()) + sqrt(d)) / (2 * atof(a.c_str()))
//			<< "\tx2 = " << (-atof(b.c_str())*atof(b.c_str()) - sqrt(d)) / (2 * atof(a.c_str())) << endl;
//	}
//	system("pause");
//	return 0;
//}
