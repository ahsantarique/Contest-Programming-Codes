#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int h, m;
    double angle_h, angle_m, angle;
    char hour[2], minute[2];
    int i, k;
    char str[5];

    gets(str);
    while(strcmp(str, "0:00")){
        for (i = 0; i <= 2; i++){
            if (str[i] == ':') break;
            hour[i] = str[i];
        }
        hour[i] = '\0';
        h = atoi(hour);

        minute[0] = str[i+1];
        minute[1] = str[i+2];
        minute[2] = '\0';

        m = atoi(minute);

        angle_h = (h*30 + m*6.0/12.0);
        if (angle_h >= 360) angle_h -= 360;
        angle_m = m*6;
        angle = angle_h - angle_m;
        if (angle < 0) angle = -angle;
        if (angle > 180) angle = 360 - angle;

        printf("%.3lf\n", angle);

        gets(str);
    }
    return 0;
}
