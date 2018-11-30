
#include "PlutoPilot.h"
#include "Peripheral.h"
#include "Print.h"
#include "Control.h"
#include "Althold.h"
#include "Led.h"

//The setup function is called once at Pluto's hardware startup
void plutoInit()
{
// Add your hardware initialization code here
	ADC.Init(Pin13); //ADC initialization
	//GPIO.Init(Pin2, AIN, SP_2MHz);
}



//The function is called once before plutoFly when you activate UserCode
void onPilotStart()
{
  // do your one time stuffs here
	 Control.disableFlightStatus(true); //Disable flight status LED

}



// The loop function is called in an endless loop

void plutoPilot()
{

//Add your repeated code here

	//sensorValue13=GPIO.read(Pin2);	//Convert the input value to voltage
    sensorValue13=ADC.Read(Pin13);

	Print.monitor("GPIO:",sensorValue13 );		//Print the sensor value
	Print.monitor("\n");

}



//The function is called once after plutoFly when you deactivate UserCode
void onPilotFinish()
{
	 Control.disableFlightStatus(false); //Enable flight status LED

	 // do your cleanup stuffs here

}

