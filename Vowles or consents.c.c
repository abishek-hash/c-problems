/******************************************************************************
Vowel or Consonant
Input: a
Output: Vowel
Explanation: Check if character is a, e, i, o, u (upper/lowercase)
*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
     if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
     printf("Vowels");
    else if(ch=='B'||ch=='C'||ch=='D'||ch=='F'||ch=='G'||ch=='J'||ch=='K'||ch=='k'||ch=='L'||ch=='M'||ch=='N'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
     printf("It is consonants");
    else
     printf("Invalid Operations");
    return 0;
}