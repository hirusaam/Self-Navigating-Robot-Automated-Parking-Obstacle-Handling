# Self-Navigating Robot – Automated Parking & Obstacle Handling  

## Project Overview  

This project implements a **self-navigating robot** capable of:  

- **Autonomous line following** (white & black line modes)  
- **Obstacle detection and avoidance** using IR & proximity sensors  
- **Intersection navigation** with structured turns  
- **Smart parking** into empty slots  

The robot is programmed in the **Heptagon synchronous programming language** and demonstrates **reactive + state-based control** using:  

- **PID controllers**  
- **Sensor fusion**  
- **Finite State Machines (FSMs)**  

---

## System Components  

The robot controller is implemented in a single Heptagon file `line_follower.ept`, with **modular nodes** for each functionality.  

| Component            | Description |
|----------------------|-------------|
| **White Line Following** | Tracks white lines using five sensors. PID ensures precise alignment. Switches to black-line mode at intersections. |
| **Black Line Following** | Tracks black lines on light surfaces. Integrates obstacle detection. Uses PID for smooth movement. |
| **Line Switching**   | Handles transitions between white and black line modes on alternating tracks. |
| **PID Control**      | Adjusts motor speeds `(v_l, v_r)` with P, I, D terms. Separate tuning for white & black line modes. |
| **Obstacle Avoidance** | Uses IR & proximity sensors to detect obstacles. Executes left/right maneuvers with forward bias. |
| **Intersection Handling** | Executes **predefined turns** at intersections based on a counter. |
| **Smart Parking**    | Detects empty slots and autonomously performs parking maneuvers using PID-controlled alignment. |

---

## Hardware Requirements  

- 2 × DC motors (left & right)  
- 5 × Line sensors (`sen0–sen4`)  
- 2 × IR sensors (front-left & front-right)  
- 2 × Proximity/obstacle sensors (left & right)  
- Microcontroller compatible with **Heptagon-generated C code** (e.g., Arduino)  

---

## Software Requirements  

- **Heptagon Compiler (heptc)**  
- Linux / macOS / Windows for compilation  
- Heptagon libraries & toolchain  

---

## Setup Instructions  

1. **Clone the repository**  
   ```bash
   git clone https://github.com/hirusaam/Self-Navigating-Robot-Automated-Parking-Obstacle-Handling.git
   cd Self-Navigating-Robot-Automated-Parking-Obstacle-Handling
