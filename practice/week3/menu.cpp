#include <iostream>
using namespace std;

int main() {
	int choice; // ������ ���� choice ����

	// ������� ���� ��� �� ���ϴ� ��ɿ� �´� ���� �Է��ϸ� choice ������ �־���
	cout << "1. ���� ����" << endl; 
	cout << "2. ���� ���� �ݱ�" << endl;
	cout << "3. ����" << endl;
	cin >> choice;

	// choice�� ������ �����̹Ƿ� switch�� ǥ���Ŀ� �� �� ����
	// ��ɿ� �ش��ϴ� ������ �Է��� �� �Ʒ� ��ȣ�� �´� ������ ������ �� ����
	// �߿��� �� �ش��ϴ� ������ ������ �� break�� ����Ͽ� ���ϴ� ���常 ��� �� ������ ����ǰ� �ϱ�
	switch (choice) {
	case 1:
		cout << "���� ������ �����߽��ϴ�." << endl;
		break;
	case 2:
		cout << "���� �ݱ⸦ �����߽��ϴ�." << endl;
		break;
	case 3:
		cout << "���α׷��� �����մϴ�." << endl;
		break;
	default:
		cout << "�߸��� �����Դϴ�." << endl;
		break;
	}
	
	return 0;
}