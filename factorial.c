#include <stdio.h>

unsigned long long factorial(int number) {
    unsigned long long result =1;

    if (number == 0) { // 0! = 1
        return result;
    }

    int *numberPtr;
    int number_arr[number];
    numberPtr = number_arr; //number_arr = &number_arr[0]

    for (int i = 1; i<= number; i++) {
        *numberPtr = i;
        result *= *numberPtr;
        numberPtr++;
    }

    return result;
}

int main () {

int number;
printf("Enter a number for factorial: ");
scanf("%d",&number);
while (number < 0 ) {
    printf("Error! Number is negative.\n");
    printf("Enter a number for factorial: ");
    scanf("%d",&number);

}
printf("%d! = %llu",number,factorial(number));

return 0;
}
