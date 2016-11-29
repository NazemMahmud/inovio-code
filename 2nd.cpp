#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<map>
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

using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    string str;
    int inp[200], arr[200], len1;
    while(getline (cin,str))
    {
        int i=0, num;
        stringstream ss(str);
        while(ss>>num)
        {
            inp[i]=num;
            i++;
            len1=i;
        }

        for(i=0; i<len1; i++)
        {
            for(int j=i+1; j<len1; j++)
            {
                if(inp[i]> inp[j])
                {
                    inp[i]^=inp[j];
                    inp[j]^=inp[i];
                    inp[i]^=inp[j];
                }
            }
        }
        for( i=0; i<len1; i++)
            printf("%d ", inp[i]);
        printf("\b\n");
    }
    return 0;
}
