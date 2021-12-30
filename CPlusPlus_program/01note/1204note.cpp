//C++
//
//#include<iostream> 전처리 지시자
//iostream : input / output
//stream : data
//std : standard 표준
//cout : 출력 /= = printf
//cout <<
//cin : 입력 == scanf
//cin >>
//
//std::cout << "출력될 내용";
//endl == \n
//
//
//
//C++은 C랑 다르게 자동적으로 return이 돼서 안써줘도됨
//
//
//
//cout / cin = > printf랑 scamf처럼 함수가 아님
//ㄴ > 'object'(객체)라고 불림
//
//- 객체(인스턴스 변수) : 클래스에서 파생됨
//하나에 클래스에는 여러 개의 객체를 가질 수 있다.
//
//
//- using namespace std; 를 적으면 std를 생략할 수 있음
//ㄴ > std::자동 삽입
//
//C++에서는 서식지정자랑 주소연산자 쓰지 않음
//
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
//
//====== = > 이런 패턴
//
//
//cin >> x;  // 키보드로부터 입력받아서 변수 x에 저장
//cout << x;  // 변수 x를 출력
//cout << 4; // 4를 출력
//ci >> 4; (x)// 객체는 직접적으로 값을 받을 수 없다
//변수에 의해 값을 받는다.
//
//소문자는 변수, 대문자는 상수
//int max = 4; // 변수
//MAX = 4; // 상수 
//ㄴ > const int MAX = 4; // C++에서는 앞에 const가 붙어야함
//프로그램 실행중에는 값이 바뀌지 않는다.
//
//데이터 형 : int, float, char...
//자료 형 : +, -, *, / ...
//
//PI = x; // error
//cin >> PI; // error
//cout << PI; // error아님
//x = PI; // error 아님
//
//숫자 자료형
//int 1. int(부호화 비트 있는 것, 음수 양수 포함)
//2. unsigned(부호화 비트 없는 것, 양수만)
//unsigned int .... // 음수없이 양수만 사용하겠다는 의미
//
//문자 자료형
//char
//
//문자열 자료형
//string
//
//
//
//namespace : 이름을 저장하는 공간
//
//
//	- bool 타입 : true / false  (C언어에는 없고 C++에 추가된 것)
//	0 : false
//	1 : true
//
//
//	- 자료형 변환(형 변환)
//
//	원형 자료              변환 자료
//	1.            bool                     int
//	2.            char                      int
//	3.            short                     int
//	4.            float                   double
//
//	자료형 변환 typeid().name써야함
//
//	- 명시적인 변환(캐스팅 변환)
//	: 사용자가 강제적으로 변환하는 것을 의미한다.
//	static_cast 사용한 변환
//
//
//	문제)
//	직원의 급여를 계산하는 프로그램을 작성
//	기본 근무 시간은 40시간
//	초과 근무 시간에 대해서는 기본 급여의 130 % 적용
//	출력예시 >
//	업무 시간을 입력해주세요 :
//시간당 급여를 입력해주세요 :
//일반급여 게산 공식 >
//pay = 시간 * 시간당 급여
//초과 시간 급여 >
//if (hour > 40.0) {
//	overpay = (hours - 40.0) * 시간당 급여 * 0.30;
//}
//
//int main(void) {
//	int hour = 0;
//	int tpay = 0;
//	int overpay = 0;
//	int total = 0;
//
//	cout << "업무 시간을 입력해주세요 : ";
//	cin >> hour;
//	cout << "시간 당 급여를 입력해주세요 : ";
//	cin >> tpay;
//
//	if (hour > 40.0) {
//		overpay = (hour - 40.0) * tpay * 0.30;
//	}
//
//	total = hour * tpay + overpay;
//
//	cout << "총 급여는 : " << total << endl;
//}
