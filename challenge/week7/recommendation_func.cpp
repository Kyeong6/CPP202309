#include <iostream>
using namespace std;

// 상수를 맨 앞에서 선언하기 
const int NUM_USERS = 3;
const int NUM_ITEMS = 3;
// 함수 원형 선언
int preferences[NUM_USERS][NUM_ITEMS]; 

void initializePreferences(int preferences[NUM_USERS][NUM_ITEMS]) {
	for (int i = 0; i < NUM_USERS; ++i) {
		// 상수인 NUM_USERS가 3이므로 3개의 입력에 대해 입력 받기
		cout << "사용자" << (i + 1) << "의 선호도를 입력하세요 (";
		cout << NUM_ITEMS << "개의 항목에 대해): ";
		for (int j = 0; j < NUM_ITEMS; ++j) {
			cin >> preferences[i][j];
		}
	}
}

void findRecommendedItems(const int preferences[NUM_USERS][NUM_ITEMS]) {
	for (int i = 0; i < NUM_USERS; ++i) {
		int maxPreferenceIndex = 0; // 사용자가 가장 선호하는 항목의 인덱스 저장하는 변수
		for (int j = 1; j < NUM_ITEMS; ++j) {
			// 각 항목의 선호도를 비교해서 가장 선호도가 높은 항목의 인덱스를 maxPreferenceIndex에 저장 
			if (preferences[i][j] > preferences[i][maxPreferenceIndex]) {
				// 현재 순회한 항목 중에서 가장 선호도가 높은 항목의 인덱스 저장
				maxPreferenceIndex = j;
			}
		}
		// 사용자에게 추천하는 항목 출력
		cout << "사용자" << (i + 1) << "에게 추천하는 항목: ";
		cout << (maxPreferenceIndex + 1) << std::endl;
	}
}

int main() {
	// 선호도를 초기화하고 사용자에게 추천할 항목 찾기
	// 함수 호출
	initializePreferences(preferences);
	findRecommendedItems(preferences);

	return 0;
}
