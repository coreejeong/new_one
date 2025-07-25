#include<iostream>
#include<ctime>//�ð� ���� �Լ�
#include<thread> //  thread(���μ��� �۾�) this_thread::sleepfor()
using namespace std;

int main() {
	//���� �ð�
	time_t now = time(nullptr); //c��� - NULL

	cout << now << "��\n";
	cout << now/(24*60*60) << "��\n";
	cout << now/(24*60*60*365) << "��\n";

	////���� �ð� ����
	//time_t start, end;
	//
	////start = time(nullptr);
	//time(&start);

	////0.5�� �������� ��� �ð�
	//for (int i = 0; i <= 10;i++) {
	//	cout << i << endl;
	//	//<thread> ������� ����, 1�� - 1000ms
	//	this_thread::sleep_for(chrono::milliseconds(500));
	//}

	////end = time(nullptr);
	//time(&end);
	//cout << "����ð�: " << (end - start) << "��\n";

	//���� �ð� ����(�Ǽ���)
	time_t start, end;
	double elapsedTime; //�ҿ� �ð�
	
	start = clock();

	//0.5�� �������� ��� �ð�
	for (int i = 0; i <= 10;i++) {
		cout << i << endl;
		//<thread> ������� ����, 1�� - 1000ms
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	end = clock();
	//CLOCKS_PER_SEC - �� ���� ��ȯ ���
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	
	cout << "����ð�: " << elapsedTime << "��\n";



	return 0;
}