#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    scanf("%c", &ch); // read a character
    printf("%c\n", ch); // print a character with new line (\n)

    char s[30];
    scanf("%s", s); // read a word (without spaces)
    printf("%s\n", s); // print a word with new line (\n)
    
    char sen[100];
    getchar(); // clears remaining newlines from the previous input string
    scanf("%[^\n]%*c", sen); // read full sentence (with spaces)
    printf("%s\n", sen); // print full sentence
    
    return 0;
}
