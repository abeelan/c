# include <stdio.h>

// 输入三边长，求三角形的面积

int main() {
    void triangle(void);

    triangle();

    return 0;
}

void triangle() {
    // 输入三边长，求三角形的面积
    float a, b, c, s, area;
    scanf("%f%f%f", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("a=%.2f b=%.2f c=%.2f \ns = %.2f\narea = %.2f\n", a, b, c, s, area);

    /*
        a=3.00 b=4.00 c=6.00
        s = 6.50
        area = 5.33
    */
}

