////�����������_4-6��string��д
#include <iostream>
#include <string>
using namespace std;
class Internet {
private:
	string name;
	string url;
public:
	Internet(string t_name, string t_url) :name(t_name), url(t_url){}
	~Internet() {}
	friend ostream &operator<< (ostream &os, Internet temp);
	Internet(Internet &temp);
	Internet &operator= (Internet &temp);
};
ostream &operator<< (ostream &os, Internet temp) {
	os << "name: " << temp.name << "\turl: " << temp.url;
	return os;
}
Internet::Internet(Internet &temp) {
	this->name = temp.name;
	this->url = temp.url;
}
/*�������������Ĺ�����˵���������������岿�ֶ���ͬ�����ǶԸ�ֵ��������غ���
�����������Ͷ���ĵط�����д����һ���������ط���д�����󲿷�����Ϊ��ĳ�Ա����
һ�������Ƕ���Ĳ����в��,����һ�������ǿ������캯��û�з���ֵ�����Ǹ�ֵ��������غ���
��Ҫ�з���ֵ*/
Internet &Internet::operator= (Internet &temp) {
	this->name = temp.name;
	this->url = temp.url;
	return *this;
}
int main() {
	Internet a("liyang", "goxx.site");
	cout << "a = " << a << endl;
	Internet b(a);
	cout << "b = " << b << endl;
	Internet c("shuhau", "love you");
	cout << "c = " << c << endl;
	b = c;
	cout << "b�ı�֮��Ϊ" << endl << "b = " << b << endl;
	system("pause");
	return 0;

}