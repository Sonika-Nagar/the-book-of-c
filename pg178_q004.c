#include <stdio.h>
double celsius_to_fahreheit(double cel){
    return (cel *9/5) + 32;
}
int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads a double - temp in degree C
    * 2. Invoke a function named celsius_to_fahreheit to convert this input temp to degree F. The function should return the converted temp in F
    * 3. Receives the returned converted value in main and prints it on a line by itself with two decimal points and no trailing newline
    * E.g. Input ->  0
    * Output -> 32.00
    * (C × 9/5) + 32 = F
    */
    double far=0, var=0;
    scanf("%lf",&far);
    var=celsius_to_fahreheit(far);
    printf("%.2f",var);
    return 0;
}
