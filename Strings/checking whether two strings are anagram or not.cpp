#include <stdio.h>
#include <stdlib.h>
int main ()
{
char A[] = "listen";
char B[] = "silent";
int i, H[26];
printf ("Strings \"%s\" and \"%s\"", A, B);
for (i = 0; i < 26; i++)
{
    H[i] = 0;
}
for (i = 0; A[i] != '\0'; i++)
{
    H[A[i] - 97] += 1;
}
for (i = 0; B[i] != '\0'; i++)
{
    H[B[i] - 97] -= 1;
    if (H[B[i] - 97] < 0)
    {
        printf (" are not anagrams");
        break;
    }
}
if (B[i] == '\0')
    printf (" are anagrams");
}
