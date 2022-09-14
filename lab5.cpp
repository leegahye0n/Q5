#include <iostream>
using namespace std;

int main() {
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) board[x][y] = ' ';

	for (k = 0; k < 9; k++) {
		cout << "(x, y) ÁÂÇ¥: ";
		cin >> x >> y;
		board[x][y] = (k % 2 == 0) ? 'X' : '0';

		for (i = 0; i < 3; i++) {
			cout << "---|---|---" << "\n";
			cout << board[i][0] << "  | " << board[i][1] << " |  " << board[i][2] << "\n";
		}
		cout << "---|---|---" << "\n";
	}
	return 0;
}