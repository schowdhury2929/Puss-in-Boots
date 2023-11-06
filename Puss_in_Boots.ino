void setup() {
  /* 
  servo for Kitty
  servo for Death
  servo for Sword/Hat
  */
  

  bool fear = true;
  bool prepared = false;
  bool loss = false;
}

void loop() {
  /* 
  if wish on base
    Kitty faces Puss

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
