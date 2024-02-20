/*
** EPITECH PROJECT, 2022
** star
** File description:
** make a star
*/

void first_or_last(int middle)
{
    int i;
    i = 1;
    while (i < ((middle * 2 + 1) + middle + 1)) {
        my_putchar(' ');
        i = i + 1;
    }
    my_putchar(42);
    my_putchar('\n');
}

void display_left_side(int count, int line)
{
    int i;
    i = 0;
    while (i < ((count * 2 + 1) + count + 1)) {
        if (i == ((count * 2 + 1) + count + 1) - line) {
            my_putchar(42);
            } else if (i < ((count * 2 + 1) + count) + 1) {
            my_putchar(' ');
            }
        i = i + 1;
    }
    i = 1;
    while (i < ((count * 2 + 1) + count + 1)) {
        if (i == line - 1) {
            my_putchar(42);
        } else if (i > line) {
            my_putchar('\n');
            return;
        } else if (i < line - 1) {
            my_putchar(' ');
        }
        i = i + 1;
    }
}

void display_stars_line(int count, int line)
{
    int i;
    i = 0;
    while (i <= ((count * 2) + count)) {
        if (i == ((count * 2 + 1) + count)) {
            my_putchar(' ');
        } else if (i <= (count * 2 + 2)) {
            my_putchar(42);
        }
        i = i + 1;
    }
    i = 0;
    while (i < count) {
        my_putchar(' ');
        i = i + 1;
    }
    i = 0;
    while (i <= ((count * 2) + count)) {
        if (i == ((count * 2 + 1) + count)) {
            my_putchar(' ');
        } else if (i <= (count * 2 + 1)) {
            my_putchar(42);
        }
        i = i + 1;
    }
    my_putchar('\n');
}

void display_left_to_right_star(int count, int line)
{
    int i;
    i = 1;
    while (i <= ((count * 7))) {
        if (i == line - count + 1) {
            my_putchar(42);
        } else if (i == ((count * 8) - line - 1)) {
            my_putchar(42);
        } else if (i < ((count * 8) - line)) {
            my_putchar(' ');
        }
        i = i + 1;
    }
    while (i <= ((count * 2) + count)) {
        if (i == ((count * 2) + count) - line) {
            my_putchar(42);
        } else {
            my_putchar(' ');
        }
        i = i + 1;
    }
    my_putchar('\n');
}

int display_top(int from, int count)
{
    int i;
    i = from;
    while (i <= count) {
        display_left_side(count, i);
        i = i + 1;
    }
    i = i + 1;

    return (i);
}

int display_sides(int count, int i)
{
    int j;
    j = i - 1;
    while (j < count * 2) {
        display_left_to_right_star(count, j);
        j = j + 1;
    }
    i = i - 1;
    while (j > count) {
        display_left_to_right_star(count, j);
        j = j - 1;
    }
    return (j);
}

void display_bottom(int count, int from)
{
    int i;
    i = from;
    while (i >= 2) {
        display_left_side(count, i);
        i = i - 1;
    }
}

void star(int count)
{
    int i;
    int j;
    i = 2;
    if (count == 0) {
        return;
    }
    first_or_last(count);
    i = display_top(i, count);
    display_stars_line(count, i);
    i = display_sides(count, i);
    display_stars_line(count, i);
    display_bottom(count, i);
    first_or_last(count);
}
