
int pinPot=0;
int valPot=0; 
const int L1=2;
const int L2=3;
const int L3=4;
int A=valPot;

void setup() {

  pinMode(L1, OUTPUT); //ROUGE
  pinMode(L2, OUTPUT); //VERT
  pinMode(L3, OUTPUT); //ORANGE
  Serial.begin(9600); 
}

void loop() {

  valPot=analogRead(A0); 
  Serial.print("Valeur: ");
  Serial.println(valPot);

  
  if ( A < 340);
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW); 
  digitalWrite(L3, LOW);
  
  else
  
  if case 2 (341 > A > 681);
  digitalWrite(L1, LOW);             
  digitalWrite(L2, HIGH); 
  digitalWrite(L3, LOW); 
  
  else
  
  if case 3 if (682 <= A);
  digitalWrite(L1, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(L3, HIGH);   
  
}
