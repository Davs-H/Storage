#include <stdio.h>
#include <string.h>

int

checkPalindrome(char * inputString) {
  char *temp = inputString+strlen(inputString)-1;
  while (temp>inputString)
    if (*temp--!=*inputString++)
      return 0;
  return 1;
}


void main()
{
  char text[100];
  int count=0;

  while(count++ != 5)
  {
     printf("\n Write a random word: ");
     scanf("%s", text);
     if (checkPalindrome(text))
       printf(" %s is a Palindrome.\n\n");
     else if(text)
        printf(" %s is not a Palindrome.\n\n");
  }
}
