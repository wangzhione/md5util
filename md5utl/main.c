#include "md5.h"

//
// md5 use test, 韦易笑绝逼是个高手
//
int main(int argc, char * argv[]) {
    md5_t ms;
    const char * heoo = "hello world";

    md5_str(ms, heoo);
    printf("[%s] => [%s]\n", heoo, ms);

    return 0;
}