#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	// cout << (화살표 방향 주의)를 입력 받기
	cout << "이름을 입력하세요: ";
	// cin >> 을 통해 출력값을 name에 대입
	cin >> name;
	cout << name << "을 환영합니다." << endl;

	return 0;
}