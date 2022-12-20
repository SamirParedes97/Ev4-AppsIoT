
int ledrojo = 13;
int ledazul = 12;
int ledblanco = 11;
int lednaranja = 10;
int ledverde = 9;
int ledamarillo = 8;

int velocidad = 0;

int eleccion = 1;

int i = 0;

void setup() 
{
  pinMode(ledrojo,OUTPUT);
  pinMode(ledazul,OUTPUT);
  pinMode(ledblanco,OUTPUT);
  pinMode(lednaranja,OUTPUT);
  pinMode(ledverde,OUTPUT);
  pinMode(ledamarillo,OUTPUT);
}

void loop() 
{
    if(eleccion == 1) {velocidad = 1000;}
    if(eleccion == 2) {velocidad = 670;}

//Luces intermitentes
  digitalWrite(ledrojo, HIGH);
  digitalWrite(ledazul,LOW);
  digitalWrite(ledblanco,HIGH);
  digitalWrite(lednaranja,LOW);
  digitalWrite(ledverde,HIGH);
  digitalWrite(ledamarillo,LOW);
  delay(velocidad); 
  digitalWrite(ledrojo, LOW);
  digitalWrite(ledazul,HIGH);
  digitalWrite(ledblanco,LOW);
  digitalWrite(lednaranja,LOW);
  digitalWrite(ledverde,LOW);
  digitalWrite(ledamarillo,HIGH);
  delay(velocidad); 
  digitalWrite(ledrojo, HIGH);
  digitalWrite(ledazul,LOW);
  digitalWrite(ledblanco,HIGH);
  digitalWrite(lednaranja,HIGH);
  digitalWrite(ledverde,LOW);
  digitalWrite(ledamarillo,LOW);
  delay(velocidad); 
  digitalWrite(ledrojo, HIGH);
  digitalWrite(ledazul,LOW);
  digitalWrite(ledblanco,LOW);
  digitalWrite(lednaranja,LOW);
  digitalWrite(ledverde,HIGH);
  digitalWrite(ledamarillo,HIGH);
  delay(velocidad); 
  digitalWrite(ledrojo, LOW);
  digitalWrite(ledazul,HIGH);
  digitalWrite(ledblanco,HIGH);
  digitalWrite(lednaranja,HIGH);
  digitalWrite(ledverde,LOW);
  digitalWrite(ledamarillo,LOW);
  delay(velocidad); 

  //Luces planas
  digitalWrite(ledrojo, LOW);
  digitalWrite(ledazul,LOW);
  digitalWrite(ledblanco,LOW);
  digitalWrite(lednaranja,LOW);
  digitalWrite(ledverde,LOW);
  digitalWrite(ledamarillo,LOW);
  delay(velocidad); 
  digitalWrite(ledrojo, HIGH);
  digitalWrite(ledazul,HIGH);
  digitalWrite(ledblanco,HIGH);
  digitalWrite(lednaranja,HIGH);
  digitalWrite(ledverde,HIGH);
  digitalWrite(ledamarillo,HIGH);
  delay(velocidad); 
  digitalWrite(ledrojo, LOW);
  digitalWrite(ledazul,LOW);
  digitalWrite(ledblanco,LOW);
  digitalWrite(lednaranja,LOW);
  digitalWrite(ledverde,LOW);
  digitalWrite(ledamarillo,LOW);
  delay(velocidad); 
  digitalWrite(ledrojo, HIGH);
  digitalWrite(ledazul,HIGH);
  digitalWrite(ledblanco,HIGH);
  digitalWrite(lednaranja,HIGH);
  digitalWrite(ledverde,HIGH);
  digitalWrite(ledamarillo,HIGH);
  delay(velocidad); 
  digitalWrite(ledrojo, LOW);
  digitalWrite(ledazul,LOW);
  digitalWrite(ledblanco,LOW);
  digitalWrite(lednaranja,LOW);
  digitalWrite(ledverde,LOW);
  digitalWrite(ledamarillo,LOW);
  delay(velocidad); 

}
