// Do not remove the include below
#include "PlutoPilot.h"
#include "Led.h"
#include "Control.h"
#include "Althold.h"
#include "Print.h"

//The setup function is called once at Pluto's hardware startup
void plutoInit()
{
// Add your hardware initialization code here
}



//The function is called once before plutoPilot when you activate Developer Mode
void onPilotStart()
{
  // do your one time stuffs here

	Control.disableFlightStatus(true); //to disable the default led functions
}



// The loop function is called in an endless loop
void plutoPilot()
{

//Add your repeated code here
	//if the drone goes up left led is on and right led off and vice versa
	if(Althold.getVelocityZ() > 0){
		ledOp(L_LEFT,ON);
		ledOp(L_RIGHT,OFF);
	}
	else{
		ledOp(L_LEFT,OFF);
		ledOp(L_RIGHT,ON);
	}

	//Print the velocity on IDE monitor
	Print.monitor("Velocity Z:" , Althold.getVelocityZ());
	Print.monitor("\n");
	//Print in red graph the estimated Height	
	Print.redGraph(Althold.getEstimatedAltitude());
}



//The function is called once after plutoPilot when you deactivate Developer Mode
void onPilotFinish()
{

// do your cleanup stuffs here

	Control.disableFlightStatus(False);
}




