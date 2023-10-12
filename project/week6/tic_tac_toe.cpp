#include <iostream>
using namespace std;

int main() {
	const int numCell = 3;

	// {}�� ����Ͽ� board �迭 ��� ĭ�� 0�̳� null�� �ʱ�ȭ��Ŵ
	char board[numCell][numCell]{};
	int x, y; // ����ڿ��� �Է¹޴� x,y��ǥ�� ������ ����

	// ������ �ʱ�ȭ
	for (x = 0; x < numCell; x++) {
		for (y = 0; y < numCell; y++) {
			// numCell�� ũ�⸸ŭ ĭ�� ����
			board[x][y] = ' '; 
		}
	}

	// �����ϴ� �ڵ�
	int k = 0; // ���ʸ� üũ�ϱ� ���� ����
	char currentUser = 'X'; // ���� ������ ���� �����ϱ� ���� ���� ����
	while (true) {
		// 1. ������ �������� ����ϴ� �ڵ�
		// 2���̼� ������ �����ϱ� ������ Ȧ��, ¦�� ������ ǥ���ϱ� ���� k % 2�� ���� 
		switch (k % 2) {
		case 0:
			cout << k % 2 + 1 << "�� ����(X)�� �����Դϴ� -> ";
			currentUser = 'X'; 
			break;
		case 1:
			cout << k % 2 + 1 << "�� ����(0)�� �����Դϴ� -> ";
			currentUser = 'O';
			break;
		}

		// 2. ��ǥ �Է� �ޱ�
		cout << "(x, y) ��ǥ�� �Է��ϼ���: ";
		cin >> x >> y;

		// 3. �Է¹��� ��ǥ�� ��ȿ�� üũ
		// ù��° ������ �Է¹��� x �Ǵ� y��ǥ�� ������ ĭ���� ��� ���
		if (x >= numCell or y >= numCell) {
			cout << x << "; " << y << ": ";
			cout << "x�� y �� �� �ϳ��� ĭ�� ����ϴ�." << endl;
			continue;
		}

		// �Ʒ� ������ �� ������ �ƴ϶�� �ǹ̷� ���� �ִٸ� �Ʒ� ���� ��� 
		if (board[x][y] != ' ') {
			cout << x << ", " << y << ": �̹� ���� ���ֽ��ϴ�." << endl;
			continue;
		}

		// 4. �Է¹��� ��ǥ�� ���� ������ �� ����
		board[x][y] = currentUser;

		// 5. ���� ���� �� ���
		for (int i = 0; i < numCell; i++) {
			// ���� ���м� ���
			cout << "---|---|---" << endl;
			for (int j = 0; j < numCell; j++) {
				cout << board[i][j];
				// �� ������ ���� ���
				if (j == numCell - 1) {
					break;
				}
				cout << "  |";
			}
			cout << endl;
		}
		// ���� ���� ���� ���м� ���
		cout << "---|---|---" << endl;
		// ���� ���� ���� �������� ���� �÷��̾� ���ʷ� �̵�
		k++;

		// 6. ��� ĭ�� á���� ���� �� üũ
		bool draw = true; // ���º��� ����� �Ҹ��Ⱥ����� draw�� ����
		// ��� ĭ�� Ȯ������ �� �� ĭ�� �����ϸ� �������� ����
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') {
					draw = false;
				}
			}
		}
		// draw�� true��� ��� ĭ�� ��á�ٴ� �ǹ����� ���º����� ������ ����ȴ�
		if (draw == true) {
			cout << "��� ĭ�� �� á���ϴ�. �����մϴ�" << endl;
			break;
		}

		// 7. ����� ���� ��� (����,����, �밢��)
		bool isWin = false; // ���� ���Ḧ ���� �Ҹ��� ���� ����
		char winner = ' '; // ���ڸ� Ȯ���ϱ� ���� ����
		// �¸��� ���(���� �� ����) Ȯ��
		for (int i = 0; i < numCell; i++) {
			// ���η� �¸��� ���
			if (board[i][0] == currentUser and board[i][1] == currentUser and board[i][2]) {
				winner = currentUser;
				cout << "���ο� ��� ���� �������ϴ�!: ";
				isWin = true;
			}
			// ���η� �¸��Ұ��
			if (board[0][i] == currentUser and board[1][i] == currentUser and board[2][i] == currentUser) {
				winner = currentUser;
				cout << "���ο� ��� ���� �������ϴ�!: ";
				isWin = true;
			}
		}
		// �밢�� ���� �¸��� ��� Ȯ��
		// ���������� �ϰ��ϴ� �밢�� ���
		if (board[0][0] == currentUser and board[1][1] == currentUser and board[2][2] == currentUser) {
			winner = currentUser;
			cout << "������ ������ ���� �Ʒ� �밢������ ��� ���� �������ϴ�!: "; 
			isWin = true;
		}
		// �������� �ϰ��ϴ� �밢�� ���
		if (board[0][2] == currentUser and board[1][1] == currentUser and board[2][0] == currentUser) {
			winner = currentUser;
			cout << "���� ������ ������ �Ʒ� �밢������ ��� ���� �������ϴ�!: ";
			isWin = true;
		}

		// ������ ������ ���ῡ ���� �Ҹ��� ������ ����Ͽ� ���� ǥ�ÿ� ���� ����
		if (isWin == true) {
			// ���ڸ� ����� �� k % 2�� ���� 0�̸� 2�� ������, �ƴϸ� 1�� ������ ���
			cout << (k % 2 == 0 ? 2 : 1) << "�� ����(" << currentUser << ")�� �¸��Դϴ�!" << endl;
			cout << "�����մϴ�" << endl;
			break;
		}
	}
	return 0;
}