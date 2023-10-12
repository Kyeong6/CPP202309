#include <iostream>
using namespace std;

int main() {
	const int numCell = 3;

	// {}를 사용하여 board 배열 모든 칸을 0이나 null로 초기화시킴
	char board[numCell][numCell]{};
	int x, y; // 사용자에게 입력받는 x,y좌표를 저장할 변수

	// 보드판 초기화
	for (x = 0; x < numCell; x++) {
		for (y = 0; y < numCell; y++) {
			// numCell의 크기만큼 칸을 설정
			board[x][y] = ' '; 
		}
	}

	// 게임하는 코드
	int k = 0; // 차례를 체크하기 위한 변수
	char currentUser = 'X'; // 현재 유저의 돌을 저장하기 위한 문자 변수
	while (true) {
		// 1. 누구의 차례인지 출력하는 코드
		// 2명이서 게임을 진행하기 때문에 홀수, 짝수 순번을 표현하기 위해 k % 2로 설정 
		switch (k % 2) {
		case 0:
			cout << k % 2 + 1 << "번 유저(X)의 차례입니다 -> ";
			currentUser = 'X'; 
			break;
		case 1:
			cout << k % 2 + 1 << "번 유저(0)의 차례입니다 -> ";
			currentUser = 'O';
			break;
		}

		// 2. 좌표 입력 받기
		cout << "(x, y) 좌표를 입력하세요: ";
		cin >> x >> y;

		// 3. 입력받은 좌표의 유효성 체크
		// 첫번째 조건은 입력받은 x 또는 y좌표가 설정한 칸에서 벗어난 경우
		if (x >= numCell or y >= numCell) {
			cout << x << "; " << y << ": ";
			cout << "x와 y 둘 중 하나가 칸을 벗어납니다." << endl;
			continue;
		}

		// 아래 조건은 빈 공간이 아니라는 의미로 돌이 있다면 아래 문장 출력 
		if (board[x][y] != ' ') {
			cout << x << ", " << y << ": 이미 돌이 차있습니다." << endl;
			continue;
		}

		// 4. 입력받은 좌표에 현재 유저의 돌 놓기
		board[x][y] = currentUser;

		// 5. 현재 보드 판 출력
		for (int i = 0; i < numCell; i++) {
			// 가로 구분선 출력
			cout << "---|---|---" << endl;
			for (int j = 0; j < numCell; j++) {
				cout << board[i][j];
				// 열 사이의 구분 출력
				if (j == numCell - 1) {
					break;
				}
				cout << "  |";
			}
			cout << endl;
		}
		// 행의 끝에 가로 구분선 출력
		cout << "---|---|---" << endl;
		// 게임 턴의 수를 증가시켜 다음 플레이어 차례로 이동
		k++;

		// 6. 모든 칸이 찼으면 종료 및 체크
		bool draw = true; // 무승부일 경우의 불리안변수를 draw로 설정
		// 모든 칸을 확인했을 때 빈 칸이 존재하면 종료하지 않음
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') {
					draw = false;
				}
			}
		}
		// draw가 true라면 모든 칸이 다찼다는 의미으로 무승부이자 게임이 종료된다
		if (draw == true) {
			cout << "모든 칸이 다 찼습니다. 종료합니다" << endl;
			break;
		}

		// 7. 빙고시 승자 출력 (가로,세로, 대각선)
		bool isWin = false; // 게임 종료를 위해 불리안 변수 설정
		char winner = ' '; // 승자를 확인하기 위한 변수
		// 승리할 경우(가로 및 세로) 확인
		for (int i = 0; i < numCell; i++) {
			// 가로로 승리할 경우
			if (board[i][0] == currentUser and board[i][1] == currentUser and board[i][2]) {
				winner = currentUser;
				cout << "가로에 모두 돌이 놓였습니다!: ";
				isWin = true;
			}
			// 세로로 승리할경우
			if (board[0][i] == currentUser and board[1][i] == currentUser and board[2][i] == currentUser) {
				winner = currentUser;
				cout << "세로에 모두 돌이 놓였습니다!: ";
				isWin = true;
			}
		}
		// 대각선 경우로 승리할 경우 확인
		// 오른쪽으로 하강하는 대각선 경우
		if (board[0][0] == currentUser and board[1][1] == currentUser and board[2][2] == currentUser) {
			winner = currentUser;
			cout << "오른쪽 위에서 왼쪽 아래 대각선으로 모두 돌이 놓였습니다!: "; 
			isWin = true;
		}
		// 왼쪽으로 하강하는 대각선 경우
		if (board[0][2] == currentUser and board[1][1] == currentUser and board[2][0] == currentUser) {
			winner = currentUser;
			cout << "왼쪽 위에서 오른쪽 아래 대각선으로 모두 돌이 놓였습니다!: ";
			isWin = true;
		}

		// 위에서 설정한 종료에 관한 불리안 변수를 사용하여 승자 표시와 게임 종료
		if (isWin == true) {
			// 승자를 출력할 때 k % 2의 값이 0이면 2번 유저로, 아니면 1번 유저로 출력
			cout << (k % 2 == 0 ? 2 : 1) << "번 유저(" << currentUser << ")의 승리입니다!" << endl;
			cout << "종료합니다" << endl;
			break;
		}
	}
	return 0;
}