#include "user.h"

void User::DecreaseHP(int dec_hp)
{
	hp -= dec_hp; // HP ����
}

int User::GetHP()
{
	return hp; // HP ǥ��
}
