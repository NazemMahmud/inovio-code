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
#define memo(str,a) memset(str,a,sizeof(str))
#define pb push_back

using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);

    int N, arr[50][50];
    si(N);

    f0(i,N)
    f0(j,N)
    si(arr[i][j]);

    int temp;

    for(int i=0; i<floor(N/2); i++)
    {
        for(int j=0; j<ceil(N/2); j++)
        {
            temp = arr[N-1-j][i];
            arr[N-1-j][i] = arr[N-1-i][N-1-j];
            arr[N-1-i][N-1-j] = arr[j][N-1-i];
            arr[j][N-1-i] = arr[i][j];
            arr[i][j]= temp;

        }
    }
    f0(i,N){
            f0(j,N){
                printf("%d ",arr[i][j]);
            }
            printf("\b\n");
    }
    return 0;
}
