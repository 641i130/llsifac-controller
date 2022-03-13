Parts:

1) 1 x Arduino Leonardo R3 Microcontroller Atmega32u4 Development Board
2) 9 x 30mm Round Button Copy SANWA OBSF-30 Push Button JAMAE MAME
3) 1 x 24mm Arcade Button Round Push Button (Optional, for start button)
4) Female and Male Crimp Terminal Connector Gold Brass/Silver Car Speaker Electric Wire Connectors

All parts easily obtainable at aliexpress.

Very simple wiring, see diagram.

The controller behaves as a keyboard, sending keys A to I for the buttons and J for the start button if present

The Arduino sketch includes a simple debounce routine. This prevents missed/spurious button inputs.
If the controller registers more than one press when a button is pushed, increase the debouceDelay
If the controller fails to register quick successive presses, decrease the debounceDelay.

Case is a remix of Arcade Joystick - pi_arcade by darevix
https://www.thingiverse.com/thing:2253222