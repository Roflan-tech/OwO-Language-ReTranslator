#include <stdio.h>
#include <string.h>
#define pwintf printf
#define chaw char
// chaw uwu(chaw);
int main()
{
    chaw owo[5000];
    int i = 0;
    pwintf("Entew youw phwase hewe (* ^ ω ^): \n");
    scanf("%[^\n]s", owo);
    for (i = 0; i <= strlen(owo); i++)
    {
        if (owo[i] == 'R' || owo[i] == 'L')
        {
            owo[i] = 'W';
        }
        if (owo[i] == 'r' || owo[i] == 'l')
        {
            owo[i] = 'w';
        }
    }
    printf("%s\n", owo);
}
/*chaw uwu(chaw owo){

    return owo;
}*/
