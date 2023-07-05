#include <stdio.h>

float celsius_to_far(float celsius){
    return (9.0/5.0) * (celsius + 32);
}

int main() {
    float fahr, celsius;
    float lower, upper, step;
    lower = -20;
    upper = 300;
    step = 5;
    
    celsius = lower;
    printf("Celsius\t\tFahrenheit\n");
    while(celsius <= upper) {
        printf("%3.0f\t\t%6.1f\n", celsius, celsius_to_far(celsius));
        celsius = celsius + step;
    }

    return 0;
}
