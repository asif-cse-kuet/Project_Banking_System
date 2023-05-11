/**
Simple Banking System Project using OOP concept in C++
Author Details :
Asif Hasan Tonmoy
KUET, CSE 2k17, Roll: 1707075
Email Id: asifhasan.cse75@gmail.com
**/



/**
OOP Concepts that will be covered:
Instance
Object
Class
Inheritance
Polymorphism
Abstraction
Encapsulation

Coupling
Cohesion
Association
Aggregation
Composition
**/


/** Project Details :
2 panel -> User panel, Admin Panel

For User Panel:
1) Registration
2) Log In
3) General Info -> Info About the program and Author

Registration:
Short_Reg -> 1.1 to 1.4
1.0) Reg_Number (automatically generated)
1.1) Full Name
1.2) First Name
1.3) NID Number
1.4) PassWord
1.5) Email
1.6) Job Details
1.7) Initial Deposit
1.8) Non Refundable Deposit
1.9) Beneficial Name
1.10) Relation with Beneficial Name



Login:
Reg_number, Pass


Access:
User can only see all his details, but uable to modify.
Admin can edit or delete any info.

**/


//Including User Class
#include "user.h"

//Including all other libraries
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <assert.h>
#include <io.h>
#include <algorithm>


using namespace std;

int main()
{
    user user1;
    user1.UserDashboard();
    return 0;
}
