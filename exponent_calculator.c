#include <stdio.h>

float exponentiate(float x,float y); //function protype (x is base, y is power)

float exponentiate(float x,float y) {

float c=1; //temporary number

if (y==0) { // y is 0 and x is not 0
    c = 1;
}

else { //positive or negative power
    if (y<0) {
        y = -y;
    }
    for (int i= 1;i<=y;i++) { //y times
        c *= x;
    }
}

return c;
}

int main () {
float x=1,y=1; // firstly random numbers

while (!(x ==0 && y == 0)) {
printf("Enter the base number: ");
scanf("%f",&x);
printf("Enter the power number: ");
scanf("%f",&y);
if (x != 0 && y>0 ) {
    printf("%.2f ^^ %.2f = %.2f\n\n",x,y,exponentiate(x,y));
}

if (x != 0 && y <0) {
   printf("%.2f ^^ %.2f = 1/%.2f = %.5f\n\n",x,y,exponentiate(x,y),(float)1/exponentiate(x,y));
}

if (x == 0 && y !=0 ) {
    printf("%.2f ^^ %.2f = %.2f\n\n",x,y,exponentiate(x,y));
}

if (x != 0 && y==0 ) {
    printf("%.2f ^^ %.2f = %d\n\n",x,y,1);
}

if (!(x == 0 && y ==0)) {
    printf("*** Enter 0 power 0 if you want quit ***\n\n");
}

} //while ending

printf("0 power 0 is indeterminate, program is closing...\n");

return 0;
}
