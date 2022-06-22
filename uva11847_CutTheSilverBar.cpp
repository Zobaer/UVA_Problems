#include<stdio.h>
#include<math.h>

int main(void) {
	unsigned long long inp, outp;
	
	while (scanf("%llu", &inp)&&inp!=0) {
		outp = log2(inp);
		printf("%llu\n", outp);
	}
	return 0;
}
