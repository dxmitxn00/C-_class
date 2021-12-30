#include<iostream>
#include <string>
#include <typeinfo>
#include <iomanip>

using namespace std;

// Ŭ������ ����
// ������ ��� �� �Լ� ����
class Circle {
private:
	double radius;
public:
	double getRadius() const;
	double getArea() const;
	void setRadius(double value);
};

// �Լ�(�޼ҵ�) ����
double Circle::getRadius() const {
	return radius;
}

double Circle::getArea() const {
	const double PI = 3.14;
	return(radius * radius * PI);
}

void Circle::setRadius(double value) {
	radius = value;
}

int main() {
	cout << "Circle 1 : " << endl;
	Circle circle1; // ��ü ����, �ν��Ͻ� ȭ
	circle1.setRadius(10.0);
	cout << "Radius : " << circle1.getRadius() << endl;
	cout << "Area : " << circle1.getArea() << endl;

	cout << "Circle 2 : " << endl;
	Circle circle2; // ��ü ����
	circle2.setRadius(20.0);
	cout << "Radius : " << circle2.getRadius() << endl;
	cout << "Area : " << circle2.getArea() << endl;

	return 0;
}