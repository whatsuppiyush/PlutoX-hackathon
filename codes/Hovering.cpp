// Do not remove the include below
#include "PlutoPilot.h"
#include "Led.h"
#include "Control.h"
#include "Sensor.h"
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
	Control.disableFlightStatus(true);
	Althold.activateAlthold(true);
		Control.arm();

}


bool flag=true;
// The loop function is called in an endless loop
void plutoPilot()
{
	Althold.activateAlthold(true);
	//Control.arm();
//Add your repeated code here
	if(Control.isArmed()==true && flag==true )
	{
		Print.monitor("flag",flag);
		if(Althold.getEstimatedAltitude()!=0)
			Althold.setAltholdHeight(0);
		else
			flag=false;
	}
	else
		Althold.setRelativeAltholdHeight(0);

	Print.monitor("\n mode",Althold.isAltholdModeActive());

}



//The function is called once after plutoPilot when you deactivate Developer Mode
void onPilotFinish()
{
	Control.disableFlightStatus(false);
// do your cleanup stuffs here

}




