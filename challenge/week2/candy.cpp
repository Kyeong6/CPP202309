#include <iostream>

using namespace std;

int main() {

	// 변수 자료형 정의
	int money;
	int price;

	// 입출력 정의
	cout << "현재 가지고 있는 돈: ";
	cin >> money;
	cout << "캔디의 가격: ";
	cin >> price;

	// 최대한 살 수있느 사탕 수 정의
	int n_candies = money / price;
	cout << "최대로 살 수 있는 캔디의 개수= " << n_candies << endl;

	// 사탕을 구매하고 남은 돈
	int change = money % price;
	cout << "캔디 구입 후 남은 돈= " << change << endl;
	return 0;

}