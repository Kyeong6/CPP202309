#include <iostream>
#include <string>
using namespace std;

class User
{
private:
	int hp; // ������� HP ���� ǥ���ϴ� ����

public:
	User() : hp(20) {} // �����ڸ� ���� hp�� 20���� �ʱ�ȭ
	void DecreaseHP(int dec_hp); // HP ���� �Լ�
	void IncreaseHP(int inc_hp); // HP ���� �Լ�
	int GetHP(); // ���� HP ǥ�� �Լ�
};