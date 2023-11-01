void setup() {
  /* 
  servo for Puss
  servo for Death
  servo for Sword
  servo for Hat
  fight button
  */

  bool fear = true;
  bool loss = false;
}

void loop() {
  /* 
  if Puss is on base
    fire up

    if wish removed, moved forward, & fear == true
      fear = false;
      30 degrees forward and back
      loss = true;
      switch to hurt Puss
      
    if retreat & loss == true
      switch Death to scythe
      switch Puss to Gatito Blade

    if Puss has sword and hat and moved forward
      loss = false;

      if sword and scythe cross
        switch Death to sad side
        fire down
        Death retreats
  */
}
