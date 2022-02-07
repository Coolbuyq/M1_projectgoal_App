
#include "project.h"

int reg_status(long a){
	pd[0].adhaar_no=a;
	int i=1;
	while(i<2000){
	if(pd[i].adhaar_no==pd[0].adhaar_no)
	{if(pd[i].vaccination_type==0)
	return 0;
	else 
	{return 1;
	printf("Enter your details for knowing your vaccination status:\n");}
	}
	i++;}
	return -1; 
	}
int reg()
{pd[1].adhaar_no=1;
pd[1].phone_no=1;
pd[1].age=1;
pd[1].otp=1;
}
int vacc_status(int j)
{
{if(pd[j].vaccination_status==0)
{pd[j].vaccination_status++;
return 1;
}
if(pd[j].vaccination_status==1)
{pd[j].vaccination_status++;
return 2;
}
if(pd[j].vaccination_status==2)
{pd[j].vaccination_status++;
return 3;
}
else 
return 0;
}	
}
int covaxin_vacc_viles(int i, int vstat)
{   
 if(pd[i].vaccination_type==1 && (vstat==1 || vstat==2))
        pd[i].vaccine_viles1++;
		}
int covishield_vacc_viles(int i, int vstat)	
   { 
	  if(pd[i].vaccination_type==2 && (vstat==1 || vstat==2))
        pd[i].vaccine_viles2++;	}
int sputnik_vacc_viles(int i, int vstat)	
   { 
	  if(pd[i].vaccination_type==3 && (vstat==1 || vstat==2))
    	pd[i].vaccine_viles3++;	
			}	


	
	
	

