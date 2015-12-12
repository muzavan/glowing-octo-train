#include <iostream>
#include <cstdio>
#include <string.h>
#include <stdlib.h>

int setJFalse(int bits, int j);

int setJTrue(int bits, int j);

int checkJFalse(int bits, int j);

int checkJTrue(int bits, int j);

int getLSB(int bits);

int toggleJ(int bits, int j);

int getNTrueBits(int N);

const char* byte_to_binary(int x);