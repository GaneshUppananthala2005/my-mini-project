# my-mini-project
Designed and implemented an autonomous delivery robot using Arduino UNO with password-based authentication for secure package access. Integrated a 4×4 keypad and LCD display for user verification, L298N motor driver for DC motor control, and a servo motor for electronic locking. Included ESP32-CAM for real-time monitoring. 
# Autonomous Delivery Robot with Password-Based Authentication 🤖

## 📌 Project Overview
This project focuses on the design and implementation of an **Autonomous Delivery Robot with Password-Based Authentication** using embedded system principles. The system ensures **secure delivery of items** by allowing access only to authorized users through a password entered via a keypad. The robot integrates motor control, authentication logic, and user feedback mechanisms to achieve controlled and reliable delivery.

This project presents the design and implementation of an autonomous delivery robot incorporating password-based authentication to ensure secure access to delivered items. The system is developed using Arduino UNO as the central controller, interfacing with DC motors through an L298N motor driver for movement control. A 4×4 keypad is used as the user input device for password entry, while a 16×2 LCD display provides authentication status and system feedback.

The delivery compartment is secured using a servo motor-based locking mechanism, which is activated only when the correct password is entered. The robot operates autonomously along a predefined path, and access is restricted until successful authentication. For enhanced monitoring, an ESP32-CAM module is utilized to provide real-time video streaming of the robot’s operation.

The project highlights key embedded system concepts such as hardware–software integration, motor control, and access control mechanisms, offering a reliable solution for secure and contactless delivery systems.


## 🎯 Objectives
- To design an autonomous mobile robot for delivery applications  
- To implement password-based authentication for secure package access  
- To restrict unauthorized access using keypad verification  
- To integrate motors, sensors, and display modules using Arduino
- To design and develop an autonomous delivery robot using Arduino UNO.
- To implement a password-based authentication system for secure access to delivered items.
- To restrict unauthorized access using keypad-based password verification.
- To control robot movement using DC motors and an L298N motor driver.
- To provide real-time user feedback using an LCD display.
- To implement a servo motor-based locking and unlocking mechanism.
- To enable live monitoring of the delivery process using an ESP32-CAM module.


## 🛠️ Hardware & Software Used
### Hardware
- Arduino UNO  
- L298N Motor Driver  
- DC Motors & Chassis  
- 4×4 Keypad  
- 16×2 LCD Display  
- Servo Motor (Lock/Unlock Mechanism)  
- Battery Power Supply  
- ESP32-CAM (for live video monitoring)

### Software
- Arduino IDE  
- Embedded C / Arduino Programming  

## ⚙️ System Working
The robot moves autonomously using DC motors controlled through an L298N motor driver. Once the robot reaches the delivery location, the package compartment remains locked. The user must enter a predefined password using a 4×4 keypad.  

- If the password is correct, the servo motor unlocks the compartment.
- If the password is incorrect, access is denied and the system remains locked.
- The LCD display provides real-time feedback to the user.
- An ESP32-CAM module enables live video streaming for monitoring purposes.

## 🔐 Security Feature
- Password-based authentication
- Controlled access using servo motor locking
- Visual feedback through LCD display

## 📂 Project Structure
- `code/arduino_core/` – Arduino code for motor control and authentication  
- `code/esp32_cam/` – ESP32-CAM live video streaming code  
- `documentation/` – Project report (PDF)  
- `circuit/` – Circuit diagram and schematics  
- `images/` – Project and hardware images  

## 📄 Documentation
The complete mini-project report submitted to **AVN Institute of Engineering & Technology** is available in the `documentation/` folder.

## 🚀 Applications
- Secure parcel delivery systems  
- Campus and office logistics  
- Hospital medicine delivery  
- Contactless delivery solutions  

## 🔮 Future Scope
- Mobile app-based authentication  
- IoT-based tracking and monitoring  
- GPS-assisted navigation  
- Enhanced security using multi-factor authentication  

## 👨‍💻 Team Members
- Uppananthala Ganesh (lead)  
- M. Rashmi Priya  
- P. Nithin Reddy  
- P. Anil  

## 🏫 Institution
AVN Institute of Engineering & Technology  
Department of Electronics & Communication Engineering  
Academic Year: 2025–2026

## 🎓 Project Guidance
This project was carried out under the guidance of  
**Mr. MD. Gandhi Babu**  
Assistant Professor, Department of Electronics & Communication Engineering  
AVN Institute of Engineering & Technology

## 👤 Author
**Uppananthala Ganesh**  
Electronics & Communication Engineering  
AVN Institute of Engineering & Technology  

📧 Email:uganeshuppananthala@gmail.com  
🔗 GitHub: https://github.com/GaneshUppananthala2005

🔗 LinkedIn: www.linkedin.com/in/ganesh-uppananthala-59061b2b8

## 📜 License
This project is proprietary and intended for academic and personal use only.  
Unauthorized copying, modification, or distribution of this project is not permitted without the author’s consent.





