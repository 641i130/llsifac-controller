#include "Keyboard.h"

int state[10];
int prevState[10];
unsigned long lastDebounceTime[10];  // the last time the output pin was toggled
unsigned long debounceDelay = 30;    // the debounce time; increase if the output flickers

void setup() 
{        
    for (int i=0;i<10;i++)
    {
      pinMode(i, INPUT_PULLUP);
      state[i] = HIGH;
      lastDebounceTime[i] = 0;
      prevState[i] = 0;
    }
    Keyboard.begin(); // initialize control over the keyboard:    
}

void loop() 
{
  for (int i=0;i<10;i++)
  {
    int buttonState = digitalRead(i);

    if (buttonState != prevState[i]) {
      // reset the debouncing timer
      lastDebounceTime[i] = millis(); 
    }

    if ((millis() - lastDebounceTime[i]) > debounceDelay) 
    {
      if (buttonState != state[i])
      {
        char buf[16]; 
         state[i] = buttonState;
         if (buttonState == LOW) 
         {
            Keyboard.press('A'+i);
         }
         else
         {
            Keyboard.release('A'+i);
         }
      }
    }
    prevState[i] = buttonState;
  }
}
