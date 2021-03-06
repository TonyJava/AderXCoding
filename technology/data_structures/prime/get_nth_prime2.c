#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>


//const int inf = 1000000000;
#define inf 1000000000
bool prime[inf];

void fun( )
{
     memset(prime,true,sizeof(prime));
     prime[0] = prime[1] = false;
     for(int i = 4;i < inf; i += 2)
     {
         prime[i]=false;
     }

     double t=sqrt(inf);
     for(int i = 3; i <= t; i += 2)
     {
         if(prime[i])
         {
             int k = i * i, p = i + i;
             for(int j = k;j < inf; j += p)
             {
                prime[j]=false;
            }
         }
     }
}


int main()
{

    fun( );
    int n, cnt=0;
    scanf("%d", &n);
    for(int i = 2; ; ++i)
    {
        if(prime[i] == true)
        {
            printf("the %dth prime is %d\n", cnt + 1, i);
            ++cnt;
        }
        if(cnt == n)
        {
            printf("the %dth prime is %d\n",n,i);
            break;
        }
    }
    return 0;
}
