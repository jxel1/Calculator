#include <stdio.h>
#include <stdlib.h>


double perimeter (int r) {
    double perim = (double)2*3.14159*r;

    return perim;
}

double area (int r) {
    double are = (double)r*3.14159*r;

    return are;
}

int main()
{
    int r;
    printf("Enter the circles radius: ");
    scanf("%d", &r);

    printf("The circles perimeter is: %.2lf", perimeter(r));
    printf("\nThe circles area is: %.2lf", area(r));


    return 0;
}
