////thisָ��������
//#include<iostream>  
//using namespace std;
//class Test {
//
//public:
//	//���캯��  
//	Test(int i = 0, double j = 0.0) : m_i(i), m_j(j) {
//
//	}
//
//	//��ֵ���캯��  
//	Test& operator=(Test &rhs) {
//		this->m_i = rhs.m_i;
//		this->m_j = rhs.m_j;
//		return *this;
//	}
//	int m_i;
//	double m_j;
//
//};
//
//
//int main() {
//
//	//1������ֵ����� 1  2.3  
//	Test obj1(1, 2.3);
//	cout << obj1.m_i << "\t" << obj1.m_j << endl;
//	cout << endl << "-------------------" << endl;
//
//	//2��δ����ֵ�����0 0  
//	Test obj2;
//	cout << obj2.m_i << "\t" << obj2.m_j << endl;
//	cout << endl << "-------------------" << endl;
//
//	//3��δ����ֵ������ͨ����ֵ���캯�������˸���ֵ������ע�����ظ����ø�ֵ���캯������ֵ��  
//	Test obj3;
//	obj3 = obj2 = obj1;//����Ƚ���obj2 = obj1 �Ĳ���, (��ֵ�ɹ���ͨ��return *this������obj2����), Ȼ����� obj3 = obj2 �Ĳ�����  
//	cout << obj2.m_i << "\t" << obj2.m_j << endl;
//	cout << endl << "-------------------" << endl;
//	cout << obj3.m_i << "\t" << obj3.m_j << endl;
//	cout << endl << "-------------------" << endl;
//
//	/****
//	ͨ��ʾ��3����ᷢ�֣����û��return * this���㲻�ܹ�����obj2����
//	��ô�ڽ��� obj3=obj2 ������ʱ�򣬸�ֵ���캯���Ͳ������ˡ�
//
//	C++ Ϊ�˷�������ʹ�������� int i=j=k=5���ָ�ֵ��ʽ��
//	�ͱ����ڴ�������ֵ�����У�ÿ��ִ����һ����ֵ���������ظö���Ȼ���������ִ�С�
//	*****/
//	system("pause");
//	return 0;
//}
