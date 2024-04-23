#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int m1;
    unsigned int m2;
    unsigned int res_a = 1;
    unsigned int res_b = 2;

    m2 = 1;
    m2 = 1;
    while (res_a != res_b)
    {
        res_a = a * m1;
        while (res_b <= res_a)
        {
            res_b = b * m2;
            m2++;
        }
        m1++;
    }
    return (res_b);
}

int main(int argc, char **argv)
{
    unsigned int    a = 0;
    unsigned int    b = 0;
    int             i = 0;

    while (argv[1][i] != '\0')
    {
        a = argv[1][i] - '0';
        i++;
        a = a * 10;
    }
    i = 0;
    while (argv[2][i] != '\0')
    {
        b = argv[2][i] - '0';
        i++;
        b = b * 10;
    }
    lcm(a, b);
    return (0);
}