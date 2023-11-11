#include <iostream>
#include <string>
#include "user.h"
using namespace std;

User my_user; // User Ŭ���� ��ü ����, ���� ������ �����ؾ��� CheckState()���� ������ �߻����� ����
const int mapX = 5; // ������ ������ ������ ���� ũ�� ����
const int mapY = 5; // ������ ������ ������ ���� ũ�� ����

// ����� ���� �Լ� �ۼ��� ���� �ڵ�
bool checkXY(int user_x, int mapX, int user_y, int mapY);
void displayMap(int map[][mapX], int user_x, int user_y);
bool checkGoal(int map[][mapX], int user_x, int user_y);
void checkState(int map[][mapX], int user_x, int user_y);

// ����  �Լ�
int main() {

    my_user.hp = 20; // ��ü�� �ʱ� HP ����

    // 0�� �� ����, 1�� ������, 2�� ��, 3�� ����, 4�� ������
    int map[mapY][mapX] = {
        {0, 1, 2, 0, 4},
        {1, 0, 0, 2, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 3, 0, 0},
        {3, 0, 0, 0, 2}
    };

    // ������ ��ġ�� ������ ����
    int user_x = 0; // ���� ��ȣ
    int user_y = 0; // ���� ��ȣ

    // ���� ���� 
    while (1) { // ����ڿ��� ��� �Է¹ޱ� ���� ���� ����

        // ������� �Է��� ������ ����
        string user_input = "";

        // ������ HP ǥ�� �� ��ɾ� �Է� �ޱ�
        // ��ü�� ���������Ƿ� ���� HP�� my_user ��ü�� HP ���
        cout << "���� HP: " << my_user.GetHP() << " ��ɾ �Է��ϼ��� (��,��,��,��,����,����): ";
        cin >> user_input;

        if (user_input == "��") {
            // ���� �� ĭ �ö󰡱�
            user_y -= 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY); // checkXY�Լ��� �̿��ؼ� ��ǥ�� ��ȿ�� �Ǻ� -> bool��
            // ���� checkXY�� ��ȯ�� False��� ���̺����� ��ǥ�� ��ȿ���� �ʱ� ������ ���� ��� ���̴�.
            if (inMap == false) {
                cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
                user_y += 1;
            }
            else {
                cout << "���� �� ĭ �ö󰩴ϴ�." << endl;
                displayMap(map, user_x, user_y); // ���Ӱ� ���ǵ� �� ǥ��
            }
        }
        else if (user_input == "��") {
            // TODO: �Ʒ��� �� ĭ ��������
            user_y += 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY); // checkXY�Լ��� �̿��ؼ� ��ǥ�� ��ȿ�� �Ǻ� -> bool��
            // ���� checkXY�� ��ȯ�� False��� ���̺����� ��ǥ�� ��ȿ���� �ʱ� ������ ���� ��� ���̴�.
            if (inMap == false) {
                cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
                user_y -= 1;
            }
            else {
                cout << "�Ʒ��� �� ĭ �������ϴ�." << endl;
                displayMap(map, user_x, user_y); // ���Ӱ� ���ǵ� �� ǥ��
            }
        }
        else if (user_input == "��") {
            // TODO: �������� �̵��ϱ�
            user_x -= 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY); // checkXY�Լ��� �̿��ؼ� ��ǥ�� ��ȿ�� �Ǻ� -> bool��
            // ���� checkXY�� ��ȯ�� False��� ���̺����� ��ǥ�� ��ȿ���� �ʱ� ������ ���� ��� ���̴�.
            if (inMap == false) {
                cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
                user_x += 1;
            }
            else {
                cout << "�������� �̵��մϴ�." << endl;
                displayMap(map, user_x, user_y); // ���Ӱ� ���ǵ� �� ǥ��
            }
        }
        else if (user_input == "��") {
            // TODO: ���������� �̵��ϱ�
            user_x += 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY); // checkXY�Լ��� �̿��ؼ� ��ǥ�� ��ȿ�� �Ǻ� -> bool��
            // ���� checkXY�� ��ȯ�� False��� ���̺����� ��ǥ�� ��ȿ���� �ʱ� ������ ���� ��� ���̴�.
            if (inMap == false) {
                cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
                user_x -= 1;
            }
            else {
                cout << "���������� �̵��մϴ�." << endl;
                displayMap(map, user_x, user_y);// ���Ӱ� ���ǵ� �� ǥ��
            }
        }
        // �����¿찡 �ƴ� ���Ḧ �Է½� ������ ����
        else if (user_input == "����") {
            cout << "�����մϴ�." << endl;
            break;
        }
        // �����¿찡 �ƴ� ������ �Է� �� ���� �����ִ� ���
        else if (user_input == "����") {
            // TODO: ���� �����ֱ� �Լ� ȣ��
            displayMap(map, user_x, user_y);
        }

        // ���� �����¿�� ���� �ܿ� �ٸ� �Է°��� �ۼ��� �߸��� �Է��Դϴ� ���
        else {
            cout << "�߸��� �Է��Դϴ�." << endl;
            continue;
        }

        // ��ü�� �̵��� ������ HP 1 ���� ����, DecreaseHP�� ���ڴ� ����
        my_user.DecreaseHP(1); 

        // ���� ��ü�� HP�� 0�� �ǹ����� ������ �����ϰ� �Ʒ��� ���� ������ ���
        if (my_user.GetHP() <= 0) {
            cout << "HP�� 0 ���ϰ� �Ǿ����ϴ�. �����߽��ϴ�." << endl;
            cout << "������ �����մϴ�." << endl;
            break;
        }

        // �������� �����ߴ��� üũ
        bool finish = checkGoal(map, user_x, user_y);
        if (finish) {
            cout << "�������� �����߽��ϴ�! �����մϴ�!" << endl;
            cout << "������ �����մϴ�." << endl;
            break;
        }
        // checkState �Լ� ȣ���Ͽ� �Ʒ��� �ۼ��� checkState Ȱ��ȭ
        checkState(map, user_x, user_y);
    }

    return 0;
}

// ������ ����� ��ġ ����ϴ� �Լ�
void displayMap(int map[][mapX], int user_x, int user_y) {
    for (int i = 0; i < mapY; i++) {
        for (int j = 0; j < mapX; j++) {
            if (i == user_y && j == user_x) {
                cout << " USER |"; // �� �� 1ĭ ����
            }
            else {
                int posState = map[i][j];
                switch (posState) {
                case 0:
                    cout << "      |"; // 6ĭ ����
                    break;
                case 1:
                    cout << "������|";
                    break;
                case 2:
                    cout << "  ��  |"; // �� �� 2ĭ ����
                    break;
                case 3:
                    cout << " ���� |"; // �� �� 1ĭ ����
                    break;
                case 4:
                    cout << "������|";
                    break;
                }
            }
        }
        cout << endl;
        cout << " -------------------------------- " << endl;
    }
}

// ����/����, ����, ���� ������ �� �׿� ���� �޽����� ����ϴ� �Լ�
void checkState(int map[][mapX], int user_x, int user_y) {
    int positionState = map[user_y][user_x];

    // switch���� ����Ͽ� ��ġ�� ���� �޽��� ��� �� HP ������Ʈ
    switch (positionState) {
    case 1:
        cout << "�������� �ֽ��ϴ�." << endl;
        break;
        // ���� ������ ��� ��ü�� HP 2 ����
    case 2:
        cout << "���� �ֽ��ϴ�. HP�� 2 �پ��ϴ�." << endl;
        my_user.DecreaseHP(2);
        break;
        // ������ ������ ��� ��ü�� HP 2 ����
    case 3:
        cout << "������ �ֽ��ϴ�. HP�� 2 �����մϴ�." << endl;
        my_user.DecreaseHP(-2);
        break;
    default:
        break;
    }
}

// �̵��Ϸ��� ���� ��ȿ�� ��ǥ���� üũ�ϴ� �Լ�
bool checkXY(int user_x, int mapX, int user_y, int mapY) {
    bool checkFlag = false;
    if (user_x >= 0 && user_x < mapX && user_y >= 0 && user_y < mapY) {
        checkFlag = true;
    }
    return checkFlag;
}

// ������ ��ġ�� ���������� üũ�ϴ� �Լ�
bool checkGoal(int map[][mapX], int user_x, int user_y) {
    // ������ �����ϸ�
    if (map[user_y][user_x] == 4) { // �������� 4�� �̸� ����
        return true;
    }
    return false;
}