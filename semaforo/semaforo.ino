int delayRojo1= 5000;
int rojo1 =5; 
int amarillo1 = 12;
int verde1 = 11;
int rojo2 = 10;
int amarillo2 = 9;
int verde2 = 8;
int naranja= 7;
int blanco=6;
int botonRojo = 2;
int botonInter = 3;
int ContVueltas=0;

bool state=true;

void setup()
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(botonRojo), intermitente, FALLING);
  attachInterrupt(digitalPinToInterrupt(botonInter), extenderRojo, FALLING);
}

void loop()
{
  delayRojo1 = 800;
  digitalWrite(rojo1, LOW);
  digitalWrite(verde2, LOW);
  delay(delayRojo1);
  digitalWrite(verde2, HIGH);
  digitalWrite(amarillo2, LOW);
  delay(500);
  digitalWrite(naranja,LOW);
  delay(500);
  digitalWrite(naranja, HIGH);
  delay(500);
  digitalWrite(naranja,LOW);
  delay(500);
  digitalWrite(naranja,HIGH);
  digitalWrite(amarillo2, HIGH);
  digitalWrite(rojo1, HIGH);
  digitalWrite(verde1, LOW);
  digitalWrite(rojo2, LOW);
  delay(800);
 digitalWrite(verde1, HIGH);
  digitalWrite(amarillo1, LOW);
  delay(200);
  digitalWrite(amarillo1, HIGH);
  digitalWrite(rojo2, HIGH);
  Serial.println("Otra vuelta ");
  Serial.println(ContVueltas = ContVueltas + 1);
  
    } 


void intermitente() {    
 state = !state;
  delay(500);
  interrupts();  // Esta linea "vuelve" a habilitar la interrupciones
  
    digitalWrite(rojo1, LOW);
    
    digitalWrite(verde1, LOW);

  while(state){
    
    digitalWrite(amarillo1, LOW);
    digitalWrite(amarillo2, LOW);
    delay(500);
    digitalWrite(amarillo1, HIGH);
    digitalWrite(amarillo2,HIGH);
                 
    delay(500);
    }
    
  }
  

void extenderRojo() {
  interrupts();
  Serial.println("Paso por aca");
  delayRojo1 = 5000;
  //noInterrupts();
 // pinMode(5, OUTPUT);
 // pinMode(12, OUTPUT);
  //pinMode(11, OUTPUT);
  //pinMode(10, OUTPUT);
  //pinMode(9, OUTPUT);
  //pinMode(8, OUTPUT);
  //Serial.begin(9600);
 // pinMode(3, INPUT_PULLUP);
  //pinMode(2, INPUT_PULLUP);
  //while()
      
      digitalWrite(rojo1, HIGH);
 // digitalWrite(verde2, LOW);
    delay(delayRojo1);
  digitalWrite(rojo1, LOW);
  digitalWrite(verde2, HIGH);

  interrupts();
     }
