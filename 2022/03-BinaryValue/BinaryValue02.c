#include <stdio.h>

int main(){
	unsigned char c = 143;
	int size = sizeof(c)*8;
	for(int i=0;i<size;i++){
		int binary = c & (1 << i);
		if(binary > 0){
			printf("bit[%d] of c=%d = 1\n", i, c);
		}else{
			printf("bit[%d] of c=%d = 0\n", i, c);
		}
	}
	return 0;
}