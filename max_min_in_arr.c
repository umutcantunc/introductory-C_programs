#include <stdio.h>

void get_arr(int *arrPtr,int arr_size) {

    for (int i = 0;i<arr_size;i++) {
        scanf("%d",arrPtr);
        arrPtr++;
    }
}

void print_arr(int *arrPtr,int arr_size) {

    for (int i = 0;i<arr_size;i++) {
        printf("%d ",*arrPtr);
        arrPtr++;
    }
    printf("\n");
}

int max_number(int *arrPtr,int *LastPtr) {

    int max = *arrPtr;

    while (arrPtr <= LastPtr) {
        if (*arrPtr > max) {
            max = *arrPtr;
        }
    arrPtr++;
    }

    return max;
}

int min_number(int *arrPtr,int *LastPtr) {

    int min = *arrPtr;

    while (arrPtr <= LastPtr) {
        if (*arrPtr < min) {
            min = *arrPtr;
        }
    arrPtr++;
    }

    return min;
}

int main () {
int size;
printf("What is the size of the array?: ");

scanf("%d",&size);
int arr[size]; //first adress
int *LastPtr; //last adress
int *arrPtr;

arrPtr = arr;

get_arr(arrPtr,size);
print_arr(arrPtr,size);
//arrPtr bu fonksiyondan cýktýktan sonra degeri yine arr'dýr. yani main icindeki degerini korur. (arrPtr = arr //again, in main)

LastPtr = arrPtr + size - 1; // we take last ptr
arrPtr = arr; //return first

printf("Max: %d\n",max_number(arrPtr,LastPtr));
printf("Min: %d\n",min_number(arrPtr,LastPtr));

return 0;
}
