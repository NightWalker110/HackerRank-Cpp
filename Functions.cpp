#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a,int b,int c,int d)
{
    int g;
    if(a>b && a>c && a>d)
    {
        g = a;
    }
    else if(b>a && b>c && b>d)
    {
        g = b;
    }
    else if(c>a && c>b && c>d)
    {
        g = c;
    }
    else if(d>a && d>b && d>c)
    {
        g = d;
    }
return g;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
