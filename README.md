# phone-to-arduino-fingerprint

This project was made for a small IOT demo to show how a fingerprint scanner would work with an Arduino Uno.

## Setup

### Required hardware:

1. A phone with a fingerprint scanner
2. An Arduino Uno 
3. A desktop to connect the phone and the arduino at the same time

### Steps
1. Upload the mobile application at `proj` to your phone while connected through USB.
2. Upload the arduino script at `arduino.ino` (Make sure you do not open the serial monitor as it occupies the port and won't let the python script talk to the arduino).
3. Run the python script once everything else is loaded.