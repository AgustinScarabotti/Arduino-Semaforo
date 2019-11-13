int delayRojo1= 10000;
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
int contVuelta=1;

bool state=false;

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
  if(contVuelta != 0){
    delayRojo1 = 1600;
  }
  digitalWrite(rojo1, LOW);
  digitalWrite(verde2, LOW);
  delay(delayRojo1);
  digitalWrite(verde2, HIGH);
  //NO ES
  delay(700);
  digitalWrite(naranja,LOW);
  delay(700);
  digitalWrite(naranja, HIGH);
  delay(700);
  digitalWrite(amarillo2, LOW);
  digitalWrite(naranja,LOW);
  delay(1000);
  digitalWrite(naranja, HIGH);
  delay(1000);
  digitalWrite(amarillo2, LOW);//  CAMBIO HIGH POR LOW
  digitalWrite(rojo1, HIGH);
  digitalWrite(verde1, LOW);
  digitalWrite(rojo2, LOW);
  delay(1600);
 digitalWrite(verde1, HIGH);
  digitalWrite(amarillo1, LOW);// NO ES
  delay(400);
  digitalWrite(rojo2, HIGH);

  contVuelta++;
    } 


void intermitente() {    
 state = !state;
 Serial.println("INTER");

  interrupts();  // Esta linea "vuelve" a habilitar la interrupciones
  
    digitalWrite(rojo1, LOW);
    
    digitalWrite(verde1, LOW);

  while(state){
    
    digitalWrite(amarillo1, LOW);
    digitalWrite(amarillo2, LOW);
    delay(1000);
    digitalWrite(amarillo1, HIGH);
    digitalWrite(amarillo2,HIGH);
                 
    delay(1000);
    }
    
  }
  

void extenderRojo() {
  Serial.println("Paso por aca");
  delayRojo1 = 10000;
  contVuelta = 0;
  noInterrupts();
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
      
  //    digitalWrite(rojo1, HIGH);
 // digitalWrite(verde2, LOW);
 //   delay(delayRojo1);
 // digitalWrite(rojo1, LOW);
 // digitalWrite(verde2, HIGH);

  interrupts();
     }
