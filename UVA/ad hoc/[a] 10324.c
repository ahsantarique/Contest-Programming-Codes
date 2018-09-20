#include <stdio.h>

/*///////////////// SHOULD BE CAREFUL WHEN DEALING WITH BOTH GETS AND SCANF ////////////////////////////*/

int main()
{
    char str[1000000], ch;
    long long n, i, j, k, case_no = 0;
	int flag;
	
    while(gets(str)){
        scanf("%lld", &n);
        printf("Case %lld:\n", ++case_no);
        while(n--){
            scanf("%lld %lld", &i, &j);
            flag = 1;
            if(i > j){
                i = i + j;
                j = i - j;
                i = i - j;
            }
            ch = str[i];
            for(k = i; k <= j; k++){
                if(str[k] != ch){
                	flag = 0;
                	break;
            	}
            }
            if (!flag) printf("No\n");
            else printf("Yes\n");
        }
        getchar();
    }
    return 0;
}
