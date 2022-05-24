from time import sleep
import serial
import os
from subprocess import Popen, PIPE
# Change COM4 to your own port.
arduino = serial.Serial('COM4', 9600, timeout=1)
sleep(2)
x = arduino.readline().decode()
print(x)
# path to android app at `proj`.
os.chdir(r'C:\Users\username\Desktop\project\proj')


"""
    Sleeps are to accomodate the arduino wait times for the led blinking.
"""


def success():
    arduino.write("1".encode())
    sleep(1)


def error():
    arduino.write("2".encode())
    sleep(1)


with Popen(['npx', 'react-native', 'log-android'], stdout=PIPE, bufsize=1, universal_newlines=True, shell=True) as p:
    print('in')
    for line in p.stdout:
        print(line, end='')
        line = line.lower()
        if 'error' in line:
            error()
        elif 'info' in line:
            pass
        else:
            success()
        sleep(5)
        print('ready')
