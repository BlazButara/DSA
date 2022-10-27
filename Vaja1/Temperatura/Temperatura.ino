//A0 je svetlobni senzor in A1 je temperaturni senzor

float getTemp(int vhodAD){
  float napetost = vhodAD * (5000.0/1023.0);
  float temperatura = (napetost - 400) / 19.5;
  return temperatura;
}

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 1:
  int sensorValue = analogRead(A1);

  float t = getTemp(sensorValue);
  
  // print out the value you read:
  Serial.print("Temperatura: ");
  Serial.println(t);

  delay(10);        // delay in between reads for stability
}
