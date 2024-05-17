from machine import Pin
import time

# Define the LED pin and set it as output
led = Pin(13, Pin.OUT)
# Define the button pin, set it as input with an internal pull-up resistor
button = Pin(12, Pin.IN, Pin.PULL_UP)

# Create an infinite loop to check the button state
while True:
    if button.value() == 0:  # If the button is pressed (logic level is LOW)
        led.value(1)  # Turn on the LED
    else:
        led.value(0)  # Turn off the LED
    time.sleep(0.1)  # Small delay to debounce the button


