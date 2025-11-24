# Line-Following Robot Car  

## Overview  
This project is a **line-following robot car** built using an **Arduino Uno**.  
The robot detects and follows a predefined track using **infrared (IR) sensors**, while motor movement is controlled with an **L298N motor driver**.  

The system reads sensor data in real time and adjusts motor speed and direction using **PWM**, keeping the robot accurately aligned with the line.

---

## Features  
- IR sensor array for line detection  
- Real-time motor control using L298N driver  
- Smooth turning with PWM-based speed adjustments  
- Fully Arduino-based design  
- Simple, modular C/C++ code  

---

## Components used  
- Arduino Uno  
- L298N Motor Driver  
- IR Sensor Module (5 sensors)  
- DC Gear Motors ×2  
- Robot chassis  
- Wheels  
- Battery pack  
- Jumper wires  

---

## How it works  
1. IR sensors detect the black/white contrast on the track.  
2. Arduino reads sensor output continuously.  
3. Based on the logic:  
   - Line centered → Move straight  
   - Robot drifting left → Turn right  
   - Robot drifting right → Turn left  
4. Arduino sends PWM signals to the L298N to adjust motor speed for smooth movement.

---

## Skills gained  
- Microcontroller programming (Arduino)  
- Sensor data interpretation  
- PWM motor control  
- Embedded C/C++  
- System integration  

---

## Getting started  
1. Upload the Arduino code (`line_following.ino`) onto the Arduino Uno.  
2. Connect IR sensors, motors, and L298N driver according to the wiring diagram.  
3. Place the robot on a black track.  
4. Power the robot and it will begin following the line.
