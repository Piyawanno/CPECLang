#include <stdio.h>

int main(){
	unsigned char c = 143;
	int size = sizeof(c)*8;
	for(int i=0;i<size;i++){
		int binary = (c & (1 << i)) >> i;
		printf("bit[%d] of c=%d = %d\n", i, c, binary);
	}
	return 0;
}