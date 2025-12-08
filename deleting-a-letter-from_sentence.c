#include <stdio.h>
#include <string.h>
#define SIZE 200

void print_word(char word[SIZE]) { //we take word(pointer)
    printf("Your word:");
    char *wordPtr;
    for (wordPtr=word;*wordPtr != '\0';wordPtr++) {
        printf("%2c",*wordPtr);
    }
printf("\n");

}

void delete_process(char word[SIZE],char delete_char) {  //uuummuuttcattn

    char *wordPtr;
    for (wordPtr=word;*wordPtr != '\0';wordPtr++) {
        if (*wordPtr == delete_char) {
            int same_latter_row_control = 1;
            int wordPtr_back_again = 0;
            while (*wordPtr == *(wordPtr+1)) {
                wordPtr_back_again++;
                same_latter_row_control++;
                wordPtr++;
            }
            wordPtr = wordPtr -wordPtr_back_again;
            strcpy(wordPtr,wordPtr+same_latter_row_control);
        }

    }
}

int main() {
char word[SIZE];
char delete_char;
printf("Enter your word: ");
fgets(word,SIZE,stdin);

print_word(word);

printf("Enter the character you want to delete: ");
scanf("%c",&delete_char);

delete_process(word,delete_char);

printf("After deletion new ");
print_word(word);


return 0;
}
