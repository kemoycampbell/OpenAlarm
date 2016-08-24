# OpenAlarm
Open Source Alarm software for IoT Alarm Clocks.

Do you ever want to have extra functionality in your alarm clock? Did you ever sometimes wish that your alarm clock is capable of turning on the lights in your room as you wake up? Are you tired of changing the alarm times every night because you wake up at different times per day during the week? Did you see an awesomely designed clock that you want to use as an alarm clock but you couldn't because it doesn't work as an alarm or doesn't have features that you need? 

OpenAlarm software can solve all of that. You can customize your alarm clock using OpenAlarm software in many different ways. You can attach any kinds of display to the software; you can use a computer monitor, digital clock, analog clock, flip-clock, or even binary clock with the software. Unlike many other alarm clocks, this alarm clock permits you to set alarm on a specific condition like 8:00AM on Weekdays and 10:00AM on Weekends. You can even have a multiple alarms set in one day.

# Motivation behind this software
The author is deaf and a standard alarm clocks with ringing sound doesn't work on him. He have to buy a specifically made alarm clocks with a jack for bed shaker. The number of alarm clocks that comes with a jack for bed shaker is small. Many of those alarm clocks' designs are not attractive to the author. All of those alarms don't even have capability to wake the deaf users up in case if somebody was ringing the house doorbell or there was a fire in the house and fire alarm was going off. The author also wanted to have a cool flip-clock alarm clock but there is no flip-clock alarm clock with bed-shaker jack that exists. 

The author decided to build the alarm clock that he wanted but he don't want to just stop there, he wants to build an open and general alarm clock software that everyone, including deaf and hearing people, can use. 

# Architecture
The software consists three main components.

Model - A model that represents the Alarm software and contains all Triggers and Acutators, and monitors all Trigger requirements and acts on all Acutator activations. When activated, this model will open a socket for external display (i.e. analog clock display) system to connect to exchange information. This model can open additional sockets to interact different kinds of external sensors to trigger Triggers and send to different kinds of external devices to activate as activated by an Acutator. 

Trigger - A trigger that will fire if a condition is met, when fired, trigger will activate a linked acutator. Trigger is required to have an linked Acutator to work. Trigger can fire based any conditions, for example, on matching time of the day like 7:00AM, receiving a socket message or a button being pressed. Triggers can be grouped in a single Trigger to perform some multi-triggers boolean algebra like AND, OR, or XOR. A Trigger can be linked to another Trigger to modify the Trigger operation like NOT boolean algebra, switchable Trigger, etc. 

Acutator - A method that will activate when a linked Trigger is fired. Acutator can activate anything, for example, play a sound on speakers, activate bed shaker, turn on the lights, or flash the lights. Single Acutator can link to a multiple Acutators. Like a Trigger, an Acutator can be linked to another Acutator to modify the Acutator operation like time delay, switch, etc. 
