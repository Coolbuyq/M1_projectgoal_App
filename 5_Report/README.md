# Vaccination Registration App Report
---
## Design Thinking Process
 * **Empathize**  Here all the information is gathered about the problem of making a Local database applications 
 * **Define** The use of Vaccine registration helps in cease less flow of work due to a local server and helps in quicker register with easy patients list generation
 * **Ideate** Got the idea about Vaccine Registration Application by brainstroming according to the present day scenario in daily lifes.
 * **Prototype** This is the prototype of the Vaccine Registration Application
 * **Test** The Application I created is well tested with different inputs
 ---
 ## Identifying features
* Screen guides how to enter the details.
* Very friendly interface and even children can use it
* Administrator can get the list of vaccinated people by the end of every day.
* No crashing happens so that work can be done without any breaks. 

## State of art/ Research
 In Covid 19 the requirement of vaccination became necessary, so Government created a central server for vaccination purpose.But due to the large amount of traffic the central    server is crashing, so in order to decrease the traffic i created alocal server to register the data locally so that in the end of the day we can upload the data of people registered,vaccinated,no of viles used and total number of people that have been vaccinated on the respected days.By doing this it helps in maintaining the traffic properly and avoid unnecessary issues.
 
 Maintaining the local data helps in resolving issues and irrespective of central server, the work can be done even if the site works or not.This helps in continuous flow of work and increases the speed of productivity of vaccination.
 
 The local server stores the data of 1000 people after verification and confirmation of ADHAAR Number,Phone Number and stores the data in the local server.Hence forth it can be used in future for any further reference.
 

## 4 W's and 1H
# Who
Patient who needs to be vaccinated.
# What
Verify the details of the patient using the alloted data and providing the list of patients at the end of the day.
# When
During the time alloted for vaccination.
# Where
Local vaccination centre.
# How
Registration and on field verification using ADHAAR nad Phone number.

## SWOT
![SWOT](https://user-images.githubusercontent.com/94365143/153056308-10ccb1a3-b776-4ebe-ba62-6cb13d0216d3.jpg)

## High Level Requirements
* System can be able to store the data and can be provided at the end of the day
* User should be able to add new registrations	
* System recognizes vaccinated patients		
* System validates the invalid credentials	and ask us to enter again if any wrong data is entered
* System is updated into locally after eac and every vaccination taken
* User can have only single account with one adhhar number


## Low Level Requirements
* Details of user should be enterd by us 
* User is alowed to select vaccine type	by pressing a number 
*	Total quantity of vaccines and people vaccinated can be obtained by pressing 2022
*	Full list of vaccinated people and number of viles used must is printed as output as output	
*	Patients vaccination status can be tracked by entering their ADHAAR and Phone number


## Best method followed
 * Used functions to decrease dependency on main function
 * Used structures and arrays to accept the inputs from user and store the values which helped in creating easy design of vaccination website locally
 * Printf statements have been placed only wherever necessary to avoid confusions
 * Created header file so that the fuctions can be used else where ever required without any difficulty
 * Unit testing is done to avoid any computational errors. 

 
 ## Problems Attained
  * For creating a large database.
  * To get updated with vaccination status and update the other values in database accordingly
  * To know whether phone number is existing in previous database or not after confirming with Aadhar number. 
  If entered wrong it should ask again to enter the Phone number until it is matched
  
 ## Solutions Attained
  * Initialised a global array with structure implementation
  * Stored the values in global array of structures and checked it with loops
  * Used go to statements for implementation of problem 3
  
 #### * Documentation is also done for the project with Doxygen
 #### * All Codacy, Codiga, Unity, Dynamic Check, Static Check, Linux build is done

 #### * Implementation is done and the file runs succesfully

#### * The Architecture  (Behavioural, Structural) both high and low level is also created
