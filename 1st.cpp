#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>
#define nl printf("\n")
#define sl strlen
#define f0(i,a) for(__typeof(a)i=0;i<a;i++)
#define f1(i,a) for(__typeof(a)i=1;i<=a;i++)

int main()
{
    //freopen("in.txt","r",stdin);
    char ch[10];
    while(gets(ch))
    {
       if(ch[4]=='0' && ch[5]=='1')
        printf("JAN%c%c\n",ch[2],ch[3]);

       else if(ch[4]=='0' && ch[5]=='2')
        printf("FEB%c%c\n",ch[2],ch[3]);

       else if(ch[4]=='0' && ch[5]=='3')
        printf("MAR%c%c\n",ch[2],ch[3]);

       else if(ch[4]=='0' && ch[5]=='4')
        printf("APR%c%c\n",ch[2],ch[3]);

       else if(ch[4]=='0' && ch[5]=='5')
        printf("MAY%c%c\n",ch[2],ch[3]);

       else if(ch[4]=='0' && ch[5]=='6')
        printf("JUN%c%c\n",ch[2],ch[3]);

       else if(ch[4]=='0' && ch[5]=='7')
        printf("JUL%c%c\n",ch[2],ch[3]);

       else if(ch[4]=='0' && ch[5]=='8')
        printf("AUG%c%c\n",ch[2],ch[3]);

       else if(ch[4]=='0' && ch[5]=='9')
        printf("SEP%c%c\n",ch[2],ch[3]);
       else if(ch[4]=='1' && ch[5]=='0')
        printf("OCT%c%c\n",ch[2],ch[3]);

       else if(ch[4]=='1' && ch[5]=='1')
        printf("NOV%c%c\n",ch[2],ch[3]);

       else if(ch[4]=='1' && ch[5]=='2')
        printf("DEC%c%c\n",ch[2],ch[3]);
    }
    return 0;
}
