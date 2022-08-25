#include <stdio.h>

int main(){
	unsigned char c = 143;
	int b0 = c & 1;
	if(b0 > 0){
		printf("bit[0] of %d = 1\n", c);
	}else{
		printf("bit[0] of %d = 0\n", c);
	}
	int b1 = c & 2;
	if(b1 > 0){
		printf("bit[1] of %d = 1\n", c);
	}else{
		printf("bit[1] of %d = 0\n", c);
	}
	int b2 = c & 4;
	if(b2 > 0){
		printf("bit[2] of %d = 1\n", c);
	}else{
		printf("bit[2] of %d = 0\n", c);
	}
	int b3 = c & 8;
	if(b3 > 0){
		printf("bit[3] of %d = 1\n", c);
	}else{
		printf("bit[3] of %d = 0\n", c);
	}
	int b4 = c & 16;
	if(b4 > 0){
		printf("bit[4] of %d = 1\n", c);
	}else{
		printf("bit[4] of %d = 0\n", c);
	}
	int b5 = c & 32;
	if(b5 > 0){
		printf("bit[5] of %d = 1\n", c);
	}else{
		printf("bit[5] of %d = 0\n", c);
	}
	int b6 = c & 64;
	if(b6 > 0){
		printf("bit[6] of %d = 1\n", c);
	}else{
		printf("bit[6] of %d = 0\n", c);
	}
	int b7 = c & 128;
	if(b7 > 0){
		printf("bit[7] of %d = 1\n", c);
	}else{
		printf("bit[7] of %d = 0\n", c);
	}
	return 0;
}