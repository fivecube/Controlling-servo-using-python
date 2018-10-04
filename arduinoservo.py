import serial #This will import the library pyserial

arduinoData = serial.Serial('com3',9600) #This will make a object of class serial.Please change the baud rate and com port according to your device. Most Arduino uno(ATmega 328) works fine with 9600 and Nodemcu works fine with 115200

#To rotate the servo in 1 particular angle use this
arduinoData.write(b'1')

#for another angle use this
arduinoData.write(b'0')
