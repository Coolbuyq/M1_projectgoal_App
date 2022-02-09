@mainpage project.h

/**
 * @file project.h
 * @author manjuandh
 * @brief Header file for Vaccination Registration with structure and array initialisation
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef PROJECT_H_
#define PROJECT_H_ 
#include<stdio.h>
/**
 * @brief Structure initiated 
 * 
 */
typedef struct person{  
	int age;                    ///<Age in int
	long adhaar_no;             ///<Aadhar number in long 
	long phone_no;              ///<Phone number is long
	int otp;                    ///<OTP in int
	int vaccination_type;       ///<Vaccination type in int 
	int vaccination_status;     ///<Vaccination status in int
	int vaccine_viles1;         ///<Vaccination viles 1
	int vaccine_viles2;         ///<Vaccination viles 2
	int vaccine_viles3;         ///<Vaccination viles 3
}person_details;
person_details pd[2000];        ///<Arry initialised globally
/**
 * @brief Caluclates registration status and returns it to main function
 * 
 * @param a 
 * @return int 
 */
int reg_status(long a);
/**
 * @brief Predefined values helps in comparison
 * 
 * @return int 
 */
int reg();
/**
 * @brief Updates vaccination status and returns it to main function
 * 
 * @param j 
 * @return int 
 */
int vacc_status(int j);
/**
 * @brief Counts number of covaxin vaccination viles used
 * 
 * @param i 
 * @param vstat 
 * @return int 
 */

int covaxin_vacc_viles(int i, int vstat);
/**
 * @brief Counts number of covishield vaccination viles used
 * 
 * @param i 
 * @param vstat 
 * @return int 
 */
int covishield_vacc_viles(int i, int vstat);
/**
 * @brief Counts number of sputnik vaccination viles used
 * 
 * @param i 
 * @param vstat 
 * @return int 
 */

int sputnik_vacc_viles(int i, int vstat);
#endif  /* #define __PROJECT__H__ */