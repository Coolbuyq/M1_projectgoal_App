
#ifndef PROJECT_H_
#define PROJECT_H_ 
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

int reg_status(long a);

int reg();

int vacc_status(int j);


int covaxin_vacc_viles(int i, int vstat);

int covishield_vacc_viles(int i, int vstat);

int sputnik_vacc_viles(int i, int vstat);
#endif  