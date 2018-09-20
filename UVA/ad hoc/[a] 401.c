#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[10000];
	char mirror[1000];
	int f1, f2, i, len;
	memset(mirror, 0, sizeof(mirror));
	mirror['A'] = 'A';
	mirror['E'] = '3';
	mirror['H'] = 'H';
	mirror['I'] = 'I';
	mirror['J'] = 'L';
	mirror['L'] = 'J';
	mirror['M'] = 'M';
	mirror['O'] = 'O';
	mirror['S'] = '2';
	mirror['T'] = 'T';
	mirror['U'] = 'U';
	mirror['V'] = 'V';
	mirror['W'] = 'W';
	mirror['X'] = 'X';
	mirror['Y'] = 'Y';
	mirror['Z'] = '5';
	mirror['1'] = '1';
	mirror['2'] = 'S';
	mirror['3'] = 'E';
	mirror['5'] = 'Z';
	mirror['8'] = '8';

	while(scanf("%s", str)==1){
		f1 = 1;
		f2 = 1;
		len = strlen(str);
		for(i = 0; i <=len/2; i++){
			if(str[i] != str[len-1-i]){
				f2 = 0;
			}
			if(mirror[str[i]] != str[len-1-i]){
				f1 = 0;
			}
		}

		if(f1 && f2){
			printf("%s -- is a mirrored palindrome.\n", str);
		}
		else if(f1){
			printf("%s -- is a mirrored string.\n", str);
		}
		else if(f2){
			printf("%s -- is a regular palindrome.\n", str);
		}
		else{
			printf("%s -- is not a palindrome.\n", str);
		}
		printf("\n");
		strcpy(str,"\0");
	}


	return 0;
}