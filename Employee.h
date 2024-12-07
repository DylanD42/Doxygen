/**
 * @file Employee.h
 * @author Dylan Daniels
 * @date 2024-12-06
 * @brief Header file for Employee class
 * 
 * Defines an Employee class that represents an employee with basic attributes like ID, years of 		service,
 * hourly rate, and hours worked. The class includes methods for printing employee details, calculating pay,
 * and celebrating anniversaries.
 */
 #ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * Employee class
 *
 * @class Employee{ Employee.h "Employee.h"
 * @brief Represents an employee with basic attributes such as ID, years of service, hourly rate, and hours worked.
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:
  /**
   * Prints the details of the employee.
   *
   * @pre Employee object is created
   * @post Employee details are printed to the output
   * 
   */
  virtual void print();
  /**
   * Calculates the total pay of the employee.
   *
   * @pre Employee object is created with valid data
   * @return double the calculated pay based on hourly rate and hours worked
   * @post 
   * 
   */
  virtual double calculatePay();
   /**
   * Celebrates the anniversary of the employee's service.
   *
   * @pre Employee object is created
   * @post Increments the years of service for the employee
   * 
   */
  void anniversary();
    /**
   * Default constructor for Employee class.
   *
   * @pre None
   * @post Creates an Employee object with default values
   * 
   */
  Employee();
   /**
   * Parameterized constructor for Employee class.
   *
   * @param int ID employee's ID
   * @param int years employee's years of service
   * @param double hourlyRate employee's hourly rate
   * @param float hoursWorked total hours worked by the employee
   * @pre None
   * @post Creates an Employee object with the provided values
   * 
   */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
