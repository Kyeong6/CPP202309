#include <iostream>

using namespace std;

int main() {

	// ���� �ڷ��� ����
	int money;
	int price;

	// ����� ����
	cout << "���� ������ �ִ� ��: ";
	cin >> money;
	cout << "ĵ���� ����: ";
	cin >> price;

	// �ִ��� �� ���ִ� ���� �� ����
	int n_candies = money / price;
	cout << "�ִ�� �� �� �ִ� ĵ���� ����= " << n_candies << endl;

	// ������ �����ϰ� ���� ��
	int change = money % price;
	cout << "ĵ�� ���� �� ���� ��= " << change << endl;
	return 0;

}