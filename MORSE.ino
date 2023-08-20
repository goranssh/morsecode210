const int ledPin = 13;      

const int delayofdot = 500;    // time duration of a dot
const int delayofdash = 1500;  // time duration of a dash
const int spacebetweenletters = 1000; // time duration of space between letters

void setup() {
  pinMode(ledPin, OUTPUT);         
  digitalWrite(ledPin, LOW);       
}

void loop() {
  blinkName(); 
  delay(5000); 
}

void blinkName() {
  for (int i = 0; i < 1; i++) 
    morsecode('G');
    morsecode('O');
    morsecode('R');
    morsecode('A');
    morsecode('N');
    morsecode('S'); 
    morsecode('H');         
  }


void morsecode(char letter) {
  switch (letter) {
    case 'A':
      dot();
      dash();
      break;
    case 'B':
      dash();
      dot();
      dot();
      dot();
      break;
    case 'C':
      dash();
      dot();
      dash();
      dot();
      break;
    case 'D':
      dash();
      dot();
      dot();
      break;
    case 'E':
      dot();
      break;
    case 'F':
      dot();
      dot();
      dash();
      dot();
      break;
    case 'G':
      dash();
      dash();
      dot();
      break;
    case 'H':
      dot();
      dot();
      dot();
      dot();
      break;
    case 'I':
      dot();
      dot();
      break;
    case 'J':
      dot();
      dash();
      dash();
      dash();
      break;
    case 'K':
      dash();
      dot();
      dash();
      break;
    case 'L':
      dot();
      dash();
      dot();
      dot();
      break;
    case 'M':
      dash();
      dash();
      break;
    case 'N':
      dash();
      dot();
      break;
    case 'O':
      dash();
      dash();
      dash();
      break;
    case 'P':
      dot();
      dash();
      dash();
      dot();
      break;
    case 'Q':
      dash();
      dash();
      dot();
      dash();
      break;
    case 'R':
      dot();
      dash();
      dot();
      break;
    case 'S':
      dot();
      dot();
      dot();
      break;
    case 'T':
      dash();
      break;
    case 'U':
      dot();
      dot();
      dash();
      break;
    case 'V':
      dot();
      dot();
      dot();
      dash();
      break;
    case 'W':
      dot();
      dash();
      dash();
      break;
    case 'X':
      dash();
      dot();
      dot();
      dash();
      break;
    case 'Y':
      dash();
      dot();
      dash();
      dash();
      break;
    case 'Z':
      dash();
      dash();
      dot();
      dot();
      break;
    default:
      delay(letterSpace);
  }
  delay(letterSpace); 
}

void dot() {
  digitalWrite(ledPin, HIGH); 
  delay(dotDelay);           
  digitalWrite(ledPin, LOW);  
}

void dash() {
  digitalWrite(ledPin, HIGH); 
  delay(dashDelay);           
  digitalWrite(ledPin, LOW);
}
