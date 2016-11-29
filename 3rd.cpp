#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>
#define LLI long long int
#define LL long long
#define pf printf
#define sc scanf
#define nl printf("\n")
#define si(a) scanf("%d",&a)
#define sd(a) scanf("%lf",&a)
#define sl strlen
#define f0(i,a) for(__typeof(a)i=0;i<a;i++)
#define f1(i,a) for(__typeof(a)i=1;i<=a;i++)
#define fa0(i,a) for(__typeof(a)i=a;i>=0;i--)
#define memo(str,a) memset(str,a,sizeof(str))

using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int row, col;
    while(scanf("%d %d", &row, &col)!=EOF)
    {
        printf("[%d, %d] = ", row,col);
        if(row==0 or col==0)
            printf("0\n");
        else
        {
            int grid1 = (row*col*(row+1)*(col+1))/4; // vertically horizontally grid er jnno

            if (col<row)
            {
                int temp = col;
                col = row;
                row = temp;
            }
            /* diagonal square ber korar jnno*/
            int res1 = (2*col)-row;
            int res2 = (row*row*4)-1;
            int res3 = (res1*res2)-3;

            int diagonal= res3/3;
            printf("%d\n",grid1+diagonal);
        }
    }
    return 0;
}
