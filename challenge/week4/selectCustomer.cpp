#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int maxPeople = 3; // �� ���� �� ���� ���� �� �ʱ�ȭ
	// cout << "�� ���� ���� �Է��϶�: ";
	// cin >> maxPeople;
	string names[maxPeople];
	int ages[maxPeople];

	// for���� �̿��� ����Ʈ ��ҿ� ���� �̸��� ���� �߰�
	// i+1�� �����ؼ� �Է¹��� �� 1,2,3���� ����
	for (int i = 0; i < maxPeople; i++) {
		cout << "���" << i+1 << "�� �̸� : ";
		cin >> names[i];
		cout << "���" << i+1 << "�� ���� : ";
		cin >> ages[i];
	}

	// ������ �Ӱ谪 ����
	int ageThreshold;
	cout << "Ư�� ���� �̻��� ����� ã������ ���̸� �Է��ϼ���: ";
	cin >> ageThreshold;

	cout << ageThreshold << "�� �̻��� ����:\n";
	
	int findPeople = 0; // findPeople�̶�� ������ �����ؼ� ���� ���ǿ� �´°� ������ +1 �߰�
	for (int i = 0; i < maxPeople; i++) {
		// ���̰� �Ӱ谪���� ũ�ٸ� ����
		if (ages[i] >= ageThreshold) { 
			cout << names[i] << "(" << ages[i] << "��)\n";
			findPeople++; // �� ���������༭ ���� ���߱�
		}
	}
	// Ư�� ���� �̻��� ����� ���� ���
	if (findPeople == 0) {
		cout << ageThreshold << "�̻��� ���̸� ���� ���� �����ϴ�";
	}
	return 0;

	
}