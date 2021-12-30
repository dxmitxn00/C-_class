#include<iostream>
#include<string> // C++에서는 헤더파일 사용x, .h 붙이면 안됨
#include<typeinfo> // 암시적으로 자료형을 변환
#include<iomanip> // 출력 형식을 사용자 지정에 
using namespace std;

//int main(void) {
//	cout << "처음 코딩하는 C++" << endl;
//}

//int main(void) {
//	int num1;
//	int num2;
//	int sum;
//
//	cout << "첫 번재 숫자를 입력해주세요.: ";
//	cin >> num1;
//
//	cout << "두 번재 숫자를 입력해주세요.: ";
//	cin >> num2;
//
//	sum = num1 + num2;
//
//	cout << "두 수의 합은 : " << sum;
//}

//int main(void) {
//	char first = 'A';
//	char second = 'B';
//
//	cout << "first의 값: " << first << endl;
//	cout << "second의 값: " << second << endl;
//}

//int main(void) {
//	bool x = 123;
//	bool y = -9;
//	bool z = 0;
//	bool t = -0;
//	bool u = true;
//	bool w = false;
//
//	cout << "x의 값은 : " << x << endl;
//	cout << "y의 값은 : " << y << endl;
//	cout << "z의 값은 : " << z << endl;
//	cout << "t의 값은 : " << t << endl;
//	cout << "u의 값은 : " << u << endl;
//	cout << "w의 값은 : " << w << endl;
//}

//int main(void) {
//	string first;
//	string second;
//	string space = "  ";
//	string dot = ".";
//	string fullName;
//
//	cout << "이름(first)을 입력하세요: ";
//	cin >> first;
//
//	cout << "이름(second)을 입력하세요: ";
//	cin >> second;
//
//	fullName = first + space + dot + second;
//
//	cout << "전체 이름은 :" << fullName;
//}

//int main(void) {
//	bool x = false;
//	char y = 'A';
//	short z = 10;
//	float w = 22.5;
//
//	// bool에서 int형으로 변환
//	cout << "x + 100 자료형: " << typeid(x + 100).name << endl;
//	cout << "x + 100의 값 : " << x + 100 << endl;
//
//	cout << "y + 100 자료형: " << typeid(y + 100).name() << endl;
//	cout << "y + 100의 값 : " << y + 100 << endl;
//
//	cout << "z + 100 자료형: " << typeid(z + 100).name() << endl;
//	cout << "z + 100의 값 : " << z + 100 << endl;
//
//	cout << "w + 1500.2 자료형: " << typeid(w + 1500.2).name() << endl;
//	cout << "w + 1500.2의 값 : " << w + 1500.2 << endl;
//}

//int main(void) {
//	double x = 20.36; // 부동 소수점 = 실수형
//	int y = 40;
//
//	// 형 변환
//	cout << "형 변환를 한 경우 : " << static_cast<int>(x) + y << endl;
//	cout << "형 변환를 하지 않은 경우 : " << x + y << endl;
//}

//int main(void) {
//	int num;
//
//	cout << "정수를 입력하세요 : ";
//	cin >> num;
//	
//	if (num < 0) {
//		num = -num; // 절대 값
//	}
//
//	cout << "입력한 숫자는 = " << num;
//}


// 문제)
// 직원의 급여를 계산하는 프로그램을 작성
// 기본 근무 시간은 40시간
// 초과 근무 시간에 대해서는 기본 급여의 130% 적용
// 출력예시>
// 업무 시간을 입력해주세요 :
// 시간당 급여를 입력해주세요 :
// 일반급여 게산 공식>
// pay = 시간 * 시간당 급여
// 초과 시간 급여>
// if (hour > 40.0) {
// overpay = (hours - 40.0) * 시간당 급여 * 0.30;
// }

//int main(void) {
//	int hours = 0; // 업무시간
//	int tpay = 0; // 시간 당 급여
//	int overpay = 0; // 초과 시간 급여
//	int total = 0; // 총 급여
//
//	cout << "업무 시간을 입력해주세요 : ";
//	cin >> hours;
//	cout << "시간 당 급여를 입력해주세요 : ";
//	cin >> tpay;
//
//	if (hours > 40.0) {
//		overpay = (hours - 40.0) * tpay * 0.30;
//	}
//
//	total = hours * tpay + overpay;
//
//	cout << "총 급여는 : " << total << endl;
//}

//int main(void) {
//	int n;
//
//	cout << "숫자 입력 : ";
//	cin >> n;
//
//	for (int num = 0; num < n; num++) {
//		cout << num << " ";
//}

// 문제)
// 1부터 300 범위에 있는 7로 나눌 수 있는 정수를 출력

//int main(void) {
//	int start = 1;
//	int end = 300;
//	int div = 7;
//	int col = 1;
//
//	for (int i = start; i < end; i++) {
//		if (i % div == 0) {
//			cout << setw(5) << i; // setw는 전처리지시자에서 출력형식 바꾸는 거 사용하는 것 ()안에 숫자만큼 띄어라
//			col++;
//			if (col > 10) {
//				cout << endl;
//				col = 1;
//			}
//		}
//	}
//	
//}

// 문제)
// 날짜를 입력하세요(28,30,31)
// 첫 요일을 선택하세요
