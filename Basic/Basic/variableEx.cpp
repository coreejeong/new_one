#include<iostream>

using namespace std;//�̸� ���� ����: ���� std ����

int main() {
	//������ �ڷ�
	char ch1 = 'A';
	char ch2 = 65;//�ƽ�Ű �ڵ� �� - A
	char ch3[] = "��";//c��� �迭
	string str1 = "��";
	string str2 = "apple";

	cout << ch1 << endl;
	cout << ", "<<ch2 << endl;
	cout << str1 << endl;
	cout << str1 << ", " << str2 << endl;


	//bool �ڷ���
	bool val;
	
	val = true;

	cout << val << endl;

	val = false;
	cout << val << endl;

	//���� ������ - (���ǽ�)? ��:����

	int fatherAge = 45; 
	int motherAge = 47;
	char result1;
	bool b1;

	result1 = motherAge;

	result1 = (fatherAge > motherAge) ? 'T' : 'F';

	cout << "�����: " << result1 << endl;

	b1 = (fatherAge > motherAge) ? 'T' : 'F';

	b1 << "�����: "<< b1 << endl;
	
	result2 = (fatherAge>motherAge)? "����": "����";
	cout << "�����" << result2 << endl;

	return 0;
}