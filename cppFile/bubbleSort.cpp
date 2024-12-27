#include <iostream>
using namespace std;

// 라운드마다 몇번 반복할 건지에 대한 반복문 (오름차순으로 가장 큰 숫자가 라운드가 끝나면 가장 오른쪽에 정렬된다.)

void UPbubble_sort(int arr[], int n) {
	// 기준 배열의 값을 따로 저장해줄 temp 변수를 선언해주고 값을 저장한 뒤
	// 기준 배열에 다음 배열의 숫자를 temp 변수를 그 다음 배열에 넣어준다.

	int temp;

	// 라운드 반복문
	for (int i = 0; i < n - 1; i++) {

		// 배열 값 비교 반복문
		for (int j = 0; j < n - i - 1; j++) {

			// 기준 배열과 그 다음 배열의 숫자를 비교해 기준 배열의 숫자가 더 크다면 서로 위치를 바꾼다.
			//값 위치 교환
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void DObubble_sort(int arr[], int n) {
	int temp;

	// 라운드 반복문
	for (int i = 0; i < n - 1; i++) {

		// 배열 값 비교 반복문
		for (int j = 0; j < n - i - 1; j++) {

			// 기준 배열과 그 다음 배열의 숫자를 비교해 기준 배열의 숫자가 더 작다면 서로 위치를 바꾼다.
			//값 위치 교환
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int key = 0;

	int arr[5];

	//배열의 전체 크기를 자료형 크기로 나누어 배열의 크기를 구한다.
	int n = sizeof(arr) / sizeof(int);

	cout << "임의의 배열 값을 입력하세요. : ";
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

	cout << "정렬의 기준을 선택하세요" << endl << "숫자 1 : 오름차순" << endl << "숫자 2 : 내림차순" << endl;
	cin >> key;

	if (key == 1) {
		UPbubble_sort(arr, n);

		for (int i = 0; i < n; i++) {
			cout << arr[i] << endl;
		}
	}
	else if (key == 2) {
		DObubble_sort(arr, n);

		for (int i = 0; i < n; i++) {
			cout << arr[i] << endl;
		}
	}
	else {
		cout << "잘못된 숫자를 입력하셨습니다." << endl;
	}

	return 0;
}