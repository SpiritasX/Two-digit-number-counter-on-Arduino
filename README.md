# Two-digit-number-counter-on-Arduino
This is an Arduino Uno project that counts up to 100 with two separate 7-segment displays.

Both displays are connected to 5 volts over one 4.7kOhm resistors.
Each segment(except the dot) is connected to pins that are set to HIGH at the beggining, which means that it's higher voltage than on the
end of resistors so the LED's are not turned on. If you set any pin to LOW, LED will turn on. I used for() loops to set pins to LOW for
every digit, then return to loop() function where I set the pins back to HIGH and so on...

Delay at the very end is to change the speed of the counter.

Feel free to improve my code, this is my first project and I hope it helps you. If you have any questions you can contact me on:
Instagram: dejan_bogovac
Facebook: Dejan Bogovac
Gmail: deja.bogovac@gmail.com
