#define FORWARD 'F'
#define BACKWARD 'B'
#define LEFT 'L'
#define RIGHT 'R'
#define CIRCLE 'C'
#define CROSS 'X'
#define TRIANGLE 'T'
#define SQUARE 'S'
#define START 'A'
#define PAUSE 'P'


int motA_pin1=2;
int motA_pin2=3;
int motB_pin1=4;
int motB_pin2=5;
char command;


void setup() {
Serial1.begin(9600);
Serial.begin(9600);
pinMode (motA_pin1,OUTPUT);
pinMode (motA_pin2,OUTPUT);
pinMode (motB_pin1,OUTPUT);
pinMode (motB_pin2,OUTPUT);
Serial.print("command");

}

 
void loop() 
{
  if(Serial1.available()) {
      char command = Serial1.read();
      executeCommand(command);
    }
}


void executeCommand(char command) {

  switch (command) {
    case FORWARD:
      digitalWrite(motA_pin1,HIGH);
      digitalWrite(motA_pin2,LOW);
      digitalWrite(motB_pin1,HIGH);
      digitalWrite(motB_pin2,LOW);
      delay(1000);
      break;
 
  case BACKWARD:
    digitalWrite(motA_pin1,LOW);
    digitalWrite(motA_pin2,HIGH);
    digitalWrite(motB_pin1,LOW);
    digitalWrite(motB_pin2,HIGH);
    delay(1000);
      break;

    case LEFT:
      digitalWrite(motA_pin1,LOW);
      digitalWrite(motA_pin2,HIGH);
      digitalWrite(motB_pin1,HIGH);
      digitalWrite(motB_pin2,LOW);
      delay(1000);
      break;

    case RIGHT:
      digitalWrite(motA_pin1,HIGH);
      digitalWrite(motA_pin2,LOW);
      digitalWrite(motB_pin1,LOW);
      digitalWrite(motB_pin2,HIGH);
      delay(1000);
      break;

    case CIRCLE:
      digitalWrite(motA_pin1,LOW);
      digitalWrite(motA_pin2,LOW);
      digitalWrite(motB_pin1,LOW);
      digitalWrite(motB_pin2,LOW);
      delay(1000);
      break;

    case CROSS:
      digitalWrite(motA_pin1,LOW);
      digitalWrite(motA_pin2,LOW);
      digitalWrite(motB_pin1,LOW);
      digitalWrite(motB_pin2,LOW);
      delay(1000);
      break;

  case TRIANGLE:
      digitalWrite(motA_pin1,LOW);
      digitalWrite(motA_pin2,LOW);
      digitalWrite(motB_pin1,LOW);
      digitalWrite(motB_pin2,LOW);
      delay(1000);
      break;
  case SQUARE:
      digitalWrite(motA_pin1,LOW);
      digitalWrite(motA_pin2,LOW);
      digitalWrite(motB_pin1,LOW);
      digitalWrite(motB_pin2,LOW);
      delay(1000);
      break;

  case START:
      digitalWrite(motA_pin1,LOW);
      digitalWrite(motA_pin2,LOW);
      digitalWrite(motB_pin1,LOW);
      digitalWrite(motB_pin2,LOW);
      delay(1000);
      break; 
  case PAUSE:
      digitalWrite(motA_pin1,LOW);
      digitalWrite(motA_pin2,LOW);
      digitalWrite(motB_pin1,LOW);
      digitalWrite(motB_pin2,LOW);
      delay(1000);
      break;

  default:
      digitalWrite(motA_pin1,LOW);
      digitalWrite(motA_pin2,LOW);
      digitalWrite(motB_pin1,LOW);
      digitalWrite(motB_pin2,LOW);
      delay(1000);
    break;
  }
}
