#include<iostream>
#include <string>
#include <typeinfo>
#include <iomanip>

using namespace std;

// 클래스의 정의
// 데이터 멤버 및 함수 선언
class Circle {
private:
	double radius;
public:
	double getRadius() const;
	double getArea() const;
	void setRadius(double value);
};

// 함수(메소드) 정의
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
	Circle circle1; // 객체 선언, 인스턴스 화
	circle1.setRadius(10.0);
	cout << "Radius : " << circle1.getRadius() << endl;
	cout << "Area : " << circle1.getArea() << endl;

	cout << "Circle 2 : " << endl;
	Circle circle2; // 객체 선언
	circle2.setRadius(20.0);
	cout << "Radius : " << circle2.getRadius() << endl;
	cout << "Area : " << circle2.getArea() << endl;

	return 0;
}