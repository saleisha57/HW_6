#ifndef __CHECKING_ACCOUNT_H__
#define __CHECKING_ACCOUNT_H__

#include "Account.h"

class Checking_Account : public Account
{
 public:
 
 Checking_Account(Customer *cust, int id) : Account(cust,id) {};

  
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
