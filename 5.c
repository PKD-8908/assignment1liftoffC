#include <stdio.h>
main()
{
  char ch;
    printf("Enter an Alphabet ");
    scanf(" %c", &ch);
    if ('a'<=ch && 'z'>=ch || 'A'<=ch && 'Z'>=ch){
       printf("The Entered Character is an Alphabet\n");
          switch(ch)
            {
                case 'A':
                case 'a':
                case 'E':
                case 'e':
                case 'I':
                case 'i':
                case 'O':
                case 'o':
                case 'U':
                case 'u':
                    printf("The Entered Alphabet is a Vowel\n");
                    break;
                default:
                    printf("The Entered Character is a Consonant\n");
                    break;
            }
    }
    else{
        printf("The Entered Character is not an Alphabet");
    }
}