# Automatic Street Light Control

## Introduction:
Automatic Street Light Control is an automated system which controls the street lights. The street lights are switched on according to how dark the environment gets. For example, just before the sun sets, that is, at around 6 PM, only a few street lights have to turn on. After the sun sets, that is, at 7 PM, some more street lights turn on. After 8 PM, as it is very dark, all the street lights need to be switched on. During the morning, none of the street lights will be on. The aim of the project is to use the lights efficiently and save power whenever possible. An ATmega328p microcontroller is used in the project, along with a Light Dependent Resistor. LEDs are used to demonstrate the street lights.


## Research
### Objectives: 
* At high intensity of light, in the morning, all the street lights are turned off.
* At moderate intensity of light, in the evening, only a few street lights are turned on.
* At low intensity of light, at night, all street light will be turned on.

### Features:
* It makes efficient use of the street lights
* It aims to save power by turning on the lights only when required
* It is a low cost system

## SWOT Analysis
![SWOT Analysis](https://user-images.githubusercontent.com/70939522/164167181-8452a22a-aca4-40c7-9488-b43e0339a82c.png)


## 4W's and 1'H
### Who:
Automatic Street Light Control can be made use of en masse by administrative bodies responsible for civic amenities in a city or state.

### What:
It is an automatic system which is used to control the street lights depending on intensity of light in the environment.

### When:
Automatic Street Light Control can be used when there is a need to reduce power consumption.

### Where:
It can be used in cities and towns which make use of street lights on their roads.

### How:
It works by automating the street lights efficiently based on how dark the surroundings are.

## Detail Requirements
### High Level Requirements:

| ID | Description | Status |
| ---- | ------------------- | ---- |
| HR01 | Should take values from LDR as input | Implemented |
| HR02 | Should control the LEDs | Implemented |
| HR03 | Should have automatic control | Implemented |


### Low Level Requirements:

| ID | Description | HLR_ID |
| ---- | -------------- | ----- |
| LR01 |  |  |
| LR02 |  |  |
| LR03 |  |  |
| LR04 |  |  |
| LR05 |   |	 |
| LR06 |  |  |
| LR07 |   |  |


## Best Methods to be Followed:
* Used functions to get the values of the LDR
* Usage of functions to reduce dependency on main function
* Header files were created to use program functions for other c files
