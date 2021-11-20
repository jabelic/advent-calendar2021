#include <sys/types.h>
#include <unistd.h>

// ssize_t
// write(int fd, const void *buf, size_t nbytes);

// #include <sys/uio.h>

// ssize_t
// writev(int fd, const struct iovec *iov, int iovcnt);

// struct iovec
// {
//     void *iov_base; /* Base address. */
//     size_t iov_len; /* Length. */
// };

int main(int argc, char **argv)
{
    u_int8_t buf[4096];
    return 0;
}