# servo_calibration_by_using-_PCA9685
This project focuses on calibrating servo motors using the PCA9685 16-channel PWM driver. Each servo is accurately set to 90 degrees (midpoint position) before mechanical assembly. After positioning, servo horns (servo caps) are mounted onto the servo shafts to ensure proper alignment and symmetry in robotic mechanisms like legs or arms.
# 🎯 Servo Calibration Using PCA9685

This project demonstrates how to **calibrate multiple servo motors** using the **PCA9685 16-channel servo driver**. The goal is to set each servo to its **neutral (90°) position** before attaching servo horns (caps) to the mount, ensuring accurate and aligned mechanical movement for robotic applications.

---

## 📌 Objective

- Set all servo motors to exactly **90 degrees**.
- Physically mount servo caps (horns) in the correct alignment.
- Prepare the system for consistent and stress-free movement in robotic structures (e.g., quadruped legs, robotic arms).

---

## 🧰 Components Used

| Component               | Description                            |
|------------------------|----------------------------------------|
| PCA9685 Servo Driver   | 16-channel PWM controller (I2C-based)  |
| Servo Motors (SG90/MG90S) | Standard hobby servo motors             |
| Arduino Uno/Nano       | Used to send I2C commands to PCA9685   |
| Power Source           | 5V regulated external supply (recommended) |
| Servo Horns / Caps     | Attached after calibration              |
| capacitor(4700uF)      | To control current deficiancy         |
---
