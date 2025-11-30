#include <stdio.h>
#define SIZE 100
int palindrome(char word[SIZE]) {

char *wordPtrFirst;
char *wordPtrLast;

for (wordPtrLast = word;*wordPtrLast != '\0';wordPtrLast++); // wordPtrLast is word's end (it's '\0')
wordPtrLast--; //before the '\0'

for (wordPtrFirst = word;wordPtrFirst<wordPtrLast;wordPtrFirst++,wordPtrLast--) {
    if (*wordPtrFirst != *wordPtrLast) {
        return 0; //false
    }
}

return 1; //true
}


int main () {

char word[SIZE];

while (1) { //while start
    printf("Enter your word (Press 'q' for quit): ");
    gets(word);

    if (word[0] == 'q') {
        break;
    }
    if (palindrome(word)) { // palindrome is 1 (true)
        printf("%s is palindrome\n",word);
    }
    else { //palindrome is 0 (false)
        printf("%s is not palindrome\n",word);
    }

} //while end

printf("\nProgram is ending...");

return 0;
}
