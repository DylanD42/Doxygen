/**
 * @file Supervisor.cpp
 * @author Dylan Daniels
 * @date 2024-12-06
 * @brief Implementation for Supervisor class derived from Employee class
 * 
 * Implements the Supervisor class, which is a derived class from the Employee class.
 * It adds a unique attribute for the number of employees supervised and overrides methods
 * for printing and calculating pay.
 */
#include "Supervisor.h"
#include <iostream>

using namespace std;
/**
 * Default constructor for Supervisor class.
 *
 * @pre None
 * @post Initializes numSupervised to a default value of -1.
 * 
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}
/**
 * Parameterized constructor for Supervisor class.
 *
 * @param int ID Supervisor's ID
 * @param int years Supervisor's years of service
 * @param double hourlyRate Supervisor's hourly rate
 * @param float hoursWorked Total hours worked by the supervisor
 * @param int numSupervised Number of employees supervised by the supervisor
 * @pre None
 * @post Initializes Supervisor object with the provided values and calls the Employee constructor
 *       to initialize base class attributes.
 * 
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}
/**
 * Prints the details of the Supervisor.
 *
 * @pre Supervisor object is created
 * @post Prints details inherited from the Employee class as well as the number of employees supervised
 * 
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}
/**
 * Calculates the total pay of the Supervisor.
 * Overrides the base class method to include an additional bonus based on the number of employees supervised.
 *
 * @pre Supervisor object is created with valid data
 * @return double the calculated pay based on hourly rate, hours worked, and a bonus for supervising employees
 * @post 
 * 
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
