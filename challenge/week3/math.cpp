#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int i;
	int ans; // �亯 ���� ����
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;

	while (true) {
		int firstNum = rand() % 100; // ù��° �� �������� ����
		int secondNum = rand() % 100; // �ι�° �� �������� ����

		cout << firstNum << "+" << secondNum << "="; // ���� ����
		cin >> ans; // �亯 �ޱ�
		if (firstNum + secondNum == ans)  // �亯�� ���� ���� ��� break����
		{ 
			cout << "�¾ҽ��ϴ�." << endl;
			break;
		}
		else {
			cout << "Ʋ�Ƚ��ϴ�." << endl;
		}
	}
	return 0;
}
