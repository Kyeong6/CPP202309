#include <iostream>
using namespace std;

int main() {
	int a, b, c, smallest;

	cout << "3���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c; // ������ ���� a,b,c,�� �Է� ����

	if (a < b && a < c) // a�� b���� �۰�(and), a�� c���� ������ �Ʒ� ���� ����
		smallest = a;
	else if (b < a && b < c) // b�� a���� �۰�(and), b�� c���� ������ �Ʒ� ���� ����
		smallest = b;
	else // ���� �� ���� ��츦 ������ ��� ���� �Ʒ� ���� ����
		smallest = c;

	cout << "���� ���� ������" << smallest << endl; // ���� ���ǽĿ��� ���� ���� smallest ���� ���
	return 0;
}