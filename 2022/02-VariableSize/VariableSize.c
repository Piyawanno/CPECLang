#include <stdio.h>

int main(){
	char c = 10;
	short s = 20;
	int i = 30;
	long long int l = 40;
	float f = 50.0;
	double d = 60.0;

	int size = sizeof(c);
	printf("char c=%d sizeof(c)=%d\n", c, size);
	size = sizeof(s);
	printf("short s=%d sizeof(s)=%d\n", s, size);
	size = sizeof(i);
	printf("int i=%d sizeof(i)=%d\n", i, size);
	size = sizeof(l);
	printf("long long int l=%lld sizeof(l)=%d\n", l, size);
	size = sizeof(f);
	printf("float f=%.2f sizeof(f)=%d\n", f, size);
	size = sizeof(d);
	printf("double d=%.2f sizeof(d)=%d\n", d, size);
	return 0;
}