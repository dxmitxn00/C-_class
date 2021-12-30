#include <iostream>
#include <string>
#include <typeinfo>
#include <iomanip>

using namespace std;

//int square(int n) {
//	cout << "square(int) 호출" << endl;
//	return (n * n);
//}
//
//double square(double n) {
//	cout << "square(double) 호출" << endl; 
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
//	cout << "디폴트 매개 변수 " << endl;
//	cout << calc(200, 6) << endl;
//
//	cout << "1 디폴트 매개 변수 " << endl;
//	cout << calc(200) << endl;
//
//	cout << "2 디폴트 매개 변수 " << endl;
//	cout << calc() << endl;
//
//	return 0;
//}
//
//int calc(int sal, int month) {
//	return sal * month;
//}

//inline 함수
//inline double square(double d) {
//	return d * d;
//}
//
//int main(void) {
//	cout << "2.0의 제곱" << square(2.0) << endl;
//	cout << "3.0의 제곱" << square(3.0) << endl;
//
//	return 0;
//}

//void sub(void) {
//	int i = 0;
//	static int s = 0; //전역변수
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
//	const int STUDENTS = 10; //기호 상수 선언
//	int grade[STUDENTS];
//
//	int sum = 0;
//	int i, ave;
//
//	for (i = 0; i < STUDENTS; i++) {
//		cout << "성적을 입력해주세요: ";
//		cin >> grade[i];
//	}
//
//	for (i = 0; i < STUDENTS; i++) {
//		sum += grade[i];
//	}
//	ave = sum / STUDENTS;
//	cout << "평균: " << ave << endl;
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
//	cout << "증가 전 pc = " << (void*)pc << "  pi = " << pi << "  pd = " << pd << endl;
//
//	pc++;
//	pi++;
//	pd++;
//
//	cout << "증가 후 pc = " << (void*)pc << "  pi = " << pi << "  pd = " << pd << endl;
//
//	return 0;
//}


//int main(void) {
//	const int MAX_SIZE = 10;
//	int* pi;
//
//	pi = (int*)malloc(MAX_SIZE * sizeof(int)); // 배열이 가져가려는 메모리 크기(40)
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
//		*(p + i) = 0; // 동적 메모리 사용, p[i] = 0;랑 같음
//	}
//	delete[] p; // 동적 메모리 반납
//	return 0;
//}

int main(void) {
	int var; // 변수 선언
	int& ref = var; // 참조 변수 ref 선언

	var = 10;
	cout << "var = " << var << endl;
	cout << "ref = " << ref << endl;

	ref = 30;
	cout << "var = " << var << endl;
	cout << "ref = " << ref << endl;

	return 0;
}