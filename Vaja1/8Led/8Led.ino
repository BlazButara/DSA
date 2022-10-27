//2 je velika ledica

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void posljiPodatek(char podatek){
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  for(int i=0; i<8; i++){
    if(podatek & B00000001){
      digitalWrite(12, HIGH);
    }
    else{
      digitalWrite(12, LOW);
    }
    digitalWrite(10, HIGH);
    digitalWrite(10, LOW);
    podatek = podatek >> 1;
  }
  digitalWrite(11, HIGH);
  digitalWrite(11, LOW);
  
}

// the loop function runs over and over again forever
void loop() {

  for(int stev = 0; stev < 256; stev++){
  posljiPodatek(stev);
  delay(50);
  }
  
  /*
  //INIT
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);

  //Začnemo oddajat bite B10101010

  digitalWrite(12, HIGH); //1.bit
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(12, LOW); //2.bit
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(12, HIGH); //3.bit
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(12, LOW); //4.bit
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(12, HIGH); //5.bit
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(12, LOW); //6.bit
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(12, HIGH); //7.bit
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(12, LOW); //8.bit
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);

  //Odpremo loputo
  digitalWrite(11, HIGH);
  digitalWrite(11, LOW);
  */

  
  
  delay(100);
}
