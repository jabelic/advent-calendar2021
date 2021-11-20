#include <sys/types.h>
#include <unistd.h>   // read, write
#include <sys/uio.h>  // read, writev
#include <inttypes.h> // u_int8_t
#include <fcntl.h>    // open

/** 入力を即座に出力して返すだけのプログラム */
int main(int argc, char **argv)
{
    u_int8_t buf[4096]; // 4096byte. ここに書き込む.
    int fd = open(argv[1], O_RDONLY);
    ssize_t nread;
    while ((nread = read(0, buf, sizeof buf)) > 0)
        write(1, buf, nread);
    return 0;
}