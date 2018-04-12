//��ֵ���������
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Internet
{
private:
	char *name;
	char *url;
public:
	friend ostream &operator<< (ostream &os, const Internet &inter);
	Internet(char* name, char *url);
	Internet(Internet &temp);
	~Internet() {
		delete[]name;
		delete[]url;
	}
	Internet &operator= (Internet &temp);
};
ostream &operator<< (ostream &os, const Internet &inter) {
	os << "name = " << inter.name << "\t" << "url = " << inter.url;
	return os;
}

Internet::Internet(char *name, char *url){
	this->name = new char[strlen(name) + 1];
	this->url = new char[strlen(url) + 1];
	if (name)
		strcpy(this->name, name);
	if (url)
		strcpy(this->url, url);
}
Internet::Internet(Internet &temp) {
	this->name = new char[strlen(temp.name) + 1];
	this->url = new char[strlen(temp.url) + 1];
	if (name)
		strcpy(this->name, temp.name);
	if (url)
		strcpy(this->url, temp.url);
}
/*�������������Ĺ�����˵���������������岿�ֶ���ͬ�����ǶԸ�ֵ��������غ���
�����������Ͷ���ĵط�����д����һ���������ط���д�����󲿷�����Ϊ��ĳ�Ա����
һ�������Ƕ���Ĳ����в��,����һ�������ǿ������캯��û�з���ֵ�����Ǹ�ֵ��������غ���
��Ҫ�з���ֵ*/
Internet &Internet::operator= (Internet &temp) {
	delete[]name;
	delete[]url;
	this->name = new char[strlen(temp.name) + 1];
	this->url = new char[strlen(temp.url) + 1];
	if (name)
		strcpy(this->name, temp.name);
	if (url)
		strcpy(this->url, temp.url);
	return *this;
}
int main() {
	Internet a("����", "goxx.site");
	cout << "a: " <<  a << endl;
	Internet b(a);
	cout << "b: " << b << endl;
	Internet c("�滪", "love you");
	cout << "c: " << c << endl;
	b = c;
	cout << "��ֵ֮�� b: " << b << endl;
	system("pause");
	return 0;
}
