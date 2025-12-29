# Virtual-EEPROM-Simulator
During my recent embedded development work, I built a Virtual EEPROM Simulator in C to simplify testing and debugging when physical EEPROM hardware isn’t available.

This lightweight tool emulates a 64-byte EEPROM memory using a binary file, closely reflecting real EEPROM behavior and making firmware validation faster and more reliable during early development stages.

🔧 What it offers:

64-byte EEPROM memory emulation backed by a binary file
Safe read/write operations with strict address boundary validation
Ideal for firmware testing, debugging, and CI environments
Simple to integrate into existing embedded or host-based projects
