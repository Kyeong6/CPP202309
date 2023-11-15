#include <iostream>
#include <string>
using namespace std;

class User
{
private:
	int hp; // 사용자의 HP 상태 표시하는 변수

public:
	User() : hp(20) {} // 생성자를 통해 hp를 20으로 초기화
	void DecreaseHP(int dec_hp); // HP 감소 함수
	void IncreaseHP(int inc_hp); // HP 증가 함수
	int GetHP(); // 현재 HP 표시 함수
};