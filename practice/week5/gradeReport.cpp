#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int STUDENT = 5; // 배열에서 사용할 정수를 상수로 설정
	const int SUBJECT = 3; // 배열에서 사용할 정수를 상수로 설정
	int scores[STUDENT][SUBJECT]; // scores는 2차원 배열로 설정
	string studentNames[STUDENT] // 학생들의 이름을 STUDENT(행)에 넣기
		= { "영수", "영희", "철수", "미미", "쥬쥬" };
	string subjectNames[SUBJECT] // 학생들이 수강한 과목(열) SUBJECT에 넣기
		= { "수학", "영어", "CPP"};

	// 반복문을 이용해서 학생 개인마다의 과목들의 성적 입력받기
	// 2중 반복문을 이용해서 학생 한 명의 과목 3개의 성적 입력 받기
	for (int i = 0; i < STUDENT; i++) {
		cout << studentNames[i] 
			<< "의 성적을 하나씩 입력하세요." << endl;
		for (int j = 0; j < SUBJECT; j++) {
			cout << subjectNames[j] << ":";
			cin >> scores[i][j];
		}
	}
	
	// 위에서 입력받은 학생들의 성적의 평균 점수를 구하기 위해 
	// average 변수를 이용해서 구함
	for (int i = 0; i < STUDENT; i++) {
		cout << studentNames[i] << "의 평균 점수는 ";
		double sum = 0;
		double average = 0;
		for (int j = 0; j < SUBJECT; j++) {
			sum += scores[i][j];
		}
		average = sum / SUBJECT;
		cout << average << "입니다" << endl;
	}
	return 0;
}