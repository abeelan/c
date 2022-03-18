# include <stdio.h>
# define PI 3.1415926
# define S(r) PI*r*r

int main() {
    float x = 3.6, area;
    area = S(x);
    printf("r=%f\narea=%f\n", x, area);
    /*
    	r=3.600000
        area=40.715038  
    */
}