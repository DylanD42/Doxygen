/**
 * @file Employee.cpp
 * @author Dylan Daniels
 * @date 2024-12-06
 * @brief Implementation for Employee class
 * 
 * Implements the Employee class, including methods for printing employee details,
 * celebrating anniversaries, and calculating pay.
 */
#include "Employee.h"
#include <iostream>

using namespace std;
/**
 * Default constructor for Employee class.
 *
 * @pre None
 * @post Initializes Employee object with default values (ID, years, hourlyRate, and hoursWorked set to -1)
 * 
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}
/**
 * Parameterized constructor for Employee class.
 *
 * @param int ID Employee's ID
 * @param int years Employee's years of service
 * @param double hourlyRate Employee's hourly rate
 * @param float hoursWorked Total hours worked by the employee
 * @pre None
 * @post Initializes Employee object with the provided values
 * 
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}
/**
 * Prints the details of the employee.
 *
 * @pre Employee object is created
 * @post Employee details, such as ID, years employed, hourly rate, and hours worked, are printed to the output
 * 
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}
/**
 * Celebrates the anniversary of the employee's service by incrementing their years of service
 * and increasing their hourly rate slightly.
 *
 * @pre Employee object is created
 * @post Increments the employee's years of service and increases hourly rate by 0.2%
 * 
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}
/**
 * Calculates the total pay of the employee based on their hourly rate and hours worked.
 *
 * @pre Employee object is created with valid data
 * @return double the calculated pay based on hourly rate and hours worked
 * @post 
 * 
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}
