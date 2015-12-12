#include "bitmask.h"

using namespace std;

int setJFalse(int bits, int j){
	return (bits & ~(1<<j));
}

int setJTrue(int bits, int j){
	return (bits | (1<<j));
}

int checkJFalse(int bits, int j){
	return (checkJTrue(bits,j) ^ 1);
}

int checkJTrue(int bits, int j){
	return (bits>>j & 1);
}

int getLSB(int bits){
	return (bits & -bits);
}

int toggleJ(int bits, int j){
	return (bits ^ (1<<j));
}

int getNTrueBits(int N){
	return((1<<N) - 1);
}

const char* byte_to_binary(int x){
	static char b[9];
	b[0]= '\0';
	
	int z;
	for(z  = 128; z > 0; z>>=1){
		strcat(b, ((x & z) == z) ? "1" : "0");
	}
	
	return b;
}