//��ϵ�����������
#include <iostream>
using namespace std;
class Student
{
public:
	Student(int t_id = 0, double t_sco = 0);
	~Student();
	friend ostream &operator<< (ostream &os, const Student &t_std);
	friend istream &operator>> (istream &is, Student &t_std);
	friend bool operator== (const Student &st1, const Student &st2);
	friend bool operator!= (const Student &st1, const Student &st2);
	friend bool operator< (const Student &st1, const Student &st2);
	friend bool operator> (const Student &st1, const Student &st2);
	int getid() const ;
private:
	int id;
	double score;
};
Student::Student(int t_id, double t_sco) :id(t_id), score(t_sco) {}
Student::~Student() {}
int Student::getid() const { return this->id; }
ostream &operator<< (ostream &os, const Student &t_std) {
	cout << "id = " << t_std.id << "\t score: " << t_std.score;
	return os;
}
istream &operator>> (istream &is, Student &t_std) {
	cin >> t_std.id >> t_std.score;
	return is;
}
bool operator== (const Student &st1, const Student &st2) {
	return st1.score == st2.score;
}
bool operator!= (const Student &st1, const Student &st2) {
	return !(st1.score != st2.score);
}
bool operator< (const Student &st1, const Student &st2) {
	return st1.score < st2.score;
}
bool operator> (const Student &st1, const Student &st2) {
	return st1.score > st2.score;
}
//md��ô��ô�鷳
int main() {
	Student std1, std2;
	cout << "������ѧ���� id �� score ��" << endl;
	cin >> std1 >> std2;
	cout << std1 << endl << std2 << endl;
	if (std1 > std2)
		cout << "ѧ��" << std1.getid() << " �ĳɼ��ϸ�" << endl;
	else if (std1 == std2)
		cout << "����ѧ���ĳɼ�һ��" << endl;
	else 
		cout << "ѧ��" << std2.getid() << " �ĳɼ��ϸ�" << endl;
	system("pause");
	return 0;
}