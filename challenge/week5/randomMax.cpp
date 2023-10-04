#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	const int numCell = 10; // 배열에 넣기 위한 numCell 상수로 설정
	int numList[numCell][numCell]; // 2차원배열(행열)칸 설정
	
	// 2차원 배열에 난수 저장하는 코드(이중 for문)
	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			int elem = rand() % 1000; // 난수를 설정하기
			numList[i][j] = elem; 
			cout << i << ", " << j << " : " << elem << endl;
		}
	}

	cout << endl;
	//처음에 배열의 첫 번째 요소인 [0][0]로 초기화
	// 큰 값 저장을 위한 변수 
	int max = numList[0][0]; 
	int maxI = 0; // 큰 값이 있는 i를 저장하기 위한 변수
	int maxJ = 0; // 큰 값이 있는 j를 저장하기 위한 변수

	// 큰 값과 그 위치를 찾는 코드(이중 for문)
	//for (int i = 0; i < numCell; i++) {
	//	for (int j = 0; j < numCell; j++) {
	//		int value = numList[i][j];
	//		if (value > max) {
	//			max = value;
	//			maxI = i;
	//			maxJ = j;
	//		}
	//	}
	//}

	// 범위 기반을 사용하여 2차원 배열 (Bonus 문제)
	for (int i = 0; i < numCell; ++i) { 
		int j = 0; // j를 선언 필요 -> 선언하지 않으면 초기화되지않는 오류 바생
		for (int var : numList[i]) { // 범위기반 루프를 사용하여 var에 넣기
			if (var > max) {
				max = var;
				maxI = i;
				maxJ = j;
			}
			j++; // j++를 사용하여 두 번째 for문에서 i번째 한 번 돌 때 j가 계속 돌기위한 설정 
		}
	}


	
	cout << "가장 큰 값은 " << max << "이고,";
	cout << "i와 j는 각각 " << maxI << ", " << maxJ << "입니다." << endl;
	cout << "검증 결과 : " << numList[maxI][maxJ] << endl;


	return 0;

}