#include<stdio.h>
typedef struct person{
	int age;
	long adhaar_no;
	long phone_no;
	int otp;
	int vaccination_type;
	int vaccination_status;
	int vaccine_viles1;
	int vaccine_viles2;
	int vaccine_viles3;
}person_details;
person_details pd[2000];
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

int main()
{
	int details,attempt=2000,j,count=0,vaccstat=0;
		int result1=0,result2=0,result3=0;
		int v1=0,v2=0,v3=0;
		reg();
	long a;
while(attempt>0){
	fresh:
	printf("Enter your adhaar number\n");
	printf("Enter 2022 to end for the day or press adhaar number to continue: \n");
	scanf("%li",&a);
    if(a==2022)
	break;	
	int i=1;
	int status=reg_status(a);
	while(i<2000)
	{if(pd[i].adhaar_no==a)
	j=i;
	i++;
}
	if(status==-1)
    {i=1;
	reg();
	while(i<2000)
	{if(pd[i].adhaar_no==0){	
	printf("Details for registration\n");
    pd[i].adhaar_no=pd[0].adhaar_no;
	printf("Enter your phone number:\n");
	scanf("%lu",&pd[i].phone_no);
	printf("Enter your age:\n");
	scanf("%d",&pd[i].age);
	printf("Enter your otp:\n");
	scanf("%lu",&pd[i].otp);
	printf("Your Registration is successful\n");
	break;}	
	i++;}
	goto fresh;
	}	
	else if (status==0)
	{long ph;
	preph:
	printf("Enter your phone no to confirm your identification :");
	scanf("%li",&ph);
	 if(ph==pd[j].phone_no)
	  {
	  if(pd[j].vaccination_type==0)
	 {printf("Choose your vaccination \n");
	 printf("Enter 1 for Covaxin:\n");
	 printf("Enter 2 for Covishield\n");
	 printf("Enter 3 for Sputnik\n");
	 int choice;
	 scanf("%d",&choice);
	 switch(choice){	 
	 	case 1:
	 		pd[j].vaccination_type=1;
	 		printf("THANKS FOR CHOOSING COVAXIN\n");
	 		break;
	 	case 2:
	 		pd[j].vaccination_type=2;
	 			printf("THANKS FOR CHOOSING COVISHIELD\n");
	 		break;
	 	case 3:
	 		pd[j].vaccination_type=3;
	 			printf("THANKS FOR CHOOSING SPUTNIK\n");
	 		break;
	 	default:
	 		printf("Entered option is wrong\nChoose 1 or 2 or 3:\n ");
	 		break;
	 }}}
	 else
	 {printf("Wrong details.Re enter again\n");
	 goto preph;}}	 
	else
	 {long ph1;
	 predose2:
	 printf("Enter your phone no to confirm :");
	scanf("%li",&ph1);
	
	 if(ph1==pd[j].phone_no)
	 goto dose2;
	else
	 {printf("Wrong details.Re enter again\n");
	 goto predose2;}
	 }
	 dose2:	
	vaccstat=vacc_status(j);
	if(vaccstat==1)
	{   if(pd[j].vaccination_type==0||pd[j].vaccination_type==1||pd[j].vaccination_type==2)
		printf("1st Dose Vaccination is Successful\n");
	}
	 	if(vaccstat==2)
	{   if(pd[j].vaccination_type==1)
		printf("congratulation for your 2nd does of vaccination with covaxin\n");
		else if(pd[j].vaccination_type==2)
		printf("congratulation for your 2nd does of vaccination with covishield\n");
		else
		printf("congratulation for your 2nd does of vaccination with sputnik\n");
	}
	  	if(vaccstat==3)
	{   if(pd[j].vaccination_type==1)
		printf("You are done with your both doses of covaxin\n");
		else if(pd[j].vaccination_type==2)
		printf("You are done with your both doses of covishield\n");
		else
		printf("You are done with your both doses of sputnik\n");
	}
    if(pd[j].vaccination_type==1)
	 covaxin_vacc_viles(j,vaccstat);
	 if(pd[j].vaccination_type==2)
	covishield_vacc_viles(j,vaccstat);
	if(pd[j].vaccination_type==3)
	sputnik_vacc_viles(j,vaccstat);
	 attempt--;
	} 
 printf("Details of Total list of patients vaccinated at the end of the day:\n");
    int i=1;
    while(i<2000){
        if(pd[i].adhaar_no!=0){
        	if(i==1)
        	{i++;
        	continue;}
            printf("pd Aadhar:%li\n",pd[i].adhaar_no);
            printf("pd Phone no:%d\n",pd[i].phone_no);
            printf("pd Age:%d\n",pd[i].age);
            printf("pd Vaccine type:%d\n",pd[i].vaccination_type);
            printf("Pd Vaccine dozes:%d\n\n",pd[i].vaccination_status);
            count++;
            result1=result1+pd[i].vaccine_viles1;
            result2=result2+pd[i].vaccine_viles2;
            result3=result3+pd[i].vaccine_viles3;
        }
    i++;
    }
    printf("Total count of people for eod: %d\n",count);
    printf("Total number of viles consumed for each vaccine:\n");
    printf("COVAXIN:%d\n",result1);
    printf("COVISHIELD:%d\n",result2);
    printf("SPUTNIK:%d\n",result3);
 
   	}
	
	
	
	

