#Air Dehumidifier Controller
**dhaulagiri** is a replacement controller for an air dehumidifier (probably a predecessor model of the prem-i-air EH1220).

###Air Dehumidifier Overview
The dehumidifier consists of a little compressor, a cooling unit with a fan and some sensors. The compressor is used to cool down the air intake side of the cooling unit. The fan is used to draw air through the cooling unit, which lets the moist in the air condense on it. To keep the temperature of the cooling unit at a constant value below the ambient temperature, both have to be measured continuously. Obviously the humidity of the incoming air has to be measured as well. There is a sensor which detects whether the catch basin is full. Finally, there is an IO panel for user interaction.

###Hardware
The original PCBs of the device were left in place, only the microcontroller (SH69P42, 4-bit) was replaced by a circuit board containing an AVR ATmega8. As the original humidity sensor couldn't distinguish a desert and a living room anymore, it was replaced by a digital one (DHT22).

###Software
The software running on the AVR mimics the functionality of the original controller in some aspects (e.g. controlling the io board). However, the overall functionality has changed as the device was already disfunctional when I got it. The modes and menues it offered were replaced by what made sense to me.

At this point, you can set a reference humidity and the device will regulate the rooms humidity to that level.

### Project Status
**Firmware runs and dehumidifier works as intended.**

###ToDo
Although the base functionality is provided, there is still a lot of room for other modes of operation to be implemented. Also, the uart interface was made easily accessible  which allows simple programming and debugging, but could also be used to e.g. log measurement values. 

###Files
* *orig_PCB* contains information on the connections on the original main PCB and some considerations concerning the humidity sensor
* *replacement_pinout* describes the mapping of the original microcontroller pins to the AVR pins.
* *io_panel_PCB* evolved while reverse engineering the IO PCB
* *Curve_fitting.ods* was used to find a polynomial approximation of temperatures from the sensor readings

###Further Information
[This blog post](http://pointless-circuits.com/blog/2015/08/15/revival-of-an-air-dehumidifier) describes the evolution of this project.
