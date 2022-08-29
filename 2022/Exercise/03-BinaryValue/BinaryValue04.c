#include <stdio.h>

void showBinaryValue(long long int value, int size){
	for(int i=0;i<size;i++){
		int binary = (value & (1 << i)) >> i;
		printf("bit[%02d] of value=%lld = %d\n", i, value, binary);
	}
}

int main(){
	unsigned char c = 143;
	showBinaryValue((long long int) c, 8*sizeof(c));
	printf("-------------\n");
	unsigned short s = 2315;
	showBinaryValue((long long int) s, 8*sizeof(s));
	printf("-------------\n");
	unsigned int i = 48961863;
	showBinaryValue((long long int) i, 8*sizeof(i));
	printf("-------------\n");
	return 0;
}
