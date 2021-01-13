#include<iostream>
const int N = 9;
using namespace std;
bool valid(int arr[N][N], int row,int col, int num) {
	for (int i = 0; i < N; i++) 
		if (arr[row][i] == num || arr[i][col]==num)
			return false;
	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 3; j++) 
			if(arr[i+(3*(row/3))][j+(3*(col/3))]==num)
				return false;
	return true;
}
int  solver(int arr[N][N], int row, int col) {
	if (row == N - 1 && col == N)
		return 1;
	if (col == N) {
		row++;
		col = 0;
	}
	if (arr[row][col] > 0)
		return solver(arr, row, col+1);
	else {
		for (int i = 1; i <= 9; i++) {
			if (valid(arr, row, col, i)) {
				arr[row][col] = i;
				if(solver(arr, row, col + 1))
				return 1;
				arr[row][col] = 0;
			}
		}
	}
	return 0;
}
int main() {
	int arr[N][N];
	cout << "Enter the unsolved sudoku and blanks as 0=";
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
	if (solver(arr, 0, 0) == 0)
		cout << "Not possible";
	else {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}