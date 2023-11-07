#include <iostream>
using namespace std;

const int numCell = 3; // �������� ���� ���� ����

// �Է� ���� ��ǥ�� ���� üũ �ڵ��� �Լ�ȭ �� ȣ���� ���� �Ҹ��� ������ �̿��ؼ� Ȱ��ȭ On/Off
bool isValid(char board[][numCell], int numCell, int x, int y) {
	if (x >= numCell or y >= numCell) {
		cout << x << "; " << y << ": ";
		cout << "x�� y �� �� �ϳ��� ĭ�� ����ϴ�." << endl;
		return false;
	}
	if (board[x][y] != ' ') {
		cout << x << ", " << y << ": �̹� ���� ���ֽ��ϴ�." << endl;
		return false;
	}
	return true;
}

bool CheckWin(char board[][numCell], int numCell, char currentUser) {
	// TODO FUNC2: 6.1���� 6.2���� checkWin �Լ� ���� �� ȣ��
	// 6.1. ����/���� �� üũ�ϱ�
	for (int i = 0; i < numCell; i++) {
		if (board[i][0] == currentUser && board[i][1] == currentUser && board[i][2] == currentUser) {
			cout << "���ο� ��� ���� �������ϴ�!!";
			return true;
		}
		if (board[0][i] == currentUser && board[1][i] == currentUser && board[2][i] == currentUser) {
			cout << "���ο� ��� ���� �������ϴ�!!";
			return true;
		}
	}


	// 6.2. �밢���� üũ�ϱ�
	// TODO 1.3: numCell�� ���� �밢�� ���� üũ �ڵ�� Ȯ��
	// HINT: for ��
	// ����->������ : ��/�� ��� numCell ũ�⸸ŭ �¸�
	// ������->���� : [i][numCell-1-i] �ݺ��� ����
	// �Ҹ��� ������ ����ؼ� Ȱ��ȭ On/Off
	bool left_to_right = true;
	bool right_to_left = true;

	for (int i = 0; i < numCell; i++) {
		if (board[i][i] != currentUser) {
			left_to_right = false;
		}
		if (board[i][numCell - 1 - i] != currentUser) {
			right_to_left = false;
		}
	}

	if (left_to_right) {
		cout << "���� ������ ������ �Ʒ� �밢������ ��� ���� �������ϴ�!" << endl;
		return true;
	}
	if (right_to_left) {
		cout << "������ ������ ���� �Ʒ� �밢������ ��� ���� �������ϴ�!" << endl;
		return true;
	}

	return false;
}

int main() {
	// ������ �����ϴ� �� �ʿ��� ���� ����
	int k = 0; // ���� �������� üũ�ϱ� ���� ����
	char currentUser = 'X'; // ���� ������ ���� �����ϱ� ���� ����
	char board[numCell][numCell]{}; // �������� ��Ÿ���� 2���� �迭
	int x, y = 0; // ����ڿ��� xy��ǥ���� �Է¹ޱ� ���� ����

	// ������ �ʱ�ȭ
	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			board[i][j] = ' ';
		}
	}

	// ������ ���� �ݺ�
	while (true) {
		// 1. ���� �������� ���
		// TODO 1.1: 3�ο� �������� ����
		switch (k % 3) {
		case 0:
			currentUser = 'X';
			break;
		case 1:
			currentUser = 'O';
			break;
		case 2:
			currentUser = 'H';
			break;
		}
		cout << k % 3 + 1 << "�� ����(" << currentUser << ")�� �����Դϴ�. -> ";

		// 2. ��ǥ �Է� �ޱ�
		cout << "(x, y) ��ǥ�� �Է��ϼ���: ";
		int x, y;
		cin >> x >> y;

		// 3. �Է¹��� ��ǥ�� ��ȿ�� üũ
		// TODO FUNC 1: isValid �Լ� ���� �� ȣ��
		if (isValid(board, numCell, x, y)) {
			// 4. �Է¹��� ��ǥ�� ���� ������ �� ����
			board[x][y] = currentUser;

			// 5. ���� ���� �� ���
			// TODO 1.2: numCell ���ڿ� ���� ������ ���
			// for���� �̿��ؼ� numCell�� ũ�⿡ ���� �������� ���
			for (int i = 0; i < numCell; i++) {
				// �� ���� ���м�
				for (int j = 0; j < numCell; j++) {
					cout << "---|";
				}
				cout << endl;

				for (int j = 0; j < numCell; j++) {
					cout << " " << board[i][j] << " |";
				}
				cout << endl;
			}

			for (int j = 0; j < numCell; j++) {
				cout << "---|";
			}
			cout << endl;


			// �¸��ڰ� �����Ǿ����� �ش� �÷��̾ ����ϰ� ������ �����Ѵ�.
			if (CheckWin(board, numCell, currentUser)) {
				cout << k % 3 + 1 << "�� ����(" << currentUser << ")�� �¸��Դϴ�!" << endl;
				break;
			}

			// 7. ��� ĭ �� á���� üũ�ϱ�
			int checked = 0;
			for (int i = 0; i < numCell; i++) {
				for (int j = 0; j < numCell; j++) {
					if (board[i][j] == ' ') {
						checked++;
					}
				}
			}
			if (checked == 0) {
				cout << "��� ĭ�� �� á���ϴ�.  �����մϴ�. " << endl;
				break;
			}

			k++;
		}
	}
	return 0;
}