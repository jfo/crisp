#include <stdio.h>



void try() {
    puts("This is a string");
}

void try2(int x) {
    while(x > 0) {
        puts("Yipeeee!");
        x--;
    }
}

int main() {
    for (int i = 0; i < 5; i++) {
        puts("Hello World!");
    }

    puts("\n\n");

    int i = 10;
    while (i > 0) {
        puts("Hello World! from a while loop");
        i = i - 1;
    }

    try();
    try2(100);

    return 0;
}

