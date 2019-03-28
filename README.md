# Send Temperature information over the Sigfox network

## Requirements

You need an [Arduino MKRFOX](https://www.arduino.cc/en/Main.ArduinoBoardMKRFox1200) development board to run this demo code.


## Run

* Import the `.ino` file either in the online [Arduino Create](https://create.arduino.cc) editor, or in your installed Arduino IDE.
* Plug your MKRFOX board to your computer, then upload the sketch

## Check

Log in your [Sigfox Cloud](https://backend.sigfox.com) account, and browse to the Device > Messages console where you will see incoming messages.

If you do not have an account yet, please register through [Sigfox Activate](https://buy.sigfox.com/activate). You will need the unique ID/PAC information from your board, which you can retrieve using this sample code : [MKRFOX init](https://github.com/sigfox/mkrfox-init)
