#include <iostream>
#include <string>
#include <typeinfo>
#include <iomanip>

using namespace std;

//int square(int n) {
//	cout << "square(int) ȣ��" << endl;
//	return (n * n);
//}
//
//double square(double n) {
//	cout << "square(double) ȣ��" << endl; 
//	return (n * n);
//}
//
//int main(void) {
//	cout << square(10) << endl;
//	cout << square(2.0) << endl;
//	return 0;
//}

//int calc(int sal = 300, int mon = 12); //default
//
//int main(void) {
//	cout << "����Ʈ �Ű� ���� " << endl;
//	cout << calc(200, 6) << endl;
//
//	cout << "1 ����Ʈ �Ű� ���� " << endl;
//	cout << calc(200) << endl;
//
//	cout << "2 ����Ʈ �Ű� ���� " << endl;
//	cout << calc() << endl;
//
//	return 0;
//}
//
//int calc(int sal, int month) {
//	return sal * month;
//}

//inline �Լ�
//inline double square(double d) {
//	return d * d;
//}
//
//int main(void) {
//	cout << "2.0�� ����" << square(2.0) << endl;
//	cout << "3.0�� ����" << square(3.0) << endl;
//
//	return 0;
//}

//void sub(void) {
//	int i = 0;
//	static int s = 0; //��������
//	 
//	i++;
//	s++;
//	cout << "i :" << i << "s :" << s << endl;
//
//}
//
//int main(void) {
//	sub();
//	sub();
//	sub();
//	return 0;
//}

//int main(void) {
//	const int STUDENTS = 10; //��ȣ ��� ����
//	int grade[STUDENTS];
//
//	int sum = 0;
//	int i, ave;
//
//	for (i = 0; i < STUDENTS; i++) {
//		cout << "������ �Է����ּ���: ";
//		cin >> grade[i];
//	}
//
//	for (i = 0; i < STUDENTS; i++) {
//		sum += grade[i];
//	}
//	ave = sum / STUDENTS;
//	cout << "���: " << ave << endl;
//	return 0;
//}

//int main(void) {
//	char* pc;
//	int* pi;
//	double* pd;
//
//	pc = (char *)10000;
//	pi = (int *)10000;
//	pd = (double *)10000;
//
//	cout << "���� �� pc = " << (void*)pc << "  pi = " << pi << "  pd = " << pd << endl;
//
//	pc++;
//	pi++;
//	pd++;
//
//	cout << "���� �� pc = " << (void*)pc << "  pi = " << pi << "  pd = " << pd << endl;
//
//	return 0;
//}


//int main(void) {
//	const int MAX_SIZE = 10;
//	int* pi;
//
//	pi = (int*)malloc(MAX_SIZE * sizeof(int)); // �迭�� ���������� �޸� ũ��(40)
//
//	for (int i = 0; i < MAX_SIZE; i++) {
//		*pi = 0;
//	}
//	
//	free(pi);
//	return 0;
//}

//int main(void) {
//	int* p;
//
//	p = new int[50];
//
//	for (int i = 0; i < 50; i++) {
//		*(p + i) = 0; // ���� �޸� ���, p[i] = 0;�� ����
//	}
//	delete[] p; // ���� �޸� �ݳ�
//	return 0;
//}

int main(void) {
	int var; // ���� ����
	int& ref = var; // ���� ���� ref ����

	var = 10;
	cout << "var = " << var << endl;
	cout << "ref = " << ref << endl;

	ref = 30;
	cout << "var = " << var << endl;
	cout << "ref = " << ref << endl;

	return 0;
}