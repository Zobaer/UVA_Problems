
#include <stdio.h>
#include<string.h>

int main()
{
    int T;
    char *str;
    int score,len,zcount;
    scanf("%d",&T);
    for(int i = 1;i<=T;i++){
        scanf("%s",str);
        len = strlen(str);
        score = 0;
        zcount = 0;
        for(int j = 0; j<len;j++){
            if (str[j]=='O'){
                zcount++;
                score+=zcount;
            }
            else
                zcount = 0;
        } 
        printf("%d\n",score);
    }
    return 0;
}
