#include <iostream>

using namespace std;

//배열의 합(함수를 이용)
int addNum(int num[5]) {
	int sum = num[0] + num[1] + num[2] + num[3] + num[4];

	return sum;
}

//배열의 평균
int avg(int num[5]) {
	int Avg = (num[0] + num[1] + num[2] + num[3] + num[4]) / 5;

	return Avg;
}


int main() {
	//5개의 숫자를 입력받는 배열
	int num[5] = {};

	cout << "5개의 숫자를 입력하세요" << endl;
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];

	//출력
	cout << "배열의 합 : " << addNum(num) << endl;
	cout << "배열의 평균 : " << avg(num) << endl;
	return 0;
}