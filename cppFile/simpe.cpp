#include <iostream>

using namespace std;

//�迭�� ��(�Լ��� �̿�)
int addNum(int num[5]) {
	int sum = num[0] + num[1] + num[2] + num[3] + num[4];

	return sum;
}

//�迭�� ���
int avg(int num[5]) {
	int Avg = (num[0] + num[1] + num[2] + num[3] + num[4]) / 5;

	return Avg;
}


int main() {
	//5���� ���ڸ� �Է¹޴� �迭
	int num[5] = {};

	cout << "5���� ���ڸ� �Է��ϼ���" << endl;
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];

	//���
	cout << "�迭�� �� : " << addNum(num) << endl;
	cout << "�迭�� ��� : " << avg(num) << endl;
	return 0;
}