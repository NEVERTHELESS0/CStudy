///*��дһ����Ĭ���β�ֵ��������������ľ��루Ĭ��Ϊ��ԭ�㣨0��0���ľ��룩����ͨ�����������������㣬��ɲ�ͬ�ĵ��á�
//��ʾ��float distance(float x1, float y1, float x2, float y2)*/
//
////�����ļ򵥽ⷨ����
//#include<iostream>
//#include<cmath>
//using namespace std;
//float distance(float x1, float y1, float x2 = 0, float y2 = 0) {
//	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
//}
//int main() {
//	cout << "�����ľ��룺" << distance(7, 8, 9, 10) << endl;
//	cout << "�㵽ԭ��ľ��룺" << distance(88, 99) << endl;
//	system("pause");
//	return 0;
//}
//
//
///*�����ĸ��߼��ⷨ����*/
//#include<iostream>
//#include<cmath>
//using namespace std;
//class Point {
//private:
//	float x, y;
//public:
//	Point(float t_x = 0, float t_y = 0)
//		:x(t_x), y(t_y) {}//���캯��
//	~Point() {}	  //��������
//	float distance(Point t_d1, Point t_d2);
//	friend ostream &operator<< (ostream &os, const Point &d);//<< ���������
//	friend istream &operator>> (istream &is, Point &d);// >> ���������
//};
//ostream &operator<< (ostream &os, const Point &d) {
//	os << "(" << d.x << ", " << d.y << ")";
//	return os;
//}
//istream &operator>> (istream &is, Point &d) {
//	cout << "x = ";
//	is >> d.x;
//	cout << "y = ";
//	is >> d.y;
//	return is;
//}
//float Point::distance(Point t_d1, Point t_d2) {
//	return sqrt((t_d1.x - t_d2.x)*(t_d1.x - t_d2.x) + (t_d1.y - t_d2.y)*(t_d1.y - t_d2.y));
//}
//
//int main() {
//	cout << "�������һ���������" << endl;
//	Point d1;
//	cin >> d1;
//	cout << "������ĵ�Ϊ��" << d1 << endl;
//	cout << endl << "������ڶ����������" << endl;
//	Point d2;
//	cin >> d2;
//	cout << "������ĵ�Ϊ��" << d2 << endl;
//	cout << "�����ľ���Ϊ�� " << d1.distance(d1, d2) << endl;
//	system("pause");
//	return 0;
//}
