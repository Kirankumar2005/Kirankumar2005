//         KIRAN PROJECTS 
#define LED1 0
#define LED2 2
#define LED3 4
#define LED4 6
#define LED5 8                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
//CODE SETUP
void setup() {
  //SETUP
pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  //POSITION
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
}

void loop (){
//MAIN CODE
delay(1500);
  digitalWrite(LED1,HIGH);  //LED 1
  delay(2000);
  digitalWrite(LED2,HIGH);  //LED 2
  delay(2000);
  digitalWrite(LED3,HIGH);  // LED 3
  delay(2000);
  digitalWrite(LED4,HIGH);   //LED 4
  delay(2000);
  digitalWrite(LED5,HIGH);   // LED 5
}