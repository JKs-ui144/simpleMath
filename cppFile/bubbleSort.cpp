#include <iostream>
using namespace std;

// ���帶�� ��� �ݺ��� ������ ���� �ݺ��� (������������ ���� ū ���ڰ� ���尡 ������ ���� �����ʿ� ���ĵȴ�.)

void UPbubble_sort(int arr[], int n) {
	// ���� �迭�� ���� ���� �������� temp ������ �������ְ� ���� ������ ��
	// ���� �迭�� ���� �迭�� ���ڸ� temp ������ �� ���� �迭�� �־��ش�.

	int temp;

	// ���� �ݺ���
	for (int i = 0; i < n - 1; i++) {

		// �迭 �� �� �ݺ���
		for (int j = 0; j < n - i - 1; j++) {

			// ���� �迭�� �� ���� �迭�� ���ڸ� ���� ���� �迭�� ���ڰ� �� ũ�ٸ� ���� ��ġ�� �ٲ۴�.
			//�� ��ġ ��ȯ
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

	// ���� �ݺ���
	for (int i = 0; i < n - 1; i++) {

		// �迭 �� �� �ݺ���
		for (int j = 0; j < n - i - 1; j++) {

			// ���� �迭�� �� ���� �迭�� ���ڸ� ���� ���� �迭�� ���ڰ� �� �۴ٸ� ���� ��ġ�� �ٲ۴�.
			//�� ��ġ ��ȯ
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

	//�迭�� ��ü ũ�⸦ �ڷ��� ũ��� ������ �迭�� ũ�⸦ ���Ѵ�.
	int n = sizeof(arr) / sizeof(int);

	cout << "������ �迭 ���� �Է��ϼ���. : ";
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

	cout << "������ ������ �����ϼ���" << endl << "���� 1 : ��������" << endl << "���� 2 : ��������" << endl;
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
		cout << "�߸��� ���ڸ� �Է��ϼ̽��ϴ�." << endl;
	}

	return 0;
}