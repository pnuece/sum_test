#include <cstdio>
#include "sum.h"

int main() {
	int n;
	scanf("%d", &n);
	int s = sum(n);
	print("sum = %d\n", s);
}

