#include <iostream>
using namespace std;

int main() {

	// ȭ�� �� ���� ���� �ڷ��� ����
	double hwasi;
	double subsi;

	// ȭ�� -> �����µ� ��ȯ�̹Ƿ� ȭ�� �µ��� ��������� ����
	cout << "ȭ���µ�: ";
	cin >> hwasi;
	
	// ������ �̿��� �Է¹��� ȭ���µ� ������� �����µ� ���ϱ�
	subsi = (5.0 / 9.0) * (hwasi - 32);

	// �����µ� ���
	cout << "�����µ�= " << subsi << endl;

	return 0;
}