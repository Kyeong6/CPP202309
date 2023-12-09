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
    virtual void doAttack() {cout << "공격합니다" << endl;} // 공격 함수
	virtual string GetName() { return "User"; }
};

// User 클래스를 상속받는 Magician 클래스 설정  
class Magician : public User
{
public:
	Magician() : User() {}
	string GetName() override { return "MAG"; } // 보드판에 유저명 출력(MAG)
	void doAttack() override { cout << "마법 사용" << endl; } // 공격 함수(마법 사용) 재정의 후 출력
};

// User 클래스를 상속받는 Warrior 클래스 설정
class Warrior : public User
{
public:
	Warrior() : User() {}
	string GetName() override { return "WAR"; } // 보드판에 유저명 출력(WAR)
	void doAttack() override { cout << "베기 사용" << endl; } // 공격 함수(베기 사용) 재정의 후 출력
};