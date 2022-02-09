# Test plan and output
* Test plan is created and verified on both manual and automated manner

# HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Patient Registration Status | values = 19191911919|  -1   |  Not found |
| 02 | Patient Registration Status | values = 19191911919| {0,1} |    Found   |
| 03 | Patient Registration Status | values = 12341234123| -1    |    Found   |


| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Patient Vaccination Status | 0(ID) | 1 | Found |
| 02 | Patient Vaccination Status | 1(ID)) | 1 | Found |
| 03 | Patient Vaccination Status | 2(ID) | 1 | Found |
| 04 | Patient Vaccination Status | 3(ID) | 1 | Found |
| 05 | Patient Vaccination Status | 4(ID) | 1 | Found |

| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Covaxin vaccination viles | {1,1}(ID,VaccStat) | 3 | Found |
| 02 | Covishield vaccination viles | {1,1}(ID,VaccStat) | 1 | Found |
| 03 | Sputnik vaccination vile | {1,1}(ID.VaccStat) | 2 | Found |

# Low LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Patient Registration Status | 1000 (aadhar no) |-1 | -1 (not registered, not vaccinated) |
| 02 | Patient Registration Status | 1000 (aadhar no) | 0 | 0 (registered,Single vaccinated) |
| 03 | Patient Registration Status | 1000 (aadhar no) | 1 | 1 (registered,Double vaccinated) |
| 04 | Patient Registration Status | 2000 (aadhar no) | -1 | 2 (not registered, not vaccinated) |
| 05 | Patient Registration Status | 2000 (aadhar no) | 0 | 3 (registered,Single vaccinated) |
| 06 | Patient Registration Status | 3000 (aadhar no) | -1 | 3 (not registered, not vaccinated) |

| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Patient Vaccination Status | 0(ID) | 1 | 1st Dose |
| 02 | Patient Vaccination Status | 0(ID) | 2 | 2nd Dose |
| 03 | Patient Vaccination Status | 0(ID) | 3 | Both vaccinations |
| 04 | Patient Vaccination Status | 1(ID) | 1 | 1st Dose |
| 05 | Patient Vaccination Status | 1(ID) | 2 | 2nd Dose |
| 05 | Patient Vaccination Status | 2(ID) | 1 | 1st Dose |

| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Covaxin vaccination viles | {1,1}(ID,VaccStat) | 1 | 1 Vile used |
| 02 | Covaxin vaccination viles | {1,2}(ID,VaccStat) | 2 | 2 Viles used |
| 03 | Covaxin vaccination viles | {1,3}(ID,VaccStat) | 2 | 2 Viles used |
| 04 | Covishield vaccination viles |{1,1}(ID,VaccStat) | 1 | 1 Viles used |
| 05 | Covishield vaccination viles |{1,2}(ID,VaccStat) | 2 | 2 Viles used|
| 06 | Sputnik vaccination vile | {1,1}(ID,VaccStat) | 1 | 1 Vile used |

### Best Practices
  *  [x] Checked all the possibilities of output
  *  [x] Mentioned all the inputs for better understanding
  *  [x] Presented in tabular form for easy understanding
  *  [x] Both High level and low level Test plans are shown