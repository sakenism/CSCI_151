#include <stdio.h>
#include <stdlib.h>  
#include <string.h>


int pwr10(int n)
{
	int i, ans = 1;

	for(i = 1; i <= n; i++)
	{
		ans *= 10;	
	}
	return ans;
}  	


char arr[33333], temp1[11111], temp2[11212], temp3[1121] ;

int main()
{
//    FILE *file;
  //  file = fopen("a.in", "r");                                
    int i, sum = 0, ind = 0;
//    fscanf(file, "%s", arr);
//    printf("%s", arr);
    
        scanf("%s", arr);
        for(i = 0; i < strlen(arr); i++)
        {
        	//2.114e2
        		if(arr[i] == '.')
        		{
        			ind = i + 1;
        			printf("%s", temp1);
        			break;
        		}
        		else if(!(arr[i] >= '0' && arr[i] <= '9'))
        		{
        			printf("%s", temp1);
        			return 0;
        		}
        		else
        		{
        			temp1[i] = arr[i];
        		}
        		if(i == strlen(arr) - 1)
        		{
        			printf("%s", temp1);
        			return 0;
        		}
        }
        
        int j = 0;
        for(i = ind; i < strlen(arr); i++)
        {

        		if(arr[i] == 'e')
        		{
        			ind = i + 1;
        			//printf("%s", temp2);
        			break;
        		}
        		else if(!(arr[i] >= '0' && arr[i] <= '9'))
        		{
        			 //printf("%s", temp2);
        			 return 0;
        		}
        		else
        		{
        			temp2[j] = arr[i];
        			j++;
        		}
        		if(i == strlen(arr) - 1) 
        		{
					printf(".%s", temp2);
					return 0;       			
        		}
        }
        j = 0;            
        for(i = ind; i < strlen(arr); i++)
        {
        		if(!(arr[i] >= '0' && arr[i] <= '9'))
        		{
        			break;
        		}
        		else
        		{
        			temp3[j] = arr[i];
        			j++;
        		}              
		}		
		int cntnum2 = 0, num3 = atoi(temp3), num2 = atoi(temp2);
		int tmp = num2;
		while(tmp > 0)
		{
			cntnum2++;
			tmp /= 10;
		}
		if(cntnum2 <= num3)
		{
			//printf("!");
			int dif = num3 - cntnum2;
			printf("%s", temp2);
			for(i = 1; i <= dif; i++)
			{
				printf("0");
			}	
			printf(".0");
		}
		else
		{
			//printf("@");
			for(i = 0; i < strlen(temp2); i++)
			{
				printf("%c", temp2[i]);
				if(i + 1 == num3)
				{
					printf(".");
				}
			}
		}


		/*
		for(i = 0; i < strlen(temp2); i++)
		{
			printf("%c", temp2[i]);
		}*/          
}