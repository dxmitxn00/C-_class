#include<iostream>
#include<string> // C++������ ������� ���x, .h ���̸� �ȵ�
#include<typeinfo> // �Ͻ������� �ڷ����� ��ȯ
#include<iomanip> // ��� ������ ����� ������ 
using namespace std;

//int main(void) {
//	cout << "ó�� �ڵ��ϴ� C++" << endl;
//}

//int main(void) {
//	int num1;
//	int num2;
//	int sum;
//
//	cout << "ù ���� ���ڸ� �Է����ּ���.: ";
//	cin >> num1;
//
//	cout << "�� ���� ���ڸ� �Է����ּ���.: ";
//	cin >> num2;
//
//	sum = num1 + num2;
//
//	cout << "�� ���� ���� : " << sum;
//}

//int main(void) {
//	char first = 'A';
//	char second = 'B';
//
//	cout << "first�� ��: " << first << endl;
//	cout << "second�� ��: " << second << endl;
//}

//int main(void) {
//	bool x = 123;
//	bool y = -9;
//	bool z = 0;
//	bool t = -0;
//	bool u = true;
//	bool w = false;
//
//	cout << "x�� ���� : " << x << endl;
//	cout << "y�� ���� : " << y << endl;
//	cout << "z�� ���� : " << z << endl;
//	cout << "t�� ���� : " << t << endl;
//	cout << "u�� ���� : " << u << endl;
//	cout << "w�� ���� : " << w << endl;
//}

//int main(void) {
//	string first;
//	string second;
//	string space = "  ";
//	string dot = ".";
//	string fullName;
//
//	cout << "�̸�(first)�� �Է��ϼ���: ";
//	cin >> first;
//
//	cout << "�̸�(second)�� �Է��ϼ���: ";
//	cin >> second;
//
//	fullName = first + space + dot + second;
//
//	cout << "��ü �̸��� :" << fullName;
//}

//int main(void) {
//	bool x = false;
//	char y = 'A';
//	short z = 10;
//	float w = 22.5;
//
//	// bool���� int������ ��ȯ
//	cout << "x + 100 �ڷ���: " << typeid(x + 100).name << endl;
//	cout << "x + 100�� �� : " << x + 100 << endl;
//
//	cout << "y + 100 �ڷ���: " << typeid(y + 100).name() << endl;
//	cout << "y + 100�� �� : " << y + 100 << endl;
//
//	cout << "z + 100 �ڷ���: " << typeid(z + 100).name() << endl;
//	cout << "z + 100�� �� : " << z + 100 << endl;
//
//	cout << "w + 1500.2 �ڷ���: " << typeid(w + 1500.2).name() << endl;
//	cout << "w + 1500.2�� �� : " << w + 1500.2 << endl;
//}

//int main(void) {
//	double x = 20.36; // �ε� �Ҽ��� = �Ǽ���
//	int y = 40;
//
//	// �� ��ȯ
//	cout << "�� ��ȯ�� �� ��� : " << static_cast<int>(x) + y << endl;
//	cout << "�� ��ȯ�� ���� ���� ��� : " << x + y << endl;
//}

//int main(void) {
//	int num;
//
//	cout << "������ �Է��ϼ��� : ";
//	cin >> num;
//	
//	if (num < 0) {
//		num = -num; // ���� ��
//	}
//
//	cout << "�Է��� ���ڴ� = " << num;
//}


// ����)
// ������ �޿��� ����ϴ� ���α׷��� �ۼ�
// �⺻ �ٹ� �ð��� 40�ð�
// �ʰ� �ٹ� �ð��� ���ؼ��� �⺻ �޿��� 130% ����
// ��¿���>
// ���� �ð��� �Է����ּ��� :
// �ð��� �޿��� �Է����ּ��� :
// �Ϲݱ޿� �Ի� ����>
// pay = �ð� * �ð��� �޿�
// �ʰ� �ð� �޿�>
// if (hour > 40.0) {
// overpay = (hours - 40.0) * �ð��� �޿� * 0.30;
// }

//int main(void) {
//	int hours = 0; // �����ð�
//	int tpay = 0; // �ð� �� �޿�
//	int overpay = 0; // �ʰ� �ð� �޿�
//	int total = 0; // �� �޿�
//
//	cout << "���� �ð��� �Է����ּ��� : ";
//	cin >> hours;
//	cout << "�ð� �� �޿��� �Է����ּ��� : ";
//	cin >> tpay;
//
//	if (hours > 40.0) {
//		overpay = (hours - 40.0) * tpay * 0.30;
//	}
//
//	total = hours * tpay + overpay;
//
//	cout << "�� �޿��� : " << total << endl;
//}

//int main(void) {
//	int n;
//
//	cout << "���� �Է� : ";
//	cin >> n;
//
//	for (int num = 0; num < n; num++) {
//		cout << num << " ";
//}

// ����)
// 1���� 300 ������ �ִ� 7�� ���� �� �ִ� ������ ���

//int main(void) {
//	int start = 1;
//	int end = 300;
//	int div = 7;
//	int col = 1;
//
//	for (int i = start; i < end; i++) {
//		if (i % div == 0) {
//			cout << setw(5) << i; // setw�� ��ó�������ڿ��� ������� �ٲٴ� �� ����ϴ� �� ()�ȿ� ���ڸ�ŭ ����
//			col++;
//			if (col > 10) {
//				cout << endl;
//				col = 1;
//			}
//		}
//	}
//	
//}

// ����)
// ��¥�� �Է��ϼ���(28,30,31)
// ù ������ �����ϼ���
