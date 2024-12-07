/**
 * @file Officer.cpp
 * @author Dylan Daniels
 * @date 2024-12-06
 * @brief Implementation for Officer class derived from Employee class
 * 
 * Implements the Officer class, which is a derived class from the Employee class.
 * It adds a unique attribute for evilness and overrides methods for printing and calculating pay.
 */
#include "Officer.h"
#include <iostream>

using namespace std;
/**
 * Default constructor for Officer class.
 *
 * @pre None
 * @post Initializes evilness to a default value of 500.
 * 
 */
Officer::Officer() {
  evilness = 500;
}
/**
 * Parameterized constructor for Officer class.
 *
 * @param int ID Officer's ID
 * @param int years Officer's years of service
 * @param double hourlyRate Officer's hourly rate
 * @param float hoursWorked Total hours worked by the officer
 * @param double evilness The officer's level of evilness
 * @pre None
 * @post Initializes Officer object with the provided values and calls the Employee constructor
 *       to initialize base class attributes.
 * 
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}
/**
 * Prints the details of the Officer.
 *
 * @pre Officer object is created
 * @post Prints details inherited from the Employee class as well as the Officer's evilness value
 * 
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}
/**
 * Calculates the total pay of the Officer.
 * Overrides the base class method to factor in evilness.
 *
 * @pre Officer object is created with valid data
 * @return double the calculated pay based on hourly rate, evilness, and hours worked
 * @post 
 * 
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
