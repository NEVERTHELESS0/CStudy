#include<iostream>  
#include<string>  
using namespace std;
class Stu_Info_Mange
{
private:
	int sno;
	string sname;
	int age;
	int grade;
public:
	Stu_Info_Mange(int s = 0, string n = "", int a = 0, int g = 0)
	{
		sno = s;
		sname = n;
		age = a;
		grade = g;
	}
	Stu_Info_Mange &Setsname(string s)   //���е���غ����������ظö�������ã������Ϳ���ʵ�ּ������������</span>  
	{
		this->sname = s;
		return (*this);
	}
	Stu_Info_Mange &Setsno(int sno)
	{
		this->sno = sno;
		return *this;
	}
	Stu_Info_Mange &Setgrade(int grade)
	{
		this->grade = grade;
		return *this; 
	}
	Stu_Info_Mange &Setage(int age)
	{
		this->age = age;
		return *this; 
	}
	void print()
	{
		cout << "the sname is " << this->sname << endl;
		cout << "the sno   is " << this->sno << endl;
		cout << "the age   is " << this->age << endl;
		cout << "the grade is " << this->grade << endl << endl;

	}
};
int main()
{
	Stu_Info_Mange sim;//  ʹ��Ĭ�ϲ���  
	sim.Setsname("����").Setsno(457).Setgrade(2012).Setage(20);  //����  
																					  //ʹ��thisָ��ʹ�����ĺ������ó�Ϊ����  
	sim.print();
	system("pause");

	return 0;

}