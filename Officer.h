/**
 * @file Officer.h
 * @author Dylan Daniels
 * @date 2024-12-06
 * @brief Header file for Officer class, which inherits from Employee class
 * 
 * Defines an Officer class that extends the Employee class by adding an additional attribute for evilness,
 * along with overridden methods for printing details and calculating pay specific to an officer.
 */
#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"
/**
 * Officer class
 *
 * @class Officer{ Officer.h "Officer.h"
 * @brief Represents an officer who is a type of employee with an additional attribute for evilness.
 *        The class overrides methods to calculate pay and print details specific to an officer.
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:
   /**
   * Prints the details of the officer, including the evilness level.
   *
   * @pre Officer object is created
   * @post Officer details, including evilness, are printed to the output
   * 
   */
  void print();
  /**
   * Calculates the total pay of the officer, possibly factoring in evilness.
   *
   * @pre Officer object is created with valid data
   * @return double the calculated pay based on the officer's hourly rate, hours worked, and potentially evilness
   * @post 
   * 
   */
  double calculatePay();
  /**
   * Default constructor for Officer class.
   *
   * @pre None
   * @post Creates an Officer object with default values, including evilness
   * 
   */
  Officer();
   /**
   * Constructor for Officer class with parameters.
   *
   * @param int ID officer's ID
   * @param int years officer's years of service
   * @param double hourlyRate officer's hourly rate
   * @param float hoursWorked total hours worked by the officer
   * @param double evilness the officer's level of evilness
   * @pre None
   * @post Creates an Officer object with the provided values
   * 
   */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
