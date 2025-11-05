#include <stdio.h>
#include <math.h>

int main() {

    float radius = 0.0f;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    float pi = 3.14159265358979323;
    float radius_squared = pow(radius, 2);
    float area = pi * radius_squared;
    float surface_area = 4 * area;
    float volume = (4 / 3) * pi * pow(radius, 3);

    printf("Area: %.2f\n", area);
    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume);

    return 0;
}