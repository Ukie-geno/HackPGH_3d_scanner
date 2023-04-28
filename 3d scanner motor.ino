
#define dir 13
#define step 12
#define en 9

// the setup function runs once when you press reset or power the board
void setup() 
{
  
  pinMode(dir, OUTPUT);
  pinMode(step, OUTPUT);
  pinMode(en, OUTPUT);

  digitalWrite(en, LOW);
  digitalWrite(dir, HIGH);

  digitalWrite(step, LOW);
  
  
}


void loop() 
{
  digitalWrite(step, HIGH);  
  delay(10);                     
  digitalWrite(step, LOW);   
  delay(10);                      
}
