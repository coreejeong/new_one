#include<iostream>
#include<string>
using namespace std;


int main() {
	string year;
	
	cout << "출생 년도를 입력하세요: ";
	cin >> year;
	
	

	if (year.length() != 4) {
		cout << "입력 오류: 출생년도는 4자리여야 합니다.\n";
		return 1;

	}
	char numm = year.at(3);

	switch (numm) {
	case '1': case '6':
		cout << "신청일은 월요일 입니다.\n"; break;
	case '2' : case '7':
		cout << "신청일은 화요일 입니다.\n"; break;
	case '3' : case '8':
		cout << "신청일은 수요일 입니다.\n"; break;
	case '4' : case '9':
		cout << "신청일은 목요일 입니다.\n"; break;
	case '5': case '0':
		cout << "신청일은 금요일 입니다.\n"; break;
	default:
		cout << "신청할 수 없는 요일입니다.\n"; break;
	}

	return 0;
}