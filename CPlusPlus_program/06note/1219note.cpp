//혹은 기본 생성자 둘 중에 하나라도 선언하지 않으면 "합성 기본 생성자"라는 것을 만든다.
//
//클래스 선언
//1. 멤버 변수(private)
//2. 생성자(def, 매개변수를 가지는)
//3. 메소드 선언
//4. instance화(객체 생성)
//
//인스턴스 멤버
//캡슐화
//
//Circle
//radius : 0.0
//
//Circle c1; // radius : 1.2
//
//Circle c2; // radius : 2.5
//
//Circle c3; // radius : 3.5
//
//= > 인스턴스끼리는 서로 접근할 수 없다.
//
//멤버변수 : public(X) ==> private(O)
//
//instance 멤버 함수(메소드)
//
//instance 변수 == = > 객체
//
//인스턴스 멤버 함수는 메모리에 하나만 올라간다.
//
//인스턴스 멤버 함수 선택자
//객체.멤버
//
//선택 / 연결 연산자 같은 의미
//".", "->"   포인터->멤버
//
//double getRadius() const {
//	return radius;
//}
//
//double getRadius(Circle* this) const {
//	return(this->radius);
//}
//
//C++ 함수(메소드)가 특정 객체를 가리킬 때 두가지의 형식이 들어온다
//1. 락킹(lock)
//2. 언락킹(unlock)
//
//
//
//
//
//-배열의 속성
//1. 자료형, 크기, 용적
//ㄴ > 크기: 배열에 들어간 데이터 크기 / 용적 : 배열이 가진 크기(길이값)
//
//- 배열의 생성
//1. 선언
//자료형 배열의이름[배열의길이값]
//int array[10];
//int number = 10;
//int array[number]
//
//- 초기화 int : 0, double : 0.0
//객체 자료형은 기본 생성자로부터 기본값으로 초기화
//- 명시적 초기화
//const int NUMBER = 100;
//int array[NUMBER} = { 0 }
//
//- 암묵적 초기화
//int array[] = { 10, 20, 30, 40, 50 };