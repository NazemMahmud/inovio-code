#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>
#define LLI long long int
#define LL long long
#define sl strlen
#define f0(i,a) for(__typeof(a)i=0;i<a;i++)
#define f1(i,a) for(__typeof(a)i=1;i<=a;i++)
#define fa0(i,a) for(__typeof(a)i=a;i>=0;i--)

using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    string str;
    int arr[200], len1,minm;
    while(getline (cin,str))
    {
        int i=0, num, count1=0, count2=0;

        stringstream ss(str);
        while(ss>>num)
        {
            arr[i]=num;
            if(arr[i]==0) count1++;

            else if(arr[i]==1) count2++;

            i++;
        }
        minm = min(count2,count1);
        printf("1 to %d\n", minm*2);
    }
    return 0;
}

