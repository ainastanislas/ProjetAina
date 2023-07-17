const int PCATEG = 4;// bouton poussoir mipetaky amin'ny pin 8
const int DCATEG = 7;// bouton poussoir mipetaky amin'ny pin 7
const int LEDHOMME = 2;// led mena mipetaky amin'ny pin 4
const int LEDFEMME = 4;// led maintso mipetaky amin'ny pin 2
int stats;

void setup() {
  pinMode(PCATEG, INPUT);// initialiser bouton poussoir au entree
  pinMode(DCATEG, INPUT);
  pinMode(LEDHOMME, OUTPUT);// initialiser  led au sorti
  pinMode(LEDFEMME, OUTPUT);

}

void loop() {
  //stats = digitalRead(PCATEG);
  //if(stats==LOW){
    //digitalWrite(LEDHOMME, HIGH);// allumer le led de homme 
    //delay(10000);
 // }
  //else{
    digitalWrite(LEDHOMME, LOW);    
    delay(10000);
    digitalWrite(LEDHOMME, LOW);
    delay(10000);

  //}
 

}
