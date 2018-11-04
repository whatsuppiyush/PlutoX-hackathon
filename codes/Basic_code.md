> All programs need to include PlutoPilot library </br>
#include PlutoPilot.h

>plutoinit() </br>
startup function + Hardware initialization code

>onPilotStart() </br>
Developer mode startup function , variable initialization and one-time code , The function is called once before plutoPilot() when you activate Developer Mode by Volume-Up key or using Developer Button on Pluto Controller (Android only).

>plutoPilot() </br>
Deveoper mode main function , runs as endless loop 

>onPilotFinish() </br>
 to deactivate Developer function

```C++
#include<PlutoPilot.h>
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
```

