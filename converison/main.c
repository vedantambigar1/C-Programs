#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;
    printf("enter celsius :");
    scanf("%f", &celsius);

    fahrenheit = celsius +32;
    printf("fahrenheit is : %f", fahrenheit);
    return 0;
}
