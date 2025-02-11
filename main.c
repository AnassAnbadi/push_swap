#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char **p;
    int i =1;
    p=split(argv[1],' ');

    while (*p)
    {
        printf("%s\n",*p);
        *p++;
    }
    
    return 0;
}
