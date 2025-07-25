#include<iostream>

using namespace std;//이름 공간 선언: 이후 std 생략

int main() {
	//문자형 자료
	char ch1 = 'A';
	char ch2 = 65;//아스키 코드 값 - A
	char ch3[] = "나";//c언어 배열
	string str1 = "나";
	string str2 = "apple";

	cout << ch1 << endl;
	cout << ", "<<ch2 << endl;
	cout << str1 << endl;
	cout << str1 << ", " << str2 << endl;


	//bool 자료형
	bool val;
	
	val = true;

	cout << val << endl;

	val = false;
	cout << val << endl;

	//조건 연산자 - (조건식)? 참:거짓

	int fatherAge = 45; 
	int motherAge = 47;
	char result1;
	bool b1;

	result1 = motherAge;

	result1 = (fatherAge > motherAge) ? 'T' : 'F';

	cout << "결과값: " << result1 << endl;

	b1 = (fatherAge > motherAge) ? 'T' : 'F';

	b1 << "결과값: "<< b1 << endl;
	
	result2 = (fatherAge>motherAge)? "연하": "연상";
	cout << "결과값" << result2 << endl;

	return 0;
}