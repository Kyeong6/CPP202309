#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL)); // random �Լ� ���� ����

	int answer = rand() % 100; // ����
	int tries = 0; // �õ� Ƚ�� ���� ����
	
	int guess = 0; // ����� �Է� ���� ����

	// do-while�� ���ؼ� ���� ������ �ְ�, guess�� ���� ���� �� tries +1�ϱ�
	do {
		cout << "������ �����Ͽ� ���ÿ�: ";
		cin >> guess;
		tries++;

		if (answer > guess) // ������ ������ ������ ũ�� ���ٰ� �˷��ֱ�
			cout << "������ ������ �����ϴ�." << endl;
		if (answer < guess) // ������ ������ ������ ������ ũ�ٰ� �˷��ֱ� 
			cout << "������ ������ �����ϴ�." << endl;		
	} while (guess != answer); // ���� ���� - ���� �ٸ��ٸ� ��� ����

	cout << "�����մϴ�. �õ� Ƚ��=" << tries << endl; // �õ�Ƚ���� �������
	return 0;
}