#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	const int numCell = 10; // �迭�� �ֱ� ���� numCell ����� ����
	int numList[numCell][numCell]; // 2�����迭(�࿭)ĭ ����
	
	// 2���� �迭�� ���� �����ϴ� �ڵ�(���� for��)
	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			int elem = rand() % 1000; // ������ �����ϱ�
			numList[i][j] = elem; 
			cout << i << ", " << j << " : " << elem << endl;
		}
	}

	cout << endl;
	//ó���� �迭�� ù ��° ����� [0][0]�� �ʱ�ȭ
	// ū �� ������ ���� ���� 
	int max = numList[0][0]; 
	int maxI = 0; // ū ���� �ִ� i�� �����ϱ� ���� ����
	int maxJ = 0; // ū ���� �ִ� j�� �����ϱ� ���� ����

	// ū ���� �� ��ġ�� ã�� �ڵ�(���� for��)
	//for (int i = 0; i < numCell; i++) {
	//	for (int j = 0; j < numCell; j++) {
	//		int value = numList[i][j];
	//		if (value > max) {
	//			max = value;
	//			maxI = i;
	//			maxJ = j;
	//		}
	//	}
	//}

	// ���� ����� ����Ͽ� 2���� �迭 (Bonus ����)
	for (int i = 0; i < numCell; ++i) { 
		int j = 0; // j�� ���� �ʿ� -> �������� ������ �ʱ�ȭ�����ʴ� ���� �ٻ�
		for (int var : numList[i]) { // ������� ������ ����Ͽ� var�� �ֱ�
			if (var > max) {
				max = var;
				maxI = i;
				maxJ = j;
			}
			j++; // j++�� ����Ͽ� �� ��° for������ i��° �� �� �� �� j�� ��� �������� ���� 
		}
	}


	
	cout << "���� ū ���� " << max << "�̰�,";
	cout << "i�� j�� ���� " << maxI << ", " << maxJ << "�Դϴ�." << endl;
	cout << "���� ��� : " << numList[maxI][maxJ] << endl;


	return 0;

}