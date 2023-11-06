#include <Servo.h>

Servo kitty;
//Servo death;
//Servo weapon;

const int buttonPin = 2;

void setup() {
  kitty.attach(4);
  kitty.write(0);
  //death.attach();
  //weapon.attach();
  pinMode(buttonPin, INPUT);

  bool fear = true;
  bool prepared = false;
  bool loss = false;
}

void loop() { 
  if (digitalRead(buttonPin) == HIGH) {
    kitty.write(90);
  }
  /*
  if Puss and Kitty touch paws & fear == true
    team();
    
  if Puss is on base & fear == false
    prepared();
        
  if Puss near Death & prepared == true & loss == false
    loss();

  if sword and scythe cross
    win();
  */
}

void team() {
  /*
  Kitty turns around
  fear = false;
  */
}

void prepared() {
  /*
  fire up
  fight = true
  */
}

void loss() {
  /*
  30 degrees forward and back
  loss = true;
  switch Death to scythe
  weapon revealed
  */
}

void win() {
  /*
  30 degrees forward and back
  switch Death to lose side
  fire down
  */
}
