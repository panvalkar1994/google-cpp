// Finding gcd of two positive numbers using Eucleads algorithm with modification

#include<iostream>
using namespace std;

int euclead(int n1, int n2){
    if(n1==0 || n2==0)
    {
        return n1>n2?n1:n2;
    }
    else if(n1>n2)
    {
        return euclead(n2, n1%n2);
    }
    return euclead(n1, n2%n1);
}

int main()
{
    int n1, n2;
    printf("enter two number: ");
    scanf("%d %d", &n1,&n2);
    if (n1==0 || n2==0)
    {
        printf("Both number should be non-zero");
    }
    else
    {
         int gcd = euclead(n1, n2);
        printf("gcd of %d and %d is %d\n", n1,n2,gcd);
    }   
    return 0;
}