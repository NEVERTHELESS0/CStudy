//
///*����һ�����౾��ѧ��Student�࣬��ѧ��number��Ӣ��ɼ�english��
//������ɼ�computer��ƽ���ɼ�average�ĸ����ݳ�Ա�����������캯��
//���Ա�ʵ�ֶ�������������һ������������һ���ɼ���ƽ���ɼ��ĺ���Getaverge, 
//һ������ʾ��ѧ�ź�ƽ���ɼ��ĺ���Show����������������ɵ��ò��ԡ�*/
//
////����ⷨ
//#include<iostream>
//using namespace std;
//class Student {
//private:
//	int number;
//	float sco_eng;
//	float sco_com;
//	float sco_ave;
//public:
//	Student() {}
//	Student(int t_number, float t_eng, float t_com) :
//		number(t_number), sco_eng(t_eng), sco_com(t_com) {}
//	Student(Student &t_stu) {
//		number = t_stu.number;
//		sco_eng = t_stu.sco_eng;
//		sco_com = t_stu.sco_com;
//	}
//	void show() {
//		cout << "number:" << number << endl;
//		cout << "english:" << sco_eng << endl;
//		cout << "computer:" << sco_com << endl;
//		cout << "average:" << getAverage() << endl;
//	}
//	float getAverage() {
//		sco_ave = (sco_eng + sco_com) / 2;
//		return (sco_eng + sco_com) / 2;
//	}
//	~Student() {
//		static int i = 0;
//		if (i == 2)
//			system("pause");
//		i++;
//	}
//};
//int main() {
//	Student stu1;
//	stu1.show();
//	cout << endl;
//	Student stu2(1, 99.99, 88.88);
//	cout << endl;
//	stu2.show();
//	Student stu3(stu2);
//	cout << endl;
//	stu3.show();
//	cout << endl << stu3.getAverage() << endl;
//	return 0;
//}
//
//
////����������
//#include<iostream>
//using namespace std;
//static int arr[10];//���ڴ洢thisָ���int��ֵ
//static int num = 0;//���ڼ���thisָ�봴������Ŀ,ȫ�־�̬����
//class Student {
//private:
//	int number;
//	float sco_eng;
//	float sco_com;
//	float sco_ave;
//public:
//	Student();
//	Student(int t_number, float t_eng, float t_com);
//	Student(Student &t_stu);
//	void show();
//	float getAverage();
//	~Student();
//};
//Student::Student() {
//	cout << "������ִ���޲ι��캯��, ";
//	cout << "����޲ι��캯����" << num + 1 << "����ָ��Ϊ " << this << endl;
//	arr[num] = (int)(this);
//	num++;
//}
//Student::Student(int t_number, float t_eng, float t_com):
//	number(t_number), sco_eng(t_eng), sco_com(t_com){
//	cout << "������ִ�й��캯��, ";
//	cout << "������캯����" << num + 1 << "����ָ��Ϊ " << this << endl;
//	arr[num] = (int)(this);
//	num++;
//}
//Student::Student(Student &t_stu) {//����ǳ����
//	cout << "����ִ�п������캯��, ";
//	cout << "����������캯����" << num + 1 << "����ָ��Ϊ " << this << endl;
//	arr[num] = (int)this;
//	number = t_stu.number;
//	sco_eng = t_stu.sco_eng;
//	sco_com = t_stu.sco_com;
//	num++;
//}
//void Student::show() {
//	cout << "number:" << number << endl;
//	cout << "english:" << sco_eng << endl;
//	cout << "computer:" << sco_com << endl;
//	cout << "average:" << getAverage() << endl;
//}
//float Student::getAverage() {
//	sco_ave = (sco_eng + sco_com) / 2;
//	return (sco_eng + sco_com) / 2;
//}
//Student::~Student() {
//	static int t = 0;//�˴����������,�ֲ���̬����
//	cout << "\n����ִ����������, ";
//	for (int i = 0; i < 10; i++) {
//		if ((int)this == arr[i]) {
//			cout << "��ǰ���ڱ������Ĺ��캯��Ϊ�����캯�� ��" << i + 1 << "�� ��ָ��Ϊ " << this << endl;
//			break;
//		}
//	}
//	if (t == 2)
//		system("pause");//����˴���������������֮�󴰿ڽ�һ������
//	t++;
//}
//int main() {
//	cout << "\n����ѧ������ 1 " << endl;
//	Student stu1;
//	cout << "\nѧ��1����Ϊ��" << endl;
//	stu1.show();
//	cout << "\n����ѧ������ 2 " << endl;
//	Student stu2(1, 99.99, 88.88);
//	cout << "\nѧ��2����Ϊ��" << endl;
//	stu2.show();
//	cout << "\n����ѧ������ 3 " << endl;
//	Student stu3(stu2);
//	cout << "\nѧ��3����Ϊ��" << endl;
//	stu3.show();
//	return 0;
//}
