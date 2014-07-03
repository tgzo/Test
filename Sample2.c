#include	<stdio.h>

int main() {
	int s, max = 0, kazu = 0;

	printf("↓星の総数を入力(1～10)↓\n");
	scanf("%d", &max);

	if ( max < 1 || max > 10 ) {
		printf("総数の範囲を超えています！プログラム終了\n");
		return 1;
	}

	printf("↓光らせたい星の数を入力(1～10)↓\n");
	scanf("%d", &kazu);

	if ( kazu < 1 || kazu > 10 ) {
		printf("光らせたい星の数の範囲を超えています！プログラム終了\n");
		return 2;
	}

	for( s = 0; s < max; s++) {
		if (s < kazu - 1) {
			printf("★");
		} else {
			printf("☆");
		}
	}

	printf("プログラム終了\n");
	return 0;
}

