#include <iostream>
#include "bitmask.h"

using namespace std;

int main(){
	int N = 34;
	printf("%s\n",byte_to_binary(N));
	
	N = setJFalse(N,2);
	printf("%s\n",byte_to_binary(N));
	
	N = setJTrue(N,2);
	printf("%s\n",byte_to_binary(N));
	
	printf("%s\n",byte_to_binary(getLSB(N)));
	
	N = toggleJ(N,2);
	printf("%s\n",byte_to_binary(N));
	
	printf("%s\n",byte_to_binary(getNTrueBits(5)));
	
	if(checkJTrue(N,4)){
		printf("True\n");
	}
	
	if(checkJFalse(N,4)){
		printf("False\n");
	}
	
	
	return 0;
}