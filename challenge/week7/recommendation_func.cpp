#include <iostream>
using namespace std;

// ����� �� �տ��� �����ϱ� 
const int NUM_USERS = 3;
const int NUM_ITEMS = 3;
// �Լ� ���� ����
int preferences[NUM_USERS][NUM_ITEMS]; 

void initializePreferences(int preferences[NUM_USERS][NUM_ITEMS]) {
	for (int i = 0; i < NUM_USERS; ++i) {
		// ����� NUM_USERS�� 3�̹Ƿ� 3���� �Է¿� ���� �Է� �ޱ�
		cout << "�����" << (i + 1) << "�� ��ȣ���� �Է��ϼ��� (";
		cout << NUM_ITEMS << "���� �׸� ����): ";
		for (int j = 0; j < NUM_ITEMS; ++j) {
			cin >> preferences[i][j];
		}
	}
}

void findRecommendedItems(const int preferences[NUM_USERS][NUM_ITEMS]) {
	for (int i = 0; i < NUM_USERS; ++i) {
		int maxPreferenceIndex = 0; // ����ڰ� ���� ��ȣ�ϴ� �׸��� �ε��� �����ϴ� ����
		for (int j = 1; j < NUM_ITEMS; ++j) {
			// �� �׸��� ��ȣ���� ���ؼ� ���� ��ȣ���� ���� �׸��� �ε����� maxPreferenceIndex�� ���� 
			if (preferences[i][j] > preferences[i][maxPreferenceIndex]) {
				// ���� ��ȸ�� �׸� �߿��� ���� ��ȣ���� ���� �׸��� �ε��� ����
				maxPreferenceIndex = j;
			}
		}
		// ����ڿ��� ��õ�ϴ� �׸� ���
		cout << "�����" << (i + 1) << "���� ��õ�ϴ� �׸�: ";
		cout << (maxPreferenceIndex + 1) << std::endl;
	}
}

int main() {
	// ��ȣ���� �ʱ�ȭ�ϰ� ����ڿ��� ��õ�� �׸� ã��
	// �Լ� ȣ��
	initializePreferences(preferences);
	findRecommendedItems(preferences);

	return 0;
}
