#include <iostream>
using namespace std;

int main() {

	int number; // ������ ���� number ����

	cout << "���ڸ� �Է��Ͻÿ�:"; // ���ڸ� �Է¹ް� ���� number�� �ֱ�
	cin >> number;

	if (number == 0) // number�� 0�̶�� zero ���
		cout << "zero\n";
	else if (number == 1) // number�� 1�̶�� one ���
		cout << "one\n";
	else // ���� �� ���� ��찡 �ƴ϶�� many ���
		cout << "many\n";
	return 0;
}