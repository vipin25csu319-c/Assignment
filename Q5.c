#include <stdio.h>

int findQuadrant(float x, float y) {
    if (x == 0 && y == 0)
        return 0;  // Origin
    else if (x == 0)
        return 5;  // Y-axis
    else if (y == 0)
        return 6;  // X-axis
    else if (x > 0 && y > 0)
        return 1;  // First quadrant
    else if (x < 0 && y > 0)
        return 2;  // Second quadrant
    else if (x < 0 && y < 0)
        return 3;  // Third quadrant
    else
        return 4;  // Fourth quadrant
}

int main() {
    float x, y;
    
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);
    
    int quadrant = findQuadrant(x, y);
    
    printf("\nPoint (%.2f, %.2f) lies ", x, y);
    
    switch(quadrant) {
        case 0:
            printf("at the origin\n");
            break;
        case 1:
            printf("in First quadrant\n");
            break;
        case 2:
            printf("in Second quadrant\n");
            break;
        case 3:
            printf("in Third quadrant\n");
            break;
        case 4:
            printf("in Fourth quadrant\n");
            break;
        case 5:
            printf("on Y-axis\n");
            break;
        case 6:
            printf("on X-axis\n");
            break;
    }
    
    return 0;
}