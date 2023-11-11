#include "user.h"

void User::DecreaseHP(int dec_hp)
{
	hp -= dec_hp; // HP 감소
}

int User::GetHP()
{
	return hp; // HP 표시
}
