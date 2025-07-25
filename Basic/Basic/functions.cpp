#include<iostream>
using namespace std;

/*
	함수 정의와 호출
	-전역 변수 - main()위 전역 공간에 생성, 값을 유지, 공유함
	-지역 변수 - 함수 블럭 안에서 생성되고 호출 후 소멸
	-정적 변수 - 지역 변수인데 전역 변수화 함, 변수 앞에 static
*/
//전역 변수
//int x = 10;
//int y = 10;

void click() {
	int x = 10;
	static int y = 10; //전역 변수화

	x++;
	y++;

	cout << "x = " << x << ", y = " << y << endl;
}

int main() {
	click(); 
	click();
	click();


	return 0;
}