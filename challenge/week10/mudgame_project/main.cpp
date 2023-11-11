#include <iostream>
#include <string>
#include "user.h"
using namespace std;

User my_user; // User 클래스 객체 생성, 전역 변수로 설정해야지 CheckState()에서 오류가 발생하지 않음
const int mapX = 5; // 게임을 진행할 보드판 가로 크기 설정
const int mapY = 5; // 게임을 진행할 보드판 세로 크기 설정

// 사용자 정의 함수 작성을 위한 코드
bool checkXY(int user_x, int mapX, int user_y, int mapY);
void displayMap(int map[][mapX], int user_x, int user_y);
bool checkGoal(int map[][mapX], int user_x, int user_y);
void checkState(int map[][mapX], int user_x, int user_y);

// 메인  함수
int main() {

    my_user.hp = 20; // 객체의 초기 HP 설정

    // 0은 빈 공간, 1은 아이템, 2는 적, 3은 포션, 4는 목적지
    int map[mapY][mapX] = {
        {0, 1, 2, 0, 4},
        {1, 0, 0, 2, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 3, 0, 0},
        {3, 0, 0, 0, 2}
    };

    // 유저의 위치를 저장할 변수
    int user_x = 0; // 가로 번호
    int user_y = 0; // 세로 번호

    // 게임 시작 
    while (1) { // 사용자에게 계속 입력받기 위해 무한 루프

        // 사용자의 입력을 저장할 변수
        string user_input = "";

        // 유저의 HP 표시 및 명령어 입력 받기
        // 객체를 생성했으므로 현재 HP는 my_user 객체의 HP 출력
        cout << "현재 HP: " << my_user.GetHP() << " 명령어를 입력하세요 (상,하,좌,우,지도,종료): ";
        cin >> user_input;

        if (user_input == "상") {
            // 위로 한 칸 올라가기
            user_y -= 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY); // checkXY함수를 이용해서 좌표의 유효성 판별 -> bool형
            // 만약 checkXY의 반환이 False라면 테이블에서의 좌표가 유효하지 않기 때문에 맵을 벗어난 것이다.
            if (inMap == false) {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_y += 1;
            }
            else {
                cout << "위로 한 칸 올라갑니다." << endl;
                displayMap(map, user_x, user_y); // 새롭게 정의된 맵 표기
            }
        }
        else if (user_input == "하") {
            // TODO: 아래로 한 칸 내려가기
            user_y += 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY); // checkXY함수를 이용해서 좌표의 유효성 판별 -> bool형
            // 만약 checkXY의 반환이 False라면 테이블에서의 좌표가 유효하지 않기 때문에 맵을 벗어난 것이다.
            if (inMap == false) {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_y -= 1;
            }
            else {
                cout << "아래로 한 칸 내려갑니다." << endl;
                displayMap(map, user_x, user_y); // 새롭게 정의된 맵 표기
            }
        }
        else if (user_input == "좌") {
            // TODO: 왼쪽으로 이동하기
            user_x -= 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY); // checkXY함수를 이용해서 좌표의 유효성 판별 -> bool형
            // 만약 checkXY의 반환이 False라면 테이블에서의 좌표가 유효하지 않기 때문에 맵을 벗어난 것이다.
            if (inMap == false) {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_x += 1;
            }
            else {
                cout << "왼쪽으로 이동합니다." << endl;
                displayMap(map, user_x, user_y); // 새롭게 정의된 맵 표기
            }
        }
        else if (user_input == "우") {
            // TODO: 오른쪽으로 이동하기
            user_x += 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY); // checkXY함수를 이용해서 좌표의 유효성 판별 -> bool형
            // 만약 checkXY의 반환이 False라면 테이블에서의 좌표가 유효하지 않기 때문에 맵을 벗어난 것이다.
            if (inMap == false) {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_x -= 1;
            }
            else {
                cout << "오른쪽으로 이동합니다." << endl;
                displayMap(map, user_x, user_y);// 새롭게 정의된 맵 표기
            }
        }
        // 상하좌우가 아닌 종료를 입력시 게임이 종료
        else if (user_input == "종료") {
            cout << "종료합니다." << endl;
            break;
        }
        // 상하좌우가 아닌 지도를 입력 시 지도 보여주는 기능
        else if (user_input == "지도") {
            // TODO: 지도 보여주기 함수 호출
            displayMap(map, user_x, user_y);
        }

        // 위의 상하좌우와 종료 외에 다른 입력값을 작성시 잘못된 입력입니다 출력
        else {
            cout << "잘못된 입력입니다." << endl;
            continue;
        }

        // 객체가 이동할 때마다 HP 1 감소 설정, DecreaseHP의 인자는 정수
        my_user.DecreaseHP(1); 

        // 만약 객체의 HP가 0이 되버리면 게임을 종료하고 아래와 같은 문장을 출력
        if (my_user.GetHP() <= 0) {
            cout << "HP가 0 이하가 되었습니다. 실패했습니다." << endl;
            cout << "게임을 종료합니다." << endl;
            break;
        }

        // 목적지에 도달했는지 체크
        bool finish = checkGoal(map, user_x, user_y);
        if (finish) {
            cout << "목적지에 도착했습니다! 축하합니다!" << endl;
            cout << "게임을 종료합니다." << endl;
            break;
        }
        // checkState 함수 호출하여 아래에 작성한 checkState 활성화
        checkState(map, user_x, user_y);
    }

    return 0;
}

// 지도와 사용자 위치 출력하는 함수
void displayMap(int map[][mapX], int user_x, int user_y) {
    for (int i = 0; i < mapY; i++) {
        for (int j = 0; j < mapX; j++) {
            if (i == user_y && j == user_x) {
                cout << " USER |"; // 양 옆 1칸 공백
            }
            else {
                int posState = map[i][j];
                switch (posState) {
                case 0:
                    cout << "      |"; // 6칸 공백
                    break;
                case 1:
                    cout << "아이템|";
                    break;
                case 2:
                    cout << "  적  |"; // 양 옆 2칸 공백
                    break;
                case 3:
                    cout << " 포션 |"; // 양 옆 1칸 공백
                    break;
                case 4:
                    cout << "목적지|";
                    break;
                }
            }
        }
        cout << endl;
        cout << " -------------------------------- " << endl;
    }
}

// 무기/갑옷, 포션, 적을 만났을 때 그에 대한 메시지를 출력하는 함수
void checkState(int map[][mapX], int user_x, int user_y) {
    int positionState = map[user_y][user_x];

    // switch문을 사용하여 위치에 따른 메시지 출력 및 HP 업데이트
    switch (positionState) {
    case 1:
        cout << "아이템이 있습니다." << endl;
        break;
        // 적을 만났을 경우 객체의 HP 2 감소
    case 2:
        cout << "적이 있습니다. HP가 2 줄어듭니다." << endl;
        my_user.DecreaseHP(2);
        break;
        // 포션을 만났을 경우 객체의 HP 2 증가
    case 3:
        cout << "포션이 있습니다. HP가 2 증가합니다." << endl;
        my_user.DecreaseHP(-2);
        break;
    default:
        break;
    }
}

// 이동하려는 곳이 유효한 좌표인지 체크하는 함수
bool checkXY(int user_x, int mapX, int user_y, int mapY) {
    bool checkFlag = false;
    if (user_x >= 0 && user_x < mapX && user_y >= 0 && user_y < mapY) {
        checkFlag = true;
    }
    return checkFlag;
}

// 유저의 위치가 목적지인지 체크하는 함수
bool checkGoal(int map[][mapX], int user_x, int user_y) {
    // 목적지 도착하면
    if (map[user_y][user_x] == 4) { // 목적지는 4로 미리 설정
        return true;
    }
    return false;
}