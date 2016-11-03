#include "Customer.h"
using std::cout;
using std::endl;

class Adult : public Customer
{
 private:
  const double savings_interest = 0.35;
  const double check_interest = 0.25;
  const double check_charge = 1.25;
  const double overdraft_penalty = 3.25;

 public:

 Adult(string name, string address, string telephone, int age) : Customer(name, address, telephone, age) {};

    
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



