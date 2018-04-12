//ʹ��string���ͣ�����C++�﷨����дһ������
//ʵ��2���ַ������롢�Ƚϡ��ַ������ӵȹ���
#include <iostream>
#include <string>
using namespace std;
void fun1(string temp){
	//���ַ�����ֵ
	temp.assign("liyang");
	cout << "\n��ֵ֮��Ϊ��" << temp << endl;
}
void fun2(string temp) {
	//�����ַ������ַ�����
	cout << "\n�ַ������ַ�����Ϊ(size()����)��" << size(temp) << endl;
	cout << "\n�ַ������ַ�����Ϊ(length()����)��" << temp.length() << endl;
}
void fun3(string temp) {
	//�����ַ���������
	cout << "\n�ַ���������(capacity()����)��" << temp.capacity() << endl;
}
/*������size��ָ���Ѿ������Ԫ�ص���Ŀ����capacity����
�ڲ������µ��ڴ�ռ��ǰ�����������Ա������Ԫ��*/
void fun4(string temp) {
	//�ж�һ���ַ����Ƿ�Ϊ��
	cout << "\n�ж��ַ����Ƿ�Ϊ��(empty()����)��" << temp.empty() << endl;
}
void fun5(string temp) {
	//���·����ַ������ڴ��С
	temp.resize(88);
	cout << "\n���·����ַ������ڴ������Ϊ(resize()����)��" << temp.capacity() << endl;
}
void fun6(string temp) {
	//��ȡ�ַ�����ͷλ��
	string::iterator ptr;
	ptr = temp.begin();//����һ���������� �൱��ָ�����͵��ǲ�����ֱ�������ַ
	cout << "\n�ַ�����ͷλ��(begin()����)��" << *(ptr) << endl;
}
void fun7(string temp) {
	//��ȡ�ַ�������ַ�����һ��λ��
	string::iterator ptr;
	ptr = temp.end();
	cout << "\n�ַ�������ַ�����һ��λ��(end()����)��" << *(ptr-1) << endl;
}
void fun8(string temp) {
	//��ȡ�ַ�������ַ���λ��
	/*string::iterator ptr;
	ptr = temp.rbegin(); ����д�Ǵ������Ϊrbegin()���﷨Ϊconst reverse_iterator rbegin();
	��const����*/
	cout << "\n�ַ�������ַ���λ��(rbegin()����)��" << *(temp.rbegin()) << endl;
}
void fun9(string temp) {
	//��ȡ�ַ�����ͷ�ַ�����һ��λ��
	//�˴���fun8�����ڵ�rbegin��ͬ����begin��ͬ����rbegin���������������ָ��ķ����෴
	//��������һ�д��봦��Ҫ-1������������
	cout << "\n�ַ�������ַ���λ��(rend()����)��" << *(temp.rend()-1) << endl;
}
void fun10(string temp) {
	//���ַ����в����ַ����ַ���
	cout << "\n���ַ����в����ַ�����Ϊ(insert()����)��" << temp.insert(6, "the ") << endl;
}
void fun11(string temp) {
	//ɾ���ַ����е��ַ����ַ���
	cout << "\n���ַ�����ɾ���ַ�����Ϊ(erase()����)��" << temp.erase(5,1) << endl;
}
void fun12(string temp) {
	//ɾ��ȫ���ַ���
	temp.clear();
	cout << "\nɾ��ȫ���ַ�����Ϊ(clear()����)��" << temp << "\tsizeΪ��" << temp.size()
		<< "\tcapacityΪ��" << temp.capacity() << endl;
}
void fun13(string temp) {
	//�滻�ַ����е��ַ�
	cout << "\n�滻�ַ����е��ַ���Ϊ(replace()����)��" << temp.erase(5,6) << endl;
}
void fun14(string temp) {
	//����
	cout << "\n���ҵ��ַ���λ��Ϊ(find()����)��" << temp.find("w") << endl;
}
void fun15(string temp) {
	//����ĳ���Ӵ�
	cout << "\n���ص��Ӵ�Ϊ(substr()����)��" << temp.substr(6, 12) << endl;
}
void fun16(string temp) {
	//����ĳ���Ǳ��ϵ��ַ���temp[1]һ��
	cout << "\n����ĳ���Ǳ��ϵ��ַ�(substr()����)��" << temp.at(1) << endl;
}
void fun17(string temp) {
	//�Ƚ��ַ���
	string value = "hello world";
	string value1 = "hello";
	cout << "\n�Ƚ��ַ����Ľ��Ϊ(substr()����)��" << "����ͬ���ַ����ȽϽ��Ϊ��" << temp.compare(value) <<
		 "\t�벻ͬ���ַ����ȽϽ��Ϊ��" << temp.compare(value1) << endl;
	if (value == temp)
		cout << "�����ַ������" << endl;
	else
		cout << "�����" << endl;
}
void fun18(string temp) {
	//���ַ����ַ����������ַ�����ĩβ,ͬ���ĵķ�������push_back()
	cout << "\n���ַ����ַ����������ַ�����ĩβ��Ϊ(append()����)��" << temp.append(" liyang") << endl;
	//ͬ���ķ�������ʹ�á�+������
	cout << "�á�+���ַ����Ӻ�Ϊ�� " << "liyang " + temp << endl << endl;
}

int main() {
	string value;
	value = "hello world";
	fun1(value);
	fun2(value);
	fun3(value);
	fun4(value);
	fun5(value);
	fun6(value);
	fun7(value);
	fun8(value);
	fun9(value);
	fun10(value);
	fun11(value);
	fun12(value);
	fun13(value);
	fun14(value);
	fun15(value);
	fun16(value);
	fun17(value);
	fun18(value);
	system("pause");
	return 0;
}