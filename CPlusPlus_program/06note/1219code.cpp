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
//	Circle(double radius); // ������
//	Circle(); // ������(����Ʈ)
//	~Circle(); // �Ҹ���
//	//Circle(cont Circle& // ���� ������
//	void setRadius(double radius); // ������
//	double getRadius(); // ������
//	double getArea(); // ������
//};
//// �Ű����� �ִ� ������ ����
//Circle::Circle(double rad)
//	:radius(rad) {
//	cout << "�Ű����� �ִ� ������ ȣ��." << endl;
//}
//
////Circle::Circle(const Circle & circle)
////    :radius(circle.radius) {
////	cout << "���� ������ ȣ��." << endl;
////}
//
//Circle::~Circle() {
//	cout << "�Ҹ��� ȣ��." << endl;
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
//	Circle circle1(5.3); // �ν��Ͻ� ���� ���� �� ������ ȣ��
//	cout << "Radius : " << circle1.getRadius() << endl;
//	cout << "Radius : " << circle1.getArea() << endl;
//
//	Circle circle2(5.3);
//	cout << "Radius : " << circle2.getRadius() << endl;
//	cout << "Radius : " << circle2.getArea() << endl;
//	// �Ҹ��ڰ� ȣ��Ǵ� ����
//	return 0;
//}

//int main(void) {
//	// �迭�� ����
//	const int NUMBERS = 10; // �迭�� ���� �� ����
//	int arrayNumber[NUMBERS]; // �迭�� �̸�[]
//	int size; // ũ�� �Է¹޴� �Լ�
//
//	// ũ�� �Է� �޴´�. �׸��� �� ũ���� ��ȿ�� �˻絵 �Բ� �Ѵ�.
//	do {
//		cout << "ũ�⸦ �Է����ּ���(1~10) : ";
//		cin >> size;
//	} while (size < 1 || size > NUMBERS);
//
//	// ���� �Է� �ޱ�
//	cout << size << "���� ���ڸ� �Է����ּ��� : ";
//	for (int i = 0; i < size; i++) {
//		cin >> arrayNumber[i];
//	}
//
//	// �Է��� ���� �� �ݴ�� ���
//	cout << "�Է��� ���� �ݴ�� ��� : ";
//	for (int i = size - 1; i >= 0; i--) {
//		cout << arrayNumber[i] << " ";
//	}
//	return 0;
//}


/* 1. 3���� ������ �Է¹޴´�.
     ���� ���� ���� ���� ū ���� ����Ѵ�.*/

int main(void) {
    int a[4];
    int i;

    cout << "�� ������ �Է��ϼ��� : ";
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];

    // ū �� ���ϱ�
    if (a[0] > a[1]) {
        if (a[0] > a[2]) {
            cout << "���� ū ���� : " << a[0] << endl;
            cout << "���� ���� ���� : " << a[1] << endl;
        }
    }
    else {
        if (a[1] > a[2]) {
            cout << "���� ū ���� : " << a[1] << endl;
            cout << "���� ���� ���� : " << a[2] << endl;
        }
        else {
            if
        }
        if (a[0] > a[2]) {
            cout << "���� ���� ���� : " << a[2] << endl;
        }
        else {
            cout << "���� ���� ���� : " << a[0] << endl;
        }
    }

    // ���� �� ���ϱ�
    if (a[0] < a[1]) {
        if (a[0] < a[2]) {
            cout << "���� ���� ���� : " << a[0] << endl;
        }
    }

    if (a[1] < a[0]) {
        if (a[1] < a[2]) {
            cout << "���� ū ���� : " << a[1] << endl;
        }
    }

    if (a[2] < a[0]) {
        if (a[2] < a[1]) {
            cout << "���� ū ���� : " << a[2] << endl;
        }
    }

    return 0;
}
// ����.

/* 2. 10���� ������ �Է� �޴´�.
  10�� �� ���� ū ���� ���� ���� ���� �� ������ ���ڸ� ���Ͽ� ��� ���ϱ�*/

  //int main(void) {
  //    int num[11];
  //
  //    cout << "���� 10���� �Է��ϼ��� : ";
  //    cin >> num[0]
  //}