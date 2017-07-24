#include "md5util.h"
#include <stdio.h>
#include <string.h>

//
// md5 use test, 韦易笑绝逼是个高手
//
int main(int argc, char * argv[]) {
	const char * heoo = "hello world";
	md5s_t ms;

	md5_strs(heoo, strlen(heoo), ms);
	printf("[%s] => [%s]\n", heoo, ms);

	return 0;
}