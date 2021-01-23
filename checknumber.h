#include<math.h>

int isperfectsqure(int sq)
{
    int q=sqrt(sq);
    return (q*q==sq);

}
int isfibo_number(int n)
{
    return isperfectsqure(5*n*n+4)||isperfectsqure(5*n*n-4);
}


int nth_fibo(int n)
{
    double a=(1+sqrt(5))/2;
    int ans=round((pow(a,n)/sqrt(5)));

    return ans;
}

int isprime(int n)
{

    if(n<1)
        return 0;
    else if(n==1)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int nth_catalan(int n)
{

    unsigned long int arr[n+1];
    arr[0]=arr[1]=1;

    for(int i=2;i<=n;i++){
        arr[i]=0;
        for(int j=0;j<i;j++)
        {
            arr[i]=arr[i]+(arr[j]*arr[i-1-j]);
        }
    }
    return arr[n];

}

int nth_prime(int n){

int count=0;

for(int i=2;i<INT_MAX;i++){
    if(isprime(i))
    {
        count++;
        if(count==n)
        {
            return i;
        }
    }
}

}


