#include	<stdio.h>

int main() {
	int s, max = 0, kazu = 0;

	printf("↓星の総数を入力↓\n");
	scanf("%d", &max);

	printf("↓光らせたい星の数を入力↓\n");
	scanf("%d", &kazu);

	for( s = 0; s < max - kazu; s++) {
		printf("★");
	}

	for( s = kazu - 1 ; s < max; s++) {
		printf("☆");
	}

	printf("\n");
}
