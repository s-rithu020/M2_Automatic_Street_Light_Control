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
| HLR01 | Should detect the intensity of light at different times in the day | Implemented |
| HLR02 | The number of street lights switched on depends on the environment | Implemented |
| HLR03 | Should have automatic control | Implemented |
| HLR04 | Should have manual control incase of failure | Future |


### Low Level Requirements:

| ID | Description | HLR_ID |
| ---- | -------------- | ----- |
| LR01 | Luminosity of the environment is detected by the LDR | HLR01 |
| LR02 | All LEDs are off when LDR value (Lux) is high | HLR02 |
| LR03 | LED1 is switched on when LDR value (Lux) is moderately low | HLR02 |
| LR04 | LED2 is switched on when LDR value (Lux) is lower than before | HLR02 |
| LR05 | LED3 is switched on when LDR value (Lux) is the lowest |	HLR02 |
| LR06 | Automatic control is enabled by ATmega328 and LDR | HLR03 |
| LR07 | Manual control is enabled by switches  | HLR04 |


## Best Methods to be Followed:
* Used functions to get the values of the LDR
* Usage of functions to reduce dependency on main function
* Header files were created to use program functions for other c files

# Architecture

## Block Diagram
![block_diagram](https://user-images.githubusercontent.com/70939522/164739349-1b25fe57-8510-4839-9c33-9e7e7c409383.png)


## Flow Chart
![flowchart](https://user-images.githubusercontent.com/70939522/164745853-f5ac13b7-f982-4554-992b-1869b4e45b24.png)


## Schematic Diagram
![schematic_diagram](https://user-images.githubusercontent.com/70939522/164738243-ff795134-7d83-4da2-9012-0312e90a91d6.png)


# Test Cases

|  Test ID | Description  | Input  | Output  | Status |
|---|---|---|---|---|
| TID01 | At high input of LDR | LDR input | All LEDs are OFF | PASS |
| TID02 | At moderately low input of LDR | LDR input | Two LEDs are OFF | PASS |
| TID03 | At low input of LDR | LDR input | Only one LED is OFF | PASS |
| TID04 | At very low input of LDR | LDR input | All LEDs are ON | PASS |


Open the `.simu` file in SimulIDE. Load the `.elf` file into the ATmega328 microcontroller.

## Output Images
At high intensity of light, that is, during daylight, all street lights remain off.

![output4](https://user-images.githubusercontent.com/70939522/164748975-819ca7e8-b71a-4286-9389-828d0a1ffbde.png)

At moderately low intensity of light, i.e. in the evening, only one street light is switched on.

![output1](https://user-images.githubusercontent.com/70939522/164749140-385afaea-6d7f-4eeb-b13b-7a14a92e8d3d.png)

At low intensity of light, i.e. late evening, two street lights are turned on.

![output2](https://user-images.githubusercontent.com/70939522/164749292-f633ac89-b04a-4f64-b1a9-d5df74c03ccf.png)

At very low light intensities, i.e. nighttime, all street lights will be turned on.

![output3](https://user-images.githubusercontent.com/70939522/164749714-37400bda-c669-41dd-83b4-2d242f1eac08.png)
