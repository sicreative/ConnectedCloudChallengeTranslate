# Demo of Cypress CY8CKIT-062-WIFI-BT connect with AWS IoT ConnectedCloudChallenge Code

Licensed under the Apache License, Version 2.0
 
Demo for element14  Connected Cloud Challenge project

LED and ALS sensor for sense the mail.
Record Sound from TFT shield PDM MIC to on-board FRAM, stream via AWSIoT and work speech to text translate.
Use AWS IoT shadow connected with IOS APP

More detail: 
https://www.element14.com/community/community/design-challenges/connected-cloud-challenge-with-cypress-and-aws-iot/blog/2020/05/09/an-intelligent-mailbox-summary-of-the-challenge-10

## Quick Install 
Mbed and IOS reference of README.md under relative directory.


## Location
1. IOS source ./ios-mailbox
2. Mbed source ./mbed-os-mailbox

### 3. Lambra python source 
lambda.py

Build new lambda function under AWS console and paste it, set relative kinesis stream trigger.

