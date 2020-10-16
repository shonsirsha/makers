# Home Automation using Arduino | Proximity-Based Relay Proof of Concept

## Introduction

**What is this?** This is an experiment to demonstrate the way relay controlled from an Arduino combined with the reading from a different component (in this case an ultrasonic sensor) works, and ultimately what this means to performing home automation tasks using Arduino.

**Objective:** **In this experiment, we would like to trigger a relay to activate an AC load (such as a home appliance) if a certain condition is met.** The condition is, any object present within the ultrasonic sensor's range (3cm - 400cm in this case).

**For the sake of simplicity:**

1. The AC load that is being used in this experiment is a standard table lamp with a rating of 240V.
2. We are not going to use any temperature and humidity sensor, thus the readings from this "range finder" is far from accurate, as it does not take into account temperature and humidity of the surroundings.

## Before Starting the Experiment:

Parts / hardware needed for this project:

1. Arduino UNO (1x)
2. Ultrasonic HC-SR04 sensor (1x)
3. Single channel relay module with input of 5V (load ratings: 10A 250V AC / 30V DC or 12A 125V AC / 28V DC) (1x)
4. Breadboard (1x)
5. Screwdriver
6. Jumper wires (at least 5x)
7. AC Load that has a suitable rating for the relay (1x)

**IMPORTANT: DO NOT PLUG AC LOAD'S POWER PLUG INTO A POWER SOCKET / MAINS VOLTAGE FROM STEP 1-8 AS IT MAY CAUSES ELECTROCUTION!**

## Starting the Experiment:

1. Investigate the number of Arduino's digital pins needed to be used in the code (`home_automation_relay.ino`)
2. Plug the HC-SR04 sensor to the breadboard and connect VCC to 5V of Arduino, and GND to GND of Arduino. For the other two, please see code. Connect them using the jumper wires.
3. Peel your AC load's cable jacket to expose the wire, be careful not to cut completely.
4. Cut **one** (out of two / three) of the already exposed wire in half. In this experiment, I picked the ground wire to be cut.
5. Expose the stripped wire about 1-1.5cm (not too long and not too short to be put into the relay's terminal)
6. Put one end into the COM (common) terminal, and another into the NO (normally open) terminal.
7. Adjust the tightness of the relay module's terminal using the screwdriver, and make sure the wires that has just been put in from the previous step don't fall out.
8. Store it safely
9. Install the code `home_automation_relay.ino` into the arduino, and make sure everything has been correctly setup
10. Plug in the AC load into a mains voltage (a power socket).

**IMPORTANT: DO NOT TOUCH THE RELAY MODULE AND OR THE AC LOAD'S CABLE/WIRE UNTIL THE EXPERIMENT ENDS AS IT MAY CAUSES ELECTROCUTION!**

## During the Experiment:

We could see the readings of the distance by our HC-SR04 by opening the serial monitor on the Arduino IDE. Try putting objects such as: hands, paper, cardboard, etc infront of the sensor. We can see the readings change in the serial monitor, but also, if everything is setup correctly, our AC load (in this case a table lamp)o turn on and off (activates and deactivates) depending on how far or close the objects from the sensor.

We can change the range by changing the distance on line 31. Don't forget to save and re-upload the code if you happen to change it. Now, you can test it again and see how it behaves.

## Conclusion

This is a very simplistic proof of concept of how a relay can be controlled from an Arduino depending on readings / some other random variables.

**The point of this experiment is that, it should be understandable that we can easily change the AC load and or changing the sensors and or removing / adding different components to manipulate the data that we "feed" to our Arduino to be processed.**

**This way, performing home automation tasks shouldn't be too different. We can do: measurement of temperature and humidity, sound detection, facial recognition, etc. These data then again, can be "fed" to our Arduino as "input" to be processed and we are going to be able to achieve these tasks rather easily.**

**All in all, we can simply decide on what output we want (maybe turning on an aircon/fan, maybe turning on a heater, etc) from the Arduino, based on what input we got (temperature, humidity, motion, etc).**
