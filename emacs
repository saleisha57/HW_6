#include "Customer.h"
using std::cout;
using std::endl;

#define SAVINGS_INTEREST_ADULT 0.15
#define CHECK_INTEREST_ADULT 0.10
#define CHECK_CHARGE_ADULT 1.25
#define OVERDRAFT_PENALTY_ADULT 0.5


class Adult : public Customer
{
public:

 Adult()
    {
      cout<<"Adult: "<<SAVINGS_INTEREST_ADULT<<", "<<CHECK_INTEREST_ADULT<<", "<<CHECK_CHARGE_ADULT<<", "<<OVERDRAFT_PENALTY_ADULT<<"."<<endl;
    };
 
 double get_savings_interest()
 {
   return SAVINGS_INTEREST_ADULT;
 };

};
