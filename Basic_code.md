All programs need to include PlutoPilot library 
#include PlutoPilot.h

plutoinit() 
startup function + Hardware initialization code

onPilotStart() 
Developer mode startup function , variable initialization and one-time code , The function is called once before plutoPilot() when you activate Developer Mode by Volume-Up key or using Developer Button on Pluto Controller (Android only).

plutoPilot() 
Deveoper mode main function , runs as endless loop 

onPilotFinish() 
 to deactivate Developer function

`
include# PlutoPilot.h
void plutoInit()
{
	//hardware init code
}
void onPilotStart()
{
	//Add developer init code
}
void plutoPilot()
{
	//main program loop
}
void onPilotFinish()
{
	//Add developer clean-up code
}
`

