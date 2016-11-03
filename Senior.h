#ifndef __SENIOR_H__
#define __SENIOR_H__

#include "Customer.h"
using std::cout;
using std::endl;


class Senior : public Customer
{
 private:
  const double savings_interest = 0.5;
  const double check_interest = 0.45;
  const double check_charge = 0.75;
  const double overdraft_penalty = 1.25;

 public:

   Senior(string name, string address, string telephone, int age) : Customer(name, address, telephone, age) {};

  
  const double get_check_interest() 
  {
    return check_interest;
  };

  const double get_check_charge() 
  {
    return check_charge;
  };

  const double get_savings_interest() 
  {
    return savings_interest;
  };

  const double get_overdraft_penalty() 
  {
    return overdraft_penalty;
  };
  
};

#endif
