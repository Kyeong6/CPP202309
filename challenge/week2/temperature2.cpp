// iostream ���̺귯���� �ִ� ����� ���� ���� ��� ���
#include <iostream>

// std��� Ŭ������ ����ϴ� �� ���
using namespace std;

int main() {

	// ȭ�� �� ���� ���� �ڷ��� ����(�µ��� ������ �ƴ� �Ǽ��� ���� �� �����Ƿ� double��)
	double hwasi;
	double subsi;

	// ���� -> ȭ���µ� ��ȯ�̹Ƿ� ���� �µ��� ����� ���
	cout << "�����µ�: ";
	cin >> subsi;
	
	// ������ �̿��� �Է¹��� �����µ� ������� ȭ���µ� ���ϱ�
	hwasi = (subsi * 1.8) + 32;

	// ȭ���µ� ���
	cout << "ȭ���µ�= " << hwasi << endl;

	return 0;
}