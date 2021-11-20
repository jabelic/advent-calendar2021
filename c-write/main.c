#include <sys/types.h>
#include <unistd.h>   // read, write
#include <sys/uio.h>  // read, writev
#include <inttypes.h> // u_int8_t
#include <stdlib.h>   // calloc
const ssize_t BUF_SIZE = 8192;

typedef struct scan
{
    char *array;
    ssize_t size;
} scan;
union input_types
{
    char *string;
    int integer;
} input_types;

/** 入力を即座に出力して返すだけのプログラム */
int myprint(char *arguments)
{
    write(1, arguments, sizeof(arguments));
    return 0;
}
scan myscan(char *input)
{
    u_int8_t buf[BUF_SIZE]; // BUF_SIZE byte. ここに書き込む.
    // typedef unsigned char u_int8_t
    // unsigned 8bit int data, 0~255.
    ssize_t nread;                     // バイト数あるいはエラー発生通知を返す関数の型. エラーなら負の数を返す.
    write(0, input, sizeof input - 1); //
    nread = read(0, buf, sizeof buf);  //　読み込んだbyte数を返す
    scan scan_obj;
    char *returns = calloc(1, sizeof(nread));
    for (int i = 0; i < nread; i++)
    {
        returns[i] = buf[i];
    }
    scan_obj.array = returns;
    scan_obj.size = nread;
    return scan_obj;
}

int main(int argc, char **argv)
{
    scan scans = myscan("scan: ");
    myprint(scans.array);
    return 0;
}