#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

////��������� ����
//  // ������ ����
//typedef struct USERDATA {
//	int age;
//	char name[30];
//}USERDATA;
//
//  // ����� ����
//int main(void) {
//	USERDATA user = { 20, "�浿" };
//	printf("%d, %s \n", user.age, user.name);
//
//	return 0;
//}

////��ü��������� ����
//  // ������ ����
//typedef struct USERDATA { // ����ü ����
//	int age;
//	char name[30];
//}USERDATA;  // ����ü ���� ����
//
//void PrintData(USERDATA* pUser) {  // pUser = &user, PrintData�Լ��� USEREATA ����ü�� ������ ���� pUser ����
//	printf("%d, %s \n", pUser->age, pUser->name); // ������ ������ ���� ����,�̸� ���
//}
//
//  // ����� ����
//int main(void) {
//	USERDATA user = { 20, "�浿" };
//	//printf("%d, %s \n", user.age, user.name);
//	PrintData(&user); // interface �Լ�
//
//	return 0;
//}


//typedef struct USERDATA { 
//	int age;
//	char name[30];
//	void(*Print)(struct USERDATA*); // USERDATA ����ü�� �ּҸ� ���� Print�Լ��� ����
//}USERDATA;  
//
//void PrintData(USERDATA* pUser) { 
//	printf("%d, %s \n", pUser->age, pUser->name); 
//}
//
//int main(void) {
//	USERDATA user = { 20, "�浿" , PrintData }; // ����ü ���� ����, �ʱ�ȭ, ����ü�� Print�Լ��� PrintData �Լ� �ּ� ����
//	//printf("%d, %s \n", user.age, user.name);
//	//PrintData(&user);
//	user.Print(&user); // ����ü ���� user�� Print�Լ��� user�ּҸ� �־� �ҷ���
//
//	return 0;
//}


//class USERDATA {
//public:
//	// ��� ����(�ʵ�) ����
//	int age;
//	char name[30];
//
//	// ��� �Լ�(�޼ҵ�) ����� ���ÿ� �Լ��� ���Ǹ� ����
//	void Print(void) {
//		printf("%d, %s \n", age, name);
//	}                                      // Ŭ������ ��� �ʵ�� ��� �Լ��� ������ �־�� ��
//};
//
//int main(void) {
//	USERDATA user = { 10, "�浿" }; // Ŭ���� ����(user)�� �ٸ� ���� "��ü"��� ��, ������ USERDATA()
//	user.Print();
//
//	return 0;
//}


// C++ ����
class Test {
public:
	Test() {
		nData = 20; // �������� ����
	}
	int nData; // ��� ����(nData)����

	// ��� �Լ� ���� �� ����
	void PrintData(void) {
		cout << nData << endl;
	}
};

int main(void) {
	Test te;
	te.PrintData();

	return 0;
};