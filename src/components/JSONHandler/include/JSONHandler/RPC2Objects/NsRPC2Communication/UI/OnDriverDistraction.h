#ifndef NSRPC2COMMUNICATION_UI_ONDRIVERDISTRACTION_INCLUDE
#define NSRPC2COMMUNICATION_UI_ONDRIVERDISTRACTION_INCLUDE

#include "JSONHandler/RPC2Notification.h"

#include "../include/JSONHandler/ALRPCObjects/DriverDistractionState.h"

/*
  interface	NsRPC2Communication::UI
  version	1.2
  generated at	Tue Nov 20 13:32:23 2012
  source stamp	Mon Nov 19 10:17:20 2012
  author	robok0der
*/

namespace NsRPC2Communication
{
  namespace UI
  {

    class OnDriverDistraction : public ::NsRPC2Communication::RPC2Notification
    {
    public:
    
      OnDriverDistraction(const OnDriverDistraction& c);
      OnDriverDistraction(void);
    
      OnDriverDistraction& operator =(const OnDriverDistraction&);
    
      virtual ~OnDriverDistraction(void);
    
      bool checkIntegrity(void);
    
// getters
      const NsAppLinkRPC::DriverDistractionState& get_state(void);


// setters
      bool set_state(const NsAppLinkRPC::DriverDistractionState& state);


    private:

      friend class OnDriverDistractionMarshaller;

      NsAppLinkRPC::DriverDistractionState state;

    };
  }
}

#endif
