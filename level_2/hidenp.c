#include <unistd.h>

void    hidenp(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str1[i] != '\0' && str2[j] != '\0')
    {
        if (str1[i] == str2[j])
            i++;
        j++;
    }
    if (str1[i] == '\0')
        write (1, "1", 1);
    else
        write (1, "0", 1);
    write (1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        write (1, "\n", 1);
        return (0);
    }
    hidenp(argv[1], argv[2]);
    return (0);
}