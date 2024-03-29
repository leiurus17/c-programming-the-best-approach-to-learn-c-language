#include<stdio.h>
#include<ncurses.h>
#include<string.h>

float start_point;
float end_point;
float total_area;

int numtraps;

int main () {

    void input(void);
    float find_area(float a, float b, int n);

    printf("AREA UNDER THE CURVE\n\n");

    input();
    total_area = find_area(start_point, end_point, numtraps);

    printf("The total area is %f", total_area);

    return (0);
}

void input(void) {
    printf("Enter the lower limit: ");
    scanf("%f", & start_point);

    printf("Enter the upper limit: ");
    scanf("%f", & end_point);

    printf("Enter the number of trapezoids: ");
    scanf("%d", & numtraps);
}

float find_area(float a, float b, int n) {
    //float width;
    float h1;
    float h2;
    float lower;
    float base;

    float function_x(float x);
    float trap_area(float h1, float h2, float base);

    base = (b - 1) / n;
    lower = a;

    for (lower = a; lower <= b - base; lower = lower + base) {
        h1 = function_x(lower);
        h2 = function_x(lower + base);

        total_area += trap_area(h1 , h2, base);
    }

    return (total_area);
}

float trap_area(float h1, float h2, float base) {
    float area;
    area = 0.5 * (h1 + h2) * base;
    return (area);
}

float function_x(float x) {
    return (x * x + 1);
}