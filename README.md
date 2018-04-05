## md5 code

    a simple md5 util helper

## interface

```C
//
// md5 16 byte, 默认是 32位的C串 
// md5 16 = md5 32 [8:24] tail add 0
//
typedef uint8_t md5_t[2 * 16 + 1];

//
// md5_strs - 得到字符串的 md5 串
// m        : 存储 md5串地址
// p        : 文件的路径
// return   : m 首地址
//
extern uint8_t * md5_file(md5_t m, const char * p);

//
// md5_strs - 得到字符串的 md5 串
// m        : 存储 md5串地址
// d        : 内存块数据
// n        : 内存块长度
// return   : m 首地址
//
extern uint8_t * md5_data(md5_t m, const void * d, size_t n);
```
