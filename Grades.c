#include <stdio.h>
 
int main()
{
    int marks[]={89,78,56,78,90}
 
    
 
    printf(" Total Marks = %.2f\n", Total);
    printf(" Marks Percentage = %.2f", Percentage);
    
    if(Percentage >= 90)
    {
    	printf("\n Grade A");
	}
	else if(Percentage >= 80)
    {
    	printf("\n Grade B");
	}
	else if(Percentage >= 70)
    {
    	printf("\n Grade C");
	}
	else if(Percentage >= 60)
    {
    	printf("\n Grade D");
	}
	else if(Percentage >= 40)
    {
    	printf("\n Grade E");
	}
	else 
    {
    	printf("\n Fail");
	} 
    return 0;
}
   
