#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length, width, perimeter;
    printf("enter the lenght");
    scanf("%d", &length);



    printf("enter the width");
    scanf("%d", &width);

    perimeter = 2*(length * width);
    printf("perimeter is : %d",perimeter);
    return 0;
}
