/*ǰ��++�ͺ���++�������*/
//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x, y;
//public :
//	Point(int t_x = 0, int t_y = 0) :x(t_x), y(t_y) {}
//	Point operator++();
//	Point operator++(int);
//	void show() {
//		cout << "(x, y) = (" << x << ", " << y << ")" <<endl;
//	}
//};
//Point Point::operator++() {
//	this->x++;
//	this->y++;
//	return *this;
//}
//Point Point ::operator++(int) { 
//	Point temp = *this;
//	this->x++;
//	this->y++;
//	return temp;
//}
///*ǰ��++��Ҫ�������ã���Ϊ�����Լ����������Է��ض�������ã� 
//�Է����ڱ��ʽ������ʹ�á�������++�����Ƕ�����ǰ��++�Ⱥ���Ч��
//Ҫ�ߣ���Ϊ����++�ᴴ��һ����ʱ���󣬴��������������������ص�
//��û�б������Ķ���*/
//int main() {
//	Point d(88, 99);
//	d.show();
//	d++;
//	d.show();
//	d++.show();
//	d.show();
//	system("pause");
//	return 0;
//}