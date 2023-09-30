#define m1 5  //Right Motor MA1
#define m2 6  //Right Motor MA2
#define m3 11  //Left Motor MB1
#define m4 10  //Left Motor MB2


//**********5 Channel IR Sensor Connection//
#define ir1 2
#define ir2 7
#define ir3 4
#define ir4 8
#define ir5 12
//*************************************************//
int i=255;
int k=50;
void setup() {

  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);

  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);
}

void loop() {
  //Reading Sensor Values
  int s1 = digitalRead(ir1);  //Left Most Sensor
  int s2 = digitalRead(ir2);  //Left Sensor
  int s3 = digitalRead(ir3);  //Middle Sensor
  int s4 = digitalRead(ir4);  //Right Sensor
  int s5 = digitalRead(ir5);  //Right Most Sensor



   

  


  if((s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    

    right();
  }
 


  if((s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 1))
  {
    //going forward with full speed 
     
       
    right();
  }


  
  if((s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 1) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    forward();
  }



  
  if((s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 1) && (s5 == 1))
  {
    //going forward with full speed 
     
       
    right();
  }



  
  if((s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 0) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    forward();
  }


  
  if((s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 0) && (s5 == 1))
  {
    //going forward with full speed 
     
forward();
  }


  
  if((s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 1) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    forward();
  }


  
  if((s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 1) && (s5 == 1))
  {
    //going forward with full speed 
   right();
  }


  
  if((s1 == 0) && (s2 == 1) && (s3 == 0) && (s4 == 0) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    left();
  }


  
  if((s1 == 0) && (s2 == 1) && (s3 == 0) && (s4 == 0) && (s5 == 1))
  {
    //going forward with full speed 
     
       
    left();
  }


  
  if((s1 == 0) && (s2 == 1) && (s3 == 0) && (s4 == 1) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    forward();
   
  }


  
  if((s1 == 0) && (s2 == 1) && (s3 == 0) && (s4 == 1) && (s5 == 1))
  {
    //going forward with full speed 
     
       
    left();
  }



  
  if((s1 == 0) && (s2 == 1) && (s3 == 1) && (s4 == 0) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    forward();
  }



  
  if((s1 == 0) && (s2 == 1) && (s3 == 1) && (s4 == 0) && (s5 == 1))
  {
    //going forward with full speed 
     
       
  right();
  }


  
  if((s1 == 0) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    forward();
  }


  
  if((s1 == 0) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 1))
  {
    //going forward with full speed 
     
       
  forward();
  }


  
  if((s1 == 1) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    left();
  }


  
  if((s1 == 1) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 1))
  {
    //going forward with full speed 
     
       
    forward();
  }


  
  if((s1 == 1) && (s2 == 0) && (s3 == 0) && (s4 == 1) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    forward();
  }


  
  if((s1 == 1) && (s2 == 0) && (s3 == 0) && (s4 == 1) && (s5 == 1))
  {
    //going forward with full speed 
     
       
    left();
  }


  
  if((s1 == 1) && (s2 == 0) && (s3 == 1) && (s4 == 0) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    left();
  }


  
  if((s1 == 1) && (s2 == 0) && (s3 == 1) && (s4 == 0) && (s5 == 1))
  {
    //going forward with full speed 
     
       
    forward();
  }


  
  if((s1 == 1) && (s2 == 0) && (s3 == 1) && (s4 == 1) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    left();
  }


  
  if((s1 == 1) && (s2 == 0) && (s3 == 1) && (s4 == 1) && (s5 == 1))
  {
    //going forward with full speed 
     
       
    left();
  }


  
  if((s1 == 1) && (s2 == 1) && (s3 == 0) && (s4 == 0) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    left();
  }

  
  if((s1 == 1) && (s2 == 1) && (s3 == 0) && (s4 == 0) && (s5 == 1))
  {
    //going forward with full speed 
     
       
    left();
  }


  
  if((s1 == 1) && (s2 == 1) && (s3 == 0) && (s4 == 1) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    left();
  }


  
  if((s1 == 1) && (s2 == 1) && (s3 == 0) && (s4 == 1) && (s5 == 1))
  {
    //going forward with full speed 
     
       
    left();
  }


  
  if((s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 0) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    left();
  }



  
  if((s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 0) && (s5 == 1))
  {
    //going forward with full speed 
     
       
    left();
  }


  
  if((s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 0))
  {
    //going forward with full speed 
     
       
    left();
  }


  
  if((s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 1))
  {
    //going forward with full speed 
     
     right();

  }




}

void forward(){
  analogWrite(m1, i);
    analogWrite(m2, 0);
    analogWrite(m3, i);
    analogWrite(m4, 0);
    
}

void right(){
  analogWrite(m1, 0);
    analogWrite(m2, i);
    analogWrite(m3, i/2);
    analogWrite(m4, 0);

}



void left(){
  analogWrite(m1, i);
    analogWrite(m2, 0);
    analogWrite(m3, 0);
    analogWrite(m4, i/2);
 
}


