#include <iostream>
#include <string>
#include <typeinfo>
#include <iomanip>
#include <fstream>

using namespace std;

//class Circle {
//private:
//	double radius;
//public:
//	Circle(double radius); // 생성자
//	Circle(); // 생성자(디폴트)
//	~Circle(); // 소멸자
//	//Circle(cont Circle& // 복사 생성자
//	void setRadius(double radius); // 설정자
//	double getRadius(); // 접근자
//	double getArea(); // 접근자
//};
//// 매개변수 있는 생성자 정의
//Circle::Circle(double rad)
//	:radius(rad) {
//	cout << "매개변수 있는 생성자 호출." << endl;
//}
//
////Circle::Circle(const Circle & circle)
////    :radius(circle.radius) {
////	cout << "복사 생성자 호출." << endl;
////}
//
//Circle::~Circle() {
//	cout << "소멸자 호출." << endl;
//	cout << endl;
//}
//
//void Circle::setRadius(double value) {
//	radius = value;
//}
//
//double Circle::getRadius() const {
//	return radius;
//}
//
//double Circle::getArea() const {
//	const double PI = 3.14;
//	return(PI * radius * radius);
//}
//
//int main(void) {
//	Circle circle1(5.3); // 인스턴스 변수 생성 및 생성자 호출
//	cout << "Radius : " << circle1.getRadius() << endl;
//	cout << "Radius : " << circle1.getArea() << endl;
//
//	Circle circle2(5.3);
//	cout << "Radius : " << circle2.getRadius() << endl;
//	cout << "Radius : " << circle2.getArea() << endl;
//	// 소멸자가 호출되는 시점
//	return 0;
//}

//int main(void) {
//	// 배열의 선언
//	const int NUMBERS = 10; // 배열의 길이 값 선언
//	int arrayNumber[NUMBERS]; // 배열의 이름[]
//	int size; // 크기 입력받는 함수
//
//	// 크기 입력 받는다. 그리고 그 크기의 유효성 검사도 함께 한다.
//	do {
//		cout << "크기를 입력해주세요(1~10) : ";
//		cin >> size;
//	} while (size < 1 || size > NUMBERS);
//
//	// 정수 입력 받기
//	cout << size << "개의 숫자를 입력해주세요 : ";
//	for (int i = 0; i < size; i++) {
//		cin >> arrayNumber[i];
//	}
//
//	// 입력한 정수 값 반대로 출력
//	cout << "입력한 정수 반대로 출력 : ";
//	for (int i = size - 1; i >= 0; i--) {
//		cout << arrayNumber[i] << " ";
//	}
//	return 0;
//}


/* 1. 3개의 정수를 입력받는다.
     가장 작은 수와 가장 큰 수를 출력한다.*/

int main(void) {
    int a[4];
    int i;

    cout << "세 정수를 입력하세요 : ";
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];

    // 큰 수 구하기
    if (a[0] > a[1]) {
        if (a[0] > a[2]) {
            cout << "가장 큰 수는 : " << a[0] << endl;
            cout << "가장 작은 수는 : " << a[1] << endl;
        }
    }
    else {
        if (a[1] > a[2]) {
            cout << "가장 큰 수는 : " << a[1] << endl;
            cout << "가장 작은 수는 : " << a[2] << endl;
        }
        else {
            if
        }
        if (a[0] > a[2]) {
            cout << "가장 작은 수는 : " << a[2] << endl;
        }
        else {
            cout << "가장 작은 수는 : " << a[0] << endl;
        }
    }

    // 작은 수 구하기
    if (a[0] < a[1]) {
        if (a[0] < a[2]) {
            cout << "가장 작은 수는 : " << a[0] << endl;
        }
    }

    if (a[1] < a[0]) {
        if (a[1] < a[2]) {
            cout << "가장 큰 수는 : " << a[1] << endl;
        }
    }

    if (a[2] < a[0]) {
        if (a[2] < a[1]) {
            cout << "가장 큰 수는 : " << a[2] << endl;
        }
    }

    return 0;
}
// 망함.

/* 2. 10개의 정수를 입력 받는다.
  10개 중 가장 큰 수와 가장 작은 수를 뺀 나머지 숫자를 더하여 평균 구하기*/

  //int main(void) {
  //    int num[11];
  //
  //    cout << "정수 10개를 입력하세요 : ";
  //    cin >> num[0]
  //}