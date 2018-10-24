#include <stdio.h>

int rfibo(int n);
int sfibo(int n);

int main() {
	for (int i = 2; i <= 23; i++) {
		printf("rfibo(%d) = %d\n", 2 * i - 1, rfibo(2 * i - 1));
		printf("sfibo(%d) = %d\n", 2 * i - 1, sfibo(2 * i - 1));
	}
	return 0;
}

int rfibo(int n) {
	if (n == 0)
		return 1;
	if (n == 1)
		return 1;
	else
		return rfibo(n - 1) + rfibo(n - 2);
}

int sfibo(int n) {
	static int count = 1;
	static int first = 1;
	static int second = 1;

	do {
		int temp = second;
		second += first;
		first = temp;
		count++;
	} while (count != n);

	return second;
}