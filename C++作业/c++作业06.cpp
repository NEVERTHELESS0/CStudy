/*���������������䳤�����߷ֱ�Ϊ����
1��12��20��25����2��10��30��20��
�ֱ������ǵ������
��һ�����ڶ���ĳ����Ҷ����������캯��������һ���в�����һ���޲�����*/

//����ⷨ
#include<iostream>
using namespace std;
class Rectangle{
private:
	float x, y, z;
public:
	Rectangle();
	Rectangle(float t_x, float t_y, float t_z);
	float getVolume();
	~Rectangle();
};
Rectangle::Rectangle() {}
Rectangle::Rectangle(float t_x, float t_y, float t_z):
			x(t_x), y(t_y), z(t_z){}
float Rectangle::getVolume() {
	return x * y * z;
}
Rectangle::~Rectangle() {}
int main() {
	Rectangle rectangle1(12, 20, 25);
	Rectangle rectangle2(10, 30, 20);
	cout << "rectangle1 �����Ϊ�� " << rectangle1.getVolume()
		<< "\nrectangle2 �����Ϊ�� " << rectangle2.getVolume()
		<< endl;
	system("pause");
	return 0;
}


