#include <iostream>
#include <string>
using namespace std;

class User
{
public:
	int hp; // ������� HP ���� ǥ���ϴ� ����

public:
	void DecreaseHP(int dec_hp); // HP ���� �Լ�
	int GetHP(); // ���� HP ǥ�� �Լ�
};