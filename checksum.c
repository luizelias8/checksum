#include <stdio.h>

long calculaChecksum(char *s, int size)
{
    long checksum = 0;

    for(int i = 0; i < size; i++)
    {
        checksum += (s[i] * i);
    }

    return checksum;
}

int main() 
{
    printf("Checksum de 'ABC': %lld\n", calculaChecksum("ABC", 3));
    printf("Checksum de 'ABc': %lld\n", calculaChecksum("ABc", 3));
    printf("Checksum de 'BCA': %lld\n", calculaChecksum("BCA", 3));

    return 0;
}