#include <stdio.h>
#include <math.h>

int main(){
    int choice;

    printf("Choose one option:\n");
    printf("1. Calculate Perimeter of Rectangle\n");
    printf("2. Calculate Cube of a Number\n");
    printf("3. Convert Celsius to Fahrenheit\n");
    printf("4. Area of a Square\n");
    printf("5. Area of a Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice){
    case 1:{
    int length, width, perimeter;
    printf("enter the lenght");
    scanf("%d", &length);



    printf("enter the width");
    scanf("%d", &width);

    perimeter = 2*(length * width);
    printf("perimeter is : %d",perimeter);
    return 0;
    break;
    }
     case 2:{
    int n , cube;
    printf("Enter the number: ");
    scanf("%d", &n);

    cube = n * n * n;

    printf("cube is : %d", cube);
    return 0;
    break;
}
    case 3:{
    float celsius, fahrenheit;
    printf("enter celsius :");
    scanf("%f", &celsius);

    fahrenheit = celsius +32;
    printf("fahrenheit is : %f", fahrenheit);
    return 0;
    break;
}
    case 4:{
    int side;
    printf(" enter side");
    scanf("%d", &side);
    printf("area is :%d",side * side);
    return 0;
    break;
    }
     case 5:{
   float radius;
    printf(" enter radius");
    scanf("%f", &radius);
    printf("area is :%f", 3.14 * radius * radius);
    return 0;
    break;
    }default:
            printf("Invalid choice. Please select between 1 and 5.\n");
    }
return 0;
}

