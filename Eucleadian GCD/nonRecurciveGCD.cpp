// GCD for two numbers using simple approach for positive numbers only for simplicity
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> factorization(int n)
{
    vector<int> factors;
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            factors.push_back(i);
        }
    }

    return factors; 
}

int gcd(vector<int> vec1, vector<int> vec2)
{
    int gcd=1;
    int l1 = vec1.size();
    int l2 = vec2.size();
    if (l1<l2)
    {
       for (int i = l1 - 1; i >= 0; i--)
       {
           auto it = find(vec2.begin(), vec2.end(), vec1[i]);
           if (it!=vec2.end())
           {
               gcd = vec1[i];
               return gcd;
           }
           
       }
               
    }
    else
    {
        for (int i = l2 - 1; i >= 0; i--)
       {
           auto it = find(vec1.begin(), vec1.end(), vec2[i]);
           if (it!=vec1.end())
           {
               gcd = vec2[i];
               return gcd;
           }
           
       }
    }
    return gcd;
    
}

int main()
{
    int n1, n2;
    printf("enter two number: ");
    scanf("%d %d", &n1,&n2);
    vector<int> factors1 = factorization(n1); // factors of n1
    vector<int> factors2 = factorization(n2); // factors of n2
    int res = gcd(factors1,factors2);
    printf("gcd of %d and %d is %d\n", n1,n2,res);
    return 0;

}