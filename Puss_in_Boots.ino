#include <Servo.h>

Servo kitty;
Servo death;
Servo weapon;

const int wish = 2;
const int paws = 3;
const int boots = 4;
const int fight = 5;

const int fire = 13;

bool fear = true;
bool prepared = false;
bool lost = false;

//sets up servos and gets them into position
void setup() {
  kitty.attach(8);
  kitty.write(180);
  death.attach(9);
  death.write(0);
  weapon.attach(10);
  weapon.write(0);

  pinMode(wish, INPUT);
  pinMode(paws, INPUT);
  pinMode(boots, INPUT);
  pinMode(fight, INPUT);

  pinMode(fire, OUTPUT);
  digitalWrite(fire, LOW);
}

//calls for the rest of the functions when they are activated in the enclosure
void loop() {

  //makes Kitty block Puss's way to the arena after the wish is removed from him
  if (digitalRead(wish) == HIGH & fear == true) {
    kitty.write(0);
  }

  if (digitalRead(paws) == HIGH & fear == true) {
    team();
  }

  if (digitalRead(boots) == HIGH & fear == false) {
    light();
  }

  if (digitalRead(fight) == HIGH & prepared == true & lost == false) {
    loss();
  }

  /*          
  if sword and scythe cross
    win();
  */
}

//gets Kitty out of Puss's way when they touch
void team() {
  kitty.write(90);
  fear = false;
}

//lights up the arena and allows Puss and Death to fight
void light() {
  digitalWrite(fire, HIGH);
  prepared = true;
}

//the first fight between Puss and Death, starts once Puss is near Death
void loss() {
  death.write(90);
  death.write(60);
  death.write(120);
  death.write(60);
  death.write(120);
  death.write(90);
  lost = true;
  weapon.write(90);
}

//the second fight between Puss and Death, starts once Puss approaches Death with his weapon
void win() {
  death.write(60);
  death.write(120);
  death.write(60);
  death.write(120);
  death.write(180);
  digitalWrite(fire, LOW);
}
