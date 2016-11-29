#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    char ch[300];

    while(gets(ch))
    {
        int count=0, flag=0;

        for(int i=0; i<strlen(ch);i++)
        {
            count++;
            if(!flag && isalpha(ch[i])){
                ch[i]=toupper(ch[i]);
                flag=1;
            }
            printf("%c",ch[i]);
            if(count==sqrt(strlen(ch))){
                    count=0;
                    flag=0;
                printf("\n");
            }
        }
    }
    return 0;
}
