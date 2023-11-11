#include <iostream>
#include <string>
using namespace std;

class User
{
public:
	int hp; // 사용자의 HP 상태 표시하는 변수

public:
	void DecreaseHP(int dec_hp); // HP 감소 함수
	int GetHP(); // 현재 HP 표시 함수
};