#include "add.h"
int main(int argc, const char * argv[]) {
    float y,x,a;
    for (y = 1.5f; y > -1.5f; y -= 0.1f) {
        for (x = -1.5f; x < 1.5; x += 0.05f) {
            a = x * x + y * y - 1;
	    printf("\033[31m");
            putchar(a * a * a - x * x * y * y * y <= 0.0f ? 'o' : ' ');
        }
        putchar('\n');
    }
    add();
}
