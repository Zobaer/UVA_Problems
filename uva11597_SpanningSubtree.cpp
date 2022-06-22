#include<stdio.h>

///Author: Md Zobaer Islam//

int main(void) {
	int inp, c = 1;
	while (scanf("%d", &inp)&&!inp)
		printf("Case %d: %d\n", c++, inp >> 1);
	return 0;
}
