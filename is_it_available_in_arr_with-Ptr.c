#include <stdio.h>

void print_arr(int *arrPtr , int arr_size) {
    printf("Arr: ");
    for (int i = 0;i<arr_size;i++) {
        printf("%d ",*arrPtr);
        arrPtr++;
    }
}

int main () {
int a; // arr elements
int arr_size = -1; // to enter while
int in_the_arr = 0; //false

while (arr_size <= 0) {
    printf("What is the size of the array? : ");
    scanf("%d",&arr_size);
    if (arr_size <= 0) {
        printf("Enter a number greater than 0\n");
        continue;
    }
} //while end

int arr[arr_size];
int *arrPtr;

arrPtr = arr; //arr = &arr[0]

for (int i = 0; i<arr_size;i++) {
    scanf("%d",&a);
    *arrPtr = a;
    arrPtr++;
}
arrPtr = arr; //return the arr

print_arr(arrPtr,arr_size); //call function

printf("\nWhich number are you looking for?: ");
scanf("%d",&a);
for (int i = 0;i<=arr_size;i++) {
    if (a == *arrPtr) {
        printf("%d --> %d. element\n",a,i+1);
        in_the_arr = 1; //true
    }
    arrPtr++;
    if (i==arr_size && in_the_arr == 0) {
        printf("%d not in the arr.\n",a);
    }
}

return 0;
}
