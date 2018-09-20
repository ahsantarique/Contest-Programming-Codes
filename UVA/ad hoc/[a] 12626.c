#include <stdio.h>
#include <string.h>


int main()
{
    char str[6000];
    int t, len, i, min, x, f;
    int m[6] = {0,0,0,0,0,0};
    
    scanf("%d", &t);
	getchar();
    while (--t >= 0){
        gets(str);
		f = 1;
        len = strlen(str);
        for (i = 0; i<len; i++) {
            switch (str[i]){
                case 'M':
                	x = m[0];
                    m[0] = x + 1;
                    break;
                case 'A':
                	x = m[1];
                    m[1] = x+1;
                    break;
                case 'R':
                	x = m[2];
                    m[2] = x + 1;
                    break;
                case 'G':
                	x = m[3];
                    m[3] = x + 1;
                    break;
                case 'I':
                	x = m[4];
                    m[4] = x + 1;
                    break;
                case 'T':
                	x = m[5];
                    m[5] = x + 1;
                    break;
            }

        }
		x = m[1];
        m[1] = x/3;
        x = m[2];
		m[2] = m[2]/2;		
        min = m[0];

        for (i = 0; i <6; i++){
             if (m[i] < min) min = m[i];
        }
        printf("%d\n", min);
        for(i = 0; i <6; i++) m[i] = 0;
    }

    return 0;
}
