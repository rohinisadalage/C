//Write a c code to print the ncr
#include<stdio.h>
int main()
{
    int n,r,nfact=1,rfact=1,nrfact=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    for(int i=2; i<=n; i++)
    {
        nfact=nfact*i;
    }
    for(int i=2; i<=r; i++)
    {
        rfact=rfact*i;
    }
    for(int i=2; i<=n-r; i++)
    {
        nrfact=nrfact*i;
    }
    int ncr=nfact/rfact*(nrfact);
    printf("%d",ncr);
    return 0;
}