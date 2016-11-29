#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#define LLI long long int
#define LL long long
using namespace std;

LL triangle(int num)
{
   LL piramid = 1;
   for(int i=1; i<=num; i++)
         piramid *= i;
   return piramid;
}
int main()
{
   int row=6, colm;

   for(int i=0; i<row; i++)
   {
      for(colm=0; colm<=(row-2-i); colm++)
         printf(" ");

      for(colm=0; colm<=i; colm++)
         printf("%ld ",triangle(i)/(triangle(colm)*triangle(i-colm)));
      printf("\n");
   }

   return 0;
}
