// Do not remove the include below
#include "PlutoPilot.h"
#include "App.h"
#include "Control.h"
#include "Led.h"
#include "Angle.h"
#include "Print.h"


int16_t appheading=0;

//The setup function is called once at Pluto's hardware startup
void plutoInit()
{
// Add your hardware initialization code here
}



//The function is called once before plutoPilot when you activate UserCode
void onPilotStart()
{
  // do your one time stuffs here
  Control.disableFlightStatus(true); 		//disable the led
  ledOp(L_RIGHT, ON);
  ledOp(L_MID, OFF);
  ledOp(L_LEFT, ON);



}


//int16_t roll;
//int16_t pitch;
//int16_t yaw;
// The loop function is called in an endless loop
void plutoPilot()
{

//Add your repeated code here
	//roll=Angle.get(AG_ROLL);
	//pitch=Angle.get(AG_PITCH);
	//yaw=Angle.get(AG_YAW);

	Print.monitor("Roll:",Angle.get(AG_ROLL));
	Print.redGraph(Angle.get(AG_ROLL));
	Print.monitor("Pitch:",Angle.get(AG_PITCH));
	Print.greenGraph(Angle.get(AG_PITCH));
	Print.monitor("Yaw:", Angle.get(AG_YAW));
	Print.blueGraph(Angle.get(AG_YAW));


}



//The function is called once after plutoPilot when you deactivate UserCode
void onPilotFinish()
{

// do your cleanup stuffs here
	Control.disableFlightStatus(false); //Enable the Led

}





