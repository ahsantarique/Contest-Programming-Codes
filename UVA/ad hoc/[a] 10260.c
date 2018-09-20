#include <stdio.h>

/* DONE */

int main()
{
	char str[100];
	int f1, f2, f3, f4, f5, f6;

	while(gets(str)){
		int i = 0;
		f1 = f2 = f3 = f4 = f5 = f6 = 1;
		for( ; str[i]; i++){
			switch(str[i]){
				case 'B':
				case 'F':
				case 'P':
				case 'V':
					if (f1) printf("1");
					f1 = 0;
					f2 = f3 = f4 = f5 = f6 = 1;
					break;
				case 'C':
				case 'G':
				case 'J':
				case 'K':
				case 'Q':
				case 'S':
				case 'X':
				case 'Z':
					if (f2) printf("2");
					f2 = 0;
					f1 = f3 = f4 = f5 = f6 = 1;
					break;
				case 'D':
				case 'T':
					if (f3) printf("3");
					f3 = 0;
					f1 = f2 = f4 = f5 = f6 = 1;
					break;
				case 'L':
					if (f4) printf("4");
					f4 = 0;
					f1 = f2 = f3 = f5 = f6 = 1;
					break;
				case 'M':
				case 'N':
					if (f5) printf("5");
					f5 = 0;
					f1 = f2 = f3 = f4 = f6 = 1;
					break;
				case 'R':
					if (f6) printf("6");
					f6 = 0;
					f1 = f2 = f3 = f4 = f5 = 1;
					break;
				default:
					f1 = f2 = f3 = f4 = f5 = f6 = 1;
			}
		}
		printf("\n");
	}
	
	return 0;
}
