#include <stdio.h>

int main () {

int n;
printf("Enter the number of Fibonacci terms: ");
scanf("%d",&n);
printf(" ");
double fibonacci[n];
fibonacci[0] = (double)1,fibonacci[1] =(double)1;
for (int i = 0;i<n;i++) {
    if (i>1) {
    fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
    }
    printf("%d.Term : %.0lf\n ",i+1,fibonacci[i]);

}
return 0;
}
