# Self-Navigating Robot: Automated Parking & Obstacle Handling

A robotics project that enables a robot to autonomously navigate, detect, and avoid obstacles while performing automated parking maneuvers. Designed for research, educational, and hobbyist applications, this project integrates sensor data, navigation algorithms, and real-time motor control for robust self-navigation in dynamic environments.

---

## Table of Contents

- [Project Overview](#project-overview)
- [Features](#features)
- [System Architecture](#system-architecture)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Directory Structure](#directory-structure)
- [Configuration](#configuration)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgements](#acknowledgements)

---

## Project Overview

This project implements a self-navigating robot capable of:
- Detecting and avoiding obstacles using sensors
- Locating and parking in designated spaces automatically
- Making intelligent path decisions in real-time

The project focuses on modular, extensible code for ease of experimentation and adaptation to various hardware platforms.

---

## Features

- **Autonomous Navigation:** Real-time pathfinding and movement
- **Obstacle Detection & Avoidance:** Utilizes sensors (e.g., ultrasonic, IR, LIDAR)
- **Automated Parking:** Precision alignment and slot detection
- **Modular Design:** Easy to swap hardware components or algorithms
- **Extensive Logging:** Optional verbose logging for debugging and analysis

---

## System Architecture

- **Sensors:** Gather distance and environmental data
- **Controller:** Processes sensor data, runs navigation and parking algorithms
- **Motors:** Receive movement commands
- **Feedback Loop:** Continuously updates robot's state and executes adjustments

```
[Sensors] --> [Controller/Algorithms] --> [Motors]
         ^                             |
         |-----------------------------|
```

---

## Hardware Requirements

- Microcontroller (e.g., Arduino, Raspberry Pi, ESP32)
- Motor Driver (L298N, etc.)
- Motors (DC/Servo motors)
- Ultrasonic/IR sensors (HC-SR04, etc.)
- Optional: LIDAR, Camera
- Chassis, wheels, power supply

---

## Software Requirements

- Programming Language: Python / C++ / Embedded C (adapt to your hardware)
- Libraries:
    - For Arduino: `NewPing`, `Servo`, `AFMotor`, etc.
    - For Raspberry Pi: `RPi.GPIO`, `pigpio`, `opencv-python` (if using camera)
- (Optional) ROS (Robot Operating System) integration

---

## Installation

1. **Clone the Repository**
    ```bash
    git clone https://github.com/hirusaam/Self-Navigating-Robot-Automated-Parking-Obstacle-Handling.git
    cd Self-Navigating-Robot-Automated-Parking-Obstacle-Handling
    ```

2. **Install Dependencies**
    - For Arduino: Use Arduino Library Manager
    - For Python:
        ```bash
        pip install -r requirements.txt
        ```

3. **Upload/Deploy Code**
    - For Arduino: Use Arduino IDE to upload `.ino` file
    - For Raspberry Pi: Run Python scripts directly

---

## Usage

1. **Hardware Setup:** Assemble the robot and connect all sensors and motors.
2. **Configure Parameters:** Edit configuration files (e.g., port numbers, thresholds).
3. **Power On:** Supply power to the robot.
4. **Run Code:** 
    - For Arduino: Code runs on boot.
    - For Raspberry Pi: 
        ```bash
        python main.py
        ```
5. **Monitor Output:** Use serial monitor or log files for debugging.

---

## Directory Structure

```
Self-Navigating-Robot-Automated-Parking-Obstacle-Handling/
│
├── hardware/         # Schematics, wiring diagrams
├── src/              # Source code (algorithms, controllers)
├── config/           # Configuration files
├── docs/             # Documentation, diagrams, reports
├── test/             # Unit tests and sample data
├── requirements.txt  # Python dependencies (if applicable)
└── README.md         # This file
```

---

## Configuration

- Edit parameters in `config/` files (e.g., sensor thresholds, motor speeds)
- Hardware pin assignments can be set in the main source file or configuration file

---

## Troubleshooting

- **Robot not moving:** Check motor driver wiring and power supply.
- **Sensors not responding:** Verify sensor connections and update code with correct pins.
- **Parking not accurate:** Adjust calibration parameters in config.

---

## Contributing

Contributions are welcome! Please fork the repo and submit a pull request. For major changes, open an issue first to discuss your ideas.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a pull request

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## Acknowledgements

- [Open Source Robotics Community](https://www.ros.org/)
- [Adafruit Learning System](https://learn.adafruit.com/)
- [Arduino Project Hub](https://create.arduino.cc/projecthub)
- All contributors and testers

---
