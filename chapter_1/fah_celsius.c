#include <stdio.h>

main() {
    float fahr, celsius;
    float lower, upper, step;
    lower = -20;
    upper = 300;
    step = 5;
    
    celsius = lower;
    printf("Celsius\t\tFahrenheit\n");
    while(celsius <= upper) {
        fahr = (9.0/5.0) * (celsius + 32);
        printf("%6.1f\t\t%3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
