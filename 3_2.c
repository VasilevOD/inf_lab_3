#include<stdio.h>


void expand(char s1[], char s2[])
{
    int i, j, k;
    k = 0;
    for (i = 0; s1[i] != '\0'; i++)
        if (s1[i] == '-')
            if (i == 0 || s1[i+1] == '\0')
            s2[k++] = '-';
            else
                for (j = s1[i-1]; j <= s1[i+1]; j++)
                    s2[k++] = j;
            s2[k] = '\0';
}
 
int main(void)
{
    int ku; 
    while ((ku=getchar())!='\n'){
        
    }
    char s1[] = "-a-z0-9d-f-";
    char s2[128] = "";
    expand(s1, s2);
    printf("s1=%s\ns2=%s\n", s1, s2);
    return 0;
}
