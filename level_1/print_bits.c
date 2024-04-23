#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int div;
    int c;

    div = 128;
    c = octet;
    if (c >= '0' && c<= '9')
        c = c - '0';
    while (div > 0)
    {
        if (div <= c)
        {
            write(1, "1", 1);
            c = c % div;
        }
        else
            write(1, "0", 1);
        div = div / 2;
    }
}

/*int main(int argc, char **argv)
{
    print_bits(argv[1][0]);
    return (0);
}*/