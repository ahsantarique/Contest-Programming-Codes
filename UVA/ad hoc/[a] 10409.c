#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, temp;
    char command[20];
    const char const_dice[] = "421563";
    char dice[6];

    scanf("%d", &n);

    while(n){
        for(i = 0; i < 6; i++){
            dice[i] = const_dice[i];
        }
        dice[i] = '\0';
        
        for(i = 1; i <= n; i++){
        	scanf("%s", command);
        	
            if (strcmp(command, "north") == 0){
                temp = dice[3];
                dice[3] = dice[4];
                dice[4] = dice[1];
                dice[1] = dice[2];
                dice[2] = temp;
            }
            else if (!strcmp(command, "south")){
                temp = dice[3];
                dice[3] = dice[2];
                dice[2] = dice[1];
                dice[1] = dice[4];
                dice[4] = temp;
            }
            else if(!strcmp(command, "east")){
                temp = dice[5];
                dice[5] = dice[4];
                dice[4] = dice[0];
                dice[0] = dice[2];
                dice[2] = temp;
            }
            else{
                temp = dice[2];
                dice[2] = dice[0];
                dice[0] = dice[4];
                dice[4] = dice[5];
                dice[5] = temp;
            }
            strcpy(command, "0");
        }
        printf("%c\n", dice[2]);
        scanf("%d", &n);
    }
    return 0;
}
