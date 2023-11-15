#include "user.h"

void User::DecreaseHP(int dec_hp)
{
	hp -= dec_hp; // HP 감소
}

void User::IncreaseHP(int inc_hp)
{
	hp += inc_hp; // HP 증가
}

int User::GetHP()
{
	return hp; // HP 표시
}
