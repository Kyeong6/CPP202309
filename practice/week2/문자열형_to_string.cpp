#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "���";
	string s2;
	// ���� s1�� s2�� ���ڿ��ε� ���� 10�� ������ �����̹Ƿ� ���� ������ �޶� + �����ڰ� ������� ����
	// �׷��Ƿ� to_string(10)�� ���ؼ� ������ 10�� �ƴ� ������ 10���� �ٲ���� ��
	//s2 = s1 + " " + 10 + "��";
	s2 = s1 + " " + to_string(10) + "��";
	cout << s2 << endl;

	return 0;
}