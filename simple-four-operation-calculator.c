#include <stdio.h>

//function prototypes
float collection(float a,float b);
float extraction(float a,float b);
float impact(float a,float b);
float divide(float a,float b);

int main () {

char op;
float n1,n2;
printf("Simple four-operation calculator\n");

while (1) {
printf("\n+ - * / choose one (press 'q' for quit)\n");
scanf("%s",&op);
if (op == 'q' || op == 'Q')
{
    break;
}
if (op != '+' && op != '-' && op != '*' && op != '/') {
    printf("WRONG OPERATION! TRY AGAIN.\n");
    continue;
}
//get numbers
printf("First number: ");
scanf("%f",&n1);
printf("Second number: ");
scanf("%f",&n2);

if (op == '+')
{
    printf("%.2f %c %.2f = %.2f\n",n1,op,n2,collection(n1,n2));
}
if (op == '-')
{
    printf("%.2f %c %.2f = %.2f\n",n1,op,n2,extraction(n1,n2));
}
if (op == '*')
{
    printf("%.2f %c %.2f = %.2f\n",n1,op,n2,impact(n1,n2));
}
if (op == '/')
{
    if (n2 == 0) {
        printf("Division-by-zero error!\n");
        continue;
    }
    printf("%.2f %c %.2f = %.2f\n",n1,op,n2,divide(n1,n2));
}

} //while ending


return 0;
}

float collection(float a,float b) {
    return a+b;
}
float extraction(float a,float b) {
    return a-b;
}
float impact(float a,float b) {
    return a*b;
}
float divide(float a,float b) {
    return a/b;
}




