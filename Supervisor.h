/**
 * @file Supervisor.h
 * @author Dylan Daniels
 * @date 2024-12-06
 * @brief Header file for Supervisor class, which inherits from Employee class
 * 
 * Defines a Supervisor class that extends the Employee class by adding an additional attribute for the number of employees supervised,
 * along with overridden methods for printing details and calculating pay specific to a supervisor.
 */
#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"
/**
 * Supervisor class
 *
 * @class Supervisor{ Supervisor.h "Supervisor.h"
 * @brief Represents a supervisor who is a type of employee with an additional attribute for the number of employees supervised.
 *        The class overrides methods to calculate pay and print details specific to a supervisor.
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:
   /**
   * Prints the details of the supervisor, including the number of employees supervised.
   *
   * @pre Supervisor object is created
   * @post Supervisor details, including the number of employees supervised, are printed to the output
   * 
   */
  void print();
  /**
   * Calculates the total pay of the supervisor, possibly factoring in the number of employees supervised.
   *
   * @pre Supervisor object is created with valid data
   * @return double the calculated pay based on the supervisor's hourly rate, hours worked, and potentially the number of employees supervised
   * @post 
   * 
   */
  double calculatePay();
   /**
   * Default constructor for Supervisor class.
   *
   * @pre None
   * @post Creates a Supervisor object with default values, including the number of employees supervised
   * 
   */
  Supervisor();
  /**
   * Parameterized constructor for Supervisor class.
   *
   * @param int ID supervisor's ID
   * @param int years supervisor's years of service
   * @param double hourlyRate supervisor's hourly rate
   * @param float hoursWorked total hours worked by the supervisor
   * @param int numSupervised the number of employees supervised by the supervisor
   * @pre None
   * @post Creates a Supervisor object with the provided values
   * 
   */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
