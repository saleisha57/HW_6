#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>
using std::string;
using std::cout;
using std::endl;

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer
{
 public:
  Customer() {};

  Customer(string p_name, string p_address, string p_telephone, int p_age)
    {
      name = p_name;
      address = p_address;
      age = p_age;
      telephone_number = p_telephone;
    };

  string get_name()
  {
    return name;
  };

  void set_name(string p_name)
  {
    name = p_name;
  };

  string get_address()
  {
    return address;
  };

  void set_address(string p_address)
  {
    address = p_address;
  };

  int get_age()
  {
    return age;
  };
  
  void set_age(int p_age)
  {
    age = p_age;
  };

  string get_telephone_number()
  {
    return telephone_number;
  };
  
  void set_telephone_number(string p_telephone_number)
  {
    telephone_number = p_telephone_number;
  };

  string get_customer_number()
  {
    return customer_number;
  };

  void set_customer_number(string p_customer_number)
  {
    customer_number = p_customer_number;
  };

  virtual const double get_check_interest() = 0;
  virtual const double get_check_charge() = 0;
  virtual const double get_savings_interest() = 0;
  virtual const double get_overdraft_penalty() = 0;

 protected:

  string name;
  string address;
  int age;
  string telephone_number;
  string customer_number;

};


#endif
