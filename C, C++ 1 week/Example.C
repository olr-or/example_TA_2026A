// 1
int main() {
    int a = 7;
    int b = 2;

    int r1 = a / b;
    double r2 = a / b;
    double r3 = (double)a / b;

    return 0;
}

// 2
int main() {
    int x = 5;

    int a = x++;
    int b = ++x;

    return 0;
}

// 3
int main() {
    char ch = 'A';

    int ascii = ch;
    ch = ch + 3;

    return 0;
}

// 4
int main() {
    int x = 10;

    x += 5;
    x *= 2;
    x -= 8;

    return 0;
}

// 5
int main() {
    int a = 2, b = 3, c = 4;

    int r = a + b * c;

    return 0;
}

// 6
int main() {
    int x = 2147483647;

    int y = x + 1;

    return 0;
}

// 7
int main() {
    unsigned int x = 0;

    unsigned int y = x - 1;

    return 0;
}

// 8
int main() {
    int a = 5;
    int b = 2;

    double r1 = a / b;
    double r2 = (double)(a / b);
    double r3 = (double)a / b;

    return 0;
}

// 9
int main() {
    int x = 10;
    int y = 20;

    int r1 = (x < y);
    int r2 = (x > y);
    int r3 = (x < y && y < 30);
    int r4 = (x > y || y == 20); 

    return 0;
}

// 10
int main() {
    int a = 3;
    int b = 4;

    int r = a++ + ++b * 2; 

    return 0;
}
