#ifndef __SAVINGS_ACCOUNT_H__
#define __SAVINGS_ACCOUNT_H__

#include "Account.h"

class Savings_Account : public Account
{
 public:

  Savings_Account(Customer *cust, int id) : Account(cust, id) {};


  void deposit(double dep)
  {    
    Account::deposit(dep);
  };


  void withdraw(double w)
  {
    Account::withdraw(w);    
  };

  void add_interest()
  {
    
  };
  

};


#endif
