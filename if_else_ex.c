
int main(void) {
    short x = 2;
    short y = 5;

    if (x == 2)
        x = 3;

    if (y == 5) {
        x++;
        y++;
    } else {
        x--;
        y--;
    }

    if (x < 20) {
        x = 20;
    } else if (x > 20) {
        x = 200;
    } else {
        x = 0;
    }

    return 0;
}