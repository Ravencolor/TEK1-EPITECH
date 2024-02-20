/*
** EPITECH PROJECT, 2023
** move
** File description:
** move
*/

#include "../include/need.h"
#include "../include/my.h"

void speed(float middle)
{
    int checkpoint[6] = {2000, 1500, 1000, 600, 400, 0};
    char *speed[6] = {"1.2", "1", "0.8", "0.5", "0.4", "0.2"};

    for (int i = 0; i != 6; i++)
        if (middle >= checkpoint[i]) {
            execute_cmd(MOVE, "", speed[i]);
            return;
        }
}

char *set_sign(float right, float left)
{
    if (left - right < 0)
        return "-";
    return "";
}

void set_dir(float right, float middle, float left)
{
    char *sign = set_sign(right, left);
    int checkpoint[6] = {1500, 1000, 600, 400, 200, 0};
    char *dir[6] = {"0.005", "0.05", "0.1", "0.2", "0.3", "0.5"};

    for (int i = 0; i != 6; i++)
        if (middle >= checkpoint[i]) {
            execute_cmd(ROTATE, sign, dir[i]);
            return;
        }
}

int move(char **infos)
{
    float right;
    float middle;
    float left;
    int len = len_array(infos);

    if (len < RIGHT_LASER)
        return 1;
    right = atof(infos[RIGHT_LASER]);
    middle = atof(infos[MIDDLE_LASER]);
    left = atof(infos[LEFT_LASER]);
    speed(middle);
    set_dir(right, middle, left);
    return 0;
}
