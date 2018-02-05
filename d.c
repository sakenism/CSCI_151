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

int j = 0, lz;


char arr[33333], temp1[11111], temp2[11212], temp3[1121], tempp[11212];
int main()                                                           
{
    FILE *file;
    file = fopen("a.in", "r");                                
    int iff = 0, i, sum = 0, ind = 0;
//    fscanf(file, "%s", arr);
//    printf("%s", arr);
    
        fscanf(file, "%s", arr);
        /*
		  for(i = 0; i < strlen(arr); i++)
		  {
			  if(arr[i] == 'e' && arr[i + 1] == '-')
			  {
			     iff = 1;
			     ind = i + 2;
			  }
		  }
		  if(!iff)
		  {
		  		for(i = ind; i < strlen(arr); i++)
 			   {
		  			if(arr[i] >= '0' && arr[i] <= '9')	
		  			{
		  				tempp[j] = arr[i];
		  				j++;
		  			}
		  		}
		  		for(i = 0; i < strlen(arr); i++)
		  		{
		  			if(arr[i] >= '0' && arr[i] <= '9')	
		  			{
		  				lz++;
		  			}	
		  		}
		  
		  		int nm = atoi(tempp);	
	         int qcnt = 0, qw = nm;
		  		while(qw > 0)
		  		{
		      	qw /= 10;
		      	qcnt++;
		  		}
		  		if(lz > qcnt)
		  		{
		  			int dif = lz - qcnt - 1;
		  			for(i = 0; i < j; i++)
		  			{
		  				printf("%c", arr[i]);
		  				if(i == dif)
		  				{
		  					printf(".");
		  				}
		  			}
		  			for(i = j; i < strlen(arr); i++)
		  			{
		  				printf("%c", arr[i]);
		  			}
		  		}
		  		else
		  		{
		  			int dif = qcnt - lz + 1;

		  		}
		  }
		                         */
		  

		  			     	


			



        for(i = 0; i < strlen(arr); i++)
        {
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
			if(num2 == 0)
				dif--;
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
