#include <iostream>
using namespace std;

int main() {
	int userInput; // ����� �Է� ���� ����

	cout << "������ 10�� �Է��ϼ��� (0�� �Է��ϸ� ����):";
	for (int i = 0; i < 10; i++) // 10�� �Է��� ���� �ݺ��� ����
	{
		cin >> userInput;
		if (userInput == 0) // ���� 0�� �Է��ϸ� ����������
		{
			break;
		}

		cout << "�Է°�: " << userInput << "Ƚ�� :" << i << endl; // 0 �̿��� �Է��� �� ��� 10�� �����ϸ鼭 ���� ���
	}

	cout << "����Ǿ����ϴ�";

	return 0;
		
		

}
