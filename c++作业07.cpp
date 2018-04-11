/*
*����һ����������Ҫ���Date�ࡣ�ṩ���������캯������������������� ���¹��ܺ���
*1��������ĸ�ʽ������ڣ� �� / �� / ��
*2�� �������ڵ�ǰ���ϼ�һ�����
*3�� �������ڡ�
*/
#include <iostream>
#include <iomanip>
using namespace std;
class Date {
private:
	int day, month, year;
public:
	//������
	Date(int t_day = 9, int t_month = 9, int t_year = 2000);
	Date(Date &t_date);
	void show();
	Date operator++();
	Date operator++(int);
	~Date();
};
//������
Date::Date(int t_day, int t_month, int t_year) :
	day(t_day), month(t_month), year(t_year) {}
Date::Date(Date &t_date) {
	day = t_date.day;
	month = t_date.month;
	year = t_date.year;
}
void Date::show() {
	cout << "����Ϊ��";
	cout.width(2);
	cout << setfill('0') << day << "/";
	cout.width(2);
	cout << setfill('0') << month << "/";
	cout << year << endl;
}
Date Date::operator++() {
	++day;
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day == 32) {
				month++;
				day = 1;
				if (month == 13) {
					year++;
					month = 1;
				}
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day == 31) {
				month++;
				day = 1;
			}
			break;
		case 2:
			if (day == 30) {
				month++;
				day = 1;
			}
			break;
		}
	}
	else {
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day == 32) {
				month++;
				day = 1;
				if (month == 13) {
					year++;
					month = 1;
				}
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day == 31) {
				month++;
				day = 1;
			}
			break;
		case 2:
			if (day == 29) {
				month++;
				day = 1;
			}
			break;
		}
	}
	return *this;
}
Date Date::operator++(int) {
	Date date = *this;
	++(*this);
	return date;
}
Date::~Date() {}
int main() {
	Date day1;
	day1.show();
	Date day2(31, 12, 2018);
	day2++;
	day2.show();
	Date day3(28, 2, 1999);
	(++day3).show();		
	Date day4(28, 2, 1999);
	(day4++).show();
	system("pause");
	return 0;
}

// 
// 
// 
// 
// 
// 
//
//
//��Ӹ���һ�����
//�����кܶ�bug�����뻹δ�Ż�
#include <iostream>
#include <iomanip>
using namespace std;
class Date {
private:
	int day, month, year;
public:
	//������
	Date(int t_day = 9, int t_month = 9, int t_year = 2000);
	Date(Date &t_date);
	void show();
	Date operator++();
	Date operator++(int);
	friend Date operator+ (const Date& t_day1, const Date& t_day2);
	friend Date operator+ (const Date& t_day1, const int& t_day2);
	~Date();
};
//������
Date::Date(int t_day, int t_month, int t_year) :
	day(t_day), month(t_month), year(t_year) {}
Date::Date(Date &t_date) {
	day = t_date.day;
	month = t_date.month;
	year = t_date.year;
}
void Date::show() {
	cout << "����Ϊ��";
	cout.width(2);
	cout << setfill('0') << day << "/";
	cout.width(2);
	cout << setfill('0') << month << "/";
	cout << year << endl;
}
Date Date::operator++() {
	++day;
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day == 32) {
				month++;
				day = 1;
				if (month == 13) {
					year++;
					month = 1;
				}
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day == 31) {
				month++;
				day = 1;
			}
			break;
		case 2:
			if (day == 30) {
				month++;
				day = 1;
			}
			break;
		}
	}
	else {
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day == 32) {
				month++;
				day = 1;
				if (month == 13) {
					year++;
					month = 1;
				}
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day == 31) {
				month++;
				day = 1;
			}
			break;
		case 2:
			if (day == 29) {
				month++;
				day = 1;
			}
			break;
		}
	}
	return *this;
}
Date Date::operator++(int) {
	Date date = *this;
	++(*this);
	return date;
}
Date operator+ (const Date& t_day1, const Date& t_day2) {
	int temp_day, temp_month, temp_year;
	temp_day = t_day1.day + t_day2.day;
	temp_month = t_day1.month + t_day2.month;
	temp_year = t_day1.year + t_day2.year;
	while (temp_month > 12) {
		temp_month -= 12;
		temp_year++;
	}
	if ((temp_year % 400 == 0) || (temp_year % 4 == 0 && temp_year % 100 != 0)) {
		while (temp_day > 29) {
			if ((temp_year % 400 == 0) || (temp_year % 4 == 0 && temp_year % 100 != 0)) {
				switch (temp_month) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if (temp_day <= 31)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 31;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if (temp_day <= 30)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 30;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 2:
					temp_day -= 29;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				}
			}
			else {
				switch (temp_month) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if (temp_day <= 31)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 31;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if (temp_day <= 30)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 30;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 2:
					temp_day -= 28;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				}
			}
		}
		return Date(temp_day, temp_month, temp_year);
	}

	else {
		while (temp_day > 28) {
			if ((temp_year % 400 == 0) || (temp_year % 4 == 0 && temp_year % 100 != 0)) {
				switch (temp_month) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if (temp_day <= 31)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 31;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if (temp_day <= 30)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 30;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 2:
					temp_day -= 29;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				}
			}
			else {
				switch (temp_month) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if (temp_day <= 31)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 31;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if (temp_day <= 30)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 30;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 2:
					temp_day -= 28;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				}
			}
		}
		return Date(temp_day, temp_month, temp_year);
	}
	return Date(temp_day, temp_month, temp_year);
}
Date operator+ (const Date& t_day1, const int& t_day2) {
	int temp_day, temp_month, temp_year;
	temp_day = t_day1.day + t_day2;
	temp_month = t_day1.month;
	temp_year = t_day1.year;
	if ((temp_year % 400 == 0) || (temp_year % 4 == 0 && temp_year % 100 != 0)) {
		while (temp_day > 29) {
			if ((temp_year % 400 == 0) || (temp_year % 4 == 0 && temp_year % 100 != 0)) {
				switch (temp_month) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if (temp_day <= 31)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 31;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if (temp_day <= 30)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 30;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 2:
					temp_day -= 29;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				}
			}
			else {
				switch (temp_month) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if (temp_day <= 31)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 31;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if (temp_day <= 30)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 30;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 2:
					temp_day -= 28;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				}
			}
		}
	}
	else {
		while (temp_day > 28) {
			if ((temp_year % 400 == 0) || (temp_year % 4 == 0 && temp_year % 100 != 0)) {
				switch (temp_month) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if (temp_day <= 31)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 31;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if (temp_day <= 30)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 30;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 2:
					temp_day -= 29;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				}
			}
			else {
				switch (temp_month) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if (temp_day <= 31)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 31;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if (temp_day <= 30)
						return Date(temp_day, temp_month, temp_year);
					temp_day -= 30;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				case 2:
					temp_day -= 28;
					temp_month++;
					if (temp_month > 12) {
						temp_month -= 12;
						temp_year++;
					}
					break;
				}
			}
		}
		return Date(temp_day, temp_month, temp_year);
	}
	return Date(temp_day, temp_month, temp_year);
}

Date::~Date() {}
int main() {
	Date day1;
	day1.show();
	Date day2(31, 12, 2018);
	day2++;
	day2.show();
	Date day3(28, 2, 1999);
	(++day3).show();
	Date day4(28, 2, 1999);
	(day4++).show();
	Date day5(23, 2, 2000);
	Date day6(7, 24, 2002);
	(day5 + day6).show();
	Date day7(7, 1, 2004);
	(day7 + 1888).show();
	system("pause");
	return 0;
}



