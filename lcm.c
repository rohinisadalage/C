#include<stdio.h>
#include<conio.h>
int main()
{
	int k,a,b,i,j,limit,arr_a[10],arr_b[10],arr_c[10],m[0];
	printf("Enter the value of a:");
	scanf("%d",&a);
	
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	if(b%a==0)
	{
		printf("LCM is %d",b);
	}
	else
	{
	    for(i=1; i<=10; i++)
	    {
	    printf(" %d\n",a*i);
	    arr_a[i-1]=a*i;
	    }
		for(j=1; j<=10; j++)
	    {
        printf(" %d\n",b*j);
        arr_b[j-1]=b*j;
	    }
    }
	    printf("The same values in the table a and table b are:");
	    for(i =0;i<10;i++)
		{ 
	    	for(j=0;j<10;j++)
			{ 
	    		if(arr_a[i]==arr_b[j])
	    		  {
	    		  	arr_c[k++]=arr_b[j];
	    		  	
					break;		
				  }
				
			}
		 limit =k;	
		}	    	
		for(k=0; k<limit; k++)
		{
			printf("%d\n",arr_c[k]);
		}
	
		int min=arr_c[0];
		
		for(i=1; i<limit; i++)
		{
			if(arr_c[i]<min)
			{
				min=arr_c[i];
			}
		}
		printf("The LCM for given no is :%d",min);
    
	return 0;	
}




