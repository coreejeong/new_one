#include<iostream>
using namespace std;

int main() {
	//c���
	//char seasons[4][10] = { "��", "����", "����", "�ܿ�" };
	////printf("%s\n", seasons[0]);//��
	//int len = sizeof(seasons) / sizeof(seasons[0]);

	//for (int i = 0; i < 4;i++) {
	//	printf("%s\n", seasons[i]);
	//}

	//c++ - ���ڿ� �迭 ���� - ����, ��� �߰�, ��� ����, ����, �˻�

	string carts[] = {"���", "��","����","ȭ����"};

	//�迭�� ũ�� -size
	cout << size(carts)<<endl; // 4
	
	//��� ��ȸ
	cout << carts[2] << endl; //����

	for (int i = 0; i < size(carts); i++) {
		cout << carts[i] << " ";
	}

	cout << endl;
	//��� ����
	carts[1] = "��";

	//��ü ��ȸ
	//���� ��� for�� - for(�ڷ��� ���� : �迭 �̸�){}

	for (string cart : carts) {
		cout << cart << " ";

	}

	return 0;
}