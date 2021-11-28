#include <stdio.h>

int main() {
	int hour, min;

	scanf("%d %d", &hour, &min);

	if (min >= 45)
		printf("%d %d", hour, min - 5);
	else {
		if (hour == 0)
			hour = 24;
	}
	printf("%d %d\n", hour - 1, min + 60 - 45);

	return 0;
}
