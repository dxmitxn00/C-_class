#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

////절차적언어 형태
//  // 제작자 관점
//typedef struct USERDATA {
//	int age;
//	char name[30];
//}USERDATA;
//
//  // 사용자 관점
//int main(void) {
//	USERDATA user = { 20, "길동" };
//	printf("%d, %s \n", user.age, user.name);
//
//	return 0;
//}

////객체지향적언어 형태
//  // 제작자 관점
//typedef struct USERDATA { // 구조체 만듦
//	int age;
//	char name[30];
//}USERDATA;  // 구조체 변수 선언
//
//void PrintData(USERDATA* pUser) {  // pUser = &user, PrintData함수의 USEREATA 구조체의 포인터 변수 pUser 선언
//	printf("%d, %s \n", pUser->age, pUser->name); // 포인터 변수를 통해 나이,이름 출력
//}
//
//  // 사용자 관점
//int main(void) {
//	USERDATA user = { 20, "길동" };
//	//printf("%d, %s \n", user.age, user.name);
//	PrintData(&user); // interface 함수
//
//	return 0;
//}


//typedef struct USERDATA { 
//	int age;
//	char name[30];
//	void(*Print)(struct USERDATA*); // USERDATA 구조체의 주소를 넣은 Print함수는 만듦
//}USERDATA;  
//
//void PrintData(USERDATA* pUser) { 
//	printf("%d, %s \n", pUser->age, pUser->name); 
//}
//
//int main(void) {
//	USERDATA user = { 20, "길동" , PrintData }; // 구조체 변수 선언, 초기화, 구조체의 Print함수에 PrintData 함수 주소 넣음
//	//printf("%d, %s \n", user.age, user.name);
//	//PrintData(&user);
//	user.Print(&user); // 구조체 변수 user의 Print함수에 user주소를 넣어 불러옴
//
//	return 0;
//}


//class USERDATA {
//public:
//	// 멤버 변수(필드) 선언
//	int age;
//	char name[30];
//
//	// 멤버 함수(메소드) 선언과 동시에 함수의 정의를 선언
//	void Print(void) {
//		printf("%d, %s \n", age, name);
//	}                                      // 클래스는 멤버 필드와 멤버 함수를 가지고 있어야 함
//};
//
//int main(void) {
//	USERDATA user = { 10, "길동" }; // 클래스 변수(user)를 다른 말로 "객체"라고 함, 생성자 USERDATA()
//	user.Print();
//
//	return 0;
//}


// C++ 형태
class Test {
public:
	Test() {
		nData = 20; // 생성자의 정의
	}
	int nData; // 멤버 변수(nData)선언

	// 멤버 함수 선언 및 정의
	void PrintData(void) {
		cout << nData << endl;
	}
};

int main(void) {
	Test te;
	te.PrintData();

	return 0;
};