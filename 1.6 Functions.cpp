//Author: Shubham B. Rajput
//C++

#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int *x, int *y, int *z, int *s)
{
    int num[4]={*x,*y,*z,*s};
    int max=0;
    for(int i=0;i<4;i++)
    if(num[i]>max)
    max=num[i];
    return max;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(&a, &b, &c, &d);
    printf("%d", ans);
    
    return 0;
}

