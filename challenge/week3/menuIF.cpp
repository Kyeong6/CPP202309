#include <iostream>
using namespace std;

int main() {
	int choice; // ������ ���� choice ����

	// ���ϴ� ��ɿ� ���ڸ� �Է��Ͽ� choice�� ���
	cout << "1. ���� ����" << endl;
	cout << "2. ���� ���� �ݱ�" << endl;
	cout << "3. ����" << endl;
	cin >> choice;
	
	// ���ǹ��� �ִ� ǥ������ ���� ���ڰ� ����ִ� choice ������ �ش��ϴ� ��� ���
	if (choice == 1)
		cout << "���� ������ �����߽��ϴ�." << endl;
	else if (choice == 2)
		cout << "���� �ݱ⸦ �����߽��ϴ�." << endl;
	else if (choice == 3)
		cout << "���α׷��� �����մϴ�." << endl;
	else
		cout << "�߸��� �����Դϴ�." << endl;

	return 0;
}