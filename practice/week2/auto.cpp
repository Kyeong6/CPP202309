#include <iostream>

using namespace std;

// auto Ű����� �ڵ� Ÿ�� �߷� -> ����, ǥ������ ������ ������ �����Ϸ��� �ڵ����� �߷�
auto add(int x, int y)
{
	return x + y;
}

int main()
{
	// add(5, 6)�� ������ ������ ��ó�� x=5, y=6�� �Ǿ� 11�� ���� sum�� ����
	auto sum = add(5, 6);
	cout << sum;
	return 0;
}