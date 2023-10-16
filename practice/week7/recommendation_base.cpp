#include <iostream>
using namespace std;

int main() {
	const int NUM_USERS = 3;
	const int NUM_ITEMS = 3;
	int userPreferences[NUM_USERS][NUM_ITEMS];

	// ����ڿ� �׸� ���� ��ȣ���� �Է� �޾� 2���� �迭 �ʱ�ȭ
	for (int i = 0; i < NUM_USERS; ++i) {
		// ����� NUM_USERS�� 3�̹Ƿ� 3���� �Է¿� ���� �Է� �ޱ�
		cout << "�����" << (i+1) << "�� ��ȣ���� �Է��ϼ��� (";
		cout << NUM_ITEMS << "���� �׸� ����): ";
		for (int j = 0; j < NUM_ITEMS; ++j) {
			cin >> userPreferences[i][j];
		}
	}

	// �� ����ڿ� ���� ��õ �׸� ã��
	for (int i = 0; i < NUM_USERS; ++i) {
		int maxPreferenceIndex = 0; // ����ڰ� ���� ��ȣ�ϴ� �׸��� �ε��� �����ϴ� ����
		for (int j = 1; j < NUM_ITEMS; ++j) {
			// �� �׸��� ��ȣ���� ���ؼ� ���� ��ȣ���� ���� �׸��� �ε����� maxPreferenceIndex�� ���� 
			if (userPreferences[i][j] > userPreferences[i][maxPreferenceIndex]) {
				// ���� ��ȸ�� �׸� �߿��� ���� ��ȣ���� ���� �׸��� �ε��� ����
				maxPreferenceIndex = j;
			}
		}

		// ����ڿ��� ��õ�ϴ� �׸� ���
		cout << "�����" << (i + 1) << "���� ��õ�ϴ� �׸�: ";
		cout << (maxPreferenceIndex + 1) << std::endl;
	}
	
	return 0;
}