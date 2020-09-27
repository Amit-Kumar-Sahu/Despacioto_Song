 #include "pitches.h"
int led=13;

int noteDuration;
int pauseBetweenNotes = 0;
int negra;
void setup() {
  pinMode(led, OUTPUT);   
  negra=640;

     
}

void loop() {

 chorus();
}

void chorus(){
     notars(negra, NOTE_D5);
     notars(negra, NOTE_CS5);digitalWrite(led, HIGH);   // (1)
     notars(negra/2, NOTE_B4);
     notars(negra/4, NOTE_FS4);digitalWrite(led, LOW);    // (2)
     delay(negra/4); digitalWrite(led, HIGH);   // (3)
     notars(negra/4, NOTE_FS4);
     notars(negra/4, NOTE_FS4);
digitalWrite(led, LOW);    // (4)
     notars(negra/4, NOTE_FS4);
     notars(negra/4, NOTE_FS4);digitalWrite(led, HIGH);   //  (1) 
     
     notars(negra/4, NOTE_FS4);

     notars(negra/4, NOTE_B4);
     notars(negra/4, NOTE_B4);digitalWrite(led, LOW);    //  (2) 
     notars(negra/4, NOTE_B4);digitalWrite(led, HIGH);   //  (3)  
     notars(negra/2, NOTE_B4);digitalWrite(led, LOW);    //  (4)   

     notars(negra/4, NOTE_A4);  
          
     notars(negra/4, NOTE_B4);digitalWrite(led, HIGH);   //  (1) 
     delay(negra/4); 
     delay(negra/4); 
     notars(negra/4, NOTE_G4);  digitalWrite(led, LOW);    //  (2) 
     delay(negra/4);digitalWrite(led, HIGH);   //  (3) 
//......
     notars(negra/4, NOTE_G4);  
     notars(negra/4, NOTE_G4);digitalWrite(led, LOW);    //  (4)   
     notars(negra/4, NOTE_G4);  
     notars(negra/4, NOTE_G4);digitalWrite(led, HIGH);   //  (1)   
     notars(negra/4, NOTE_G4);  

     notars(negra/4, NOTE_B4);  
     notars(negra/4, NOTE_B4);  digitalWrite(led, LOW);    //  (2) 
     notars(negra/4, NOTE_B4);digitalWrite(led, HIGH);   //  (3) 
     notars(negra/2, NOTE_B4);digitalWrite(led, LOW);    //  (4) 
     
     notars(negra/4, NOTE_CS5);
     notars(negra/4, NOTE_D5);digitalWrite(led, HIGH);   //  (1) 
     delay(negra/4);
     delay(negra/4);
     notars(negra/4, NOTE_A4);digitalWrite(led, LOW);    //  (2)      
     delay(negra/4);digitalWrite(led, HIGH);   //  (3) 
     
     notars(negra/4, NOTE_A4);     
     notars(negra/4, NOTE_A4);digitalWrite(led, LOW);    //  (4)           
     notars(negra/4, NOTE_A4);               
     notars(negra/4, NOTE_A4);digitalWrite(led, HIGH);   //  (1)                
     
     notars(negra/4, NOTE_D5);          
     notars(negra/4, NOTE_CS5);               
     notars(negra/4, NOTE_D5);digitalWrite(led, LOW);    //  (2)           
     notars(negra/4, NOTE_CS5);digitalWrite(led, HIGH);   //  (3)          
     notars(negra/2, NOTE_D5);digitalWrite(led, LOW);    //  (4)                
     //
     notars(negra/4, NOTE_E5);
     notars_jai(negra/2, NOTE_E5,negra/4);  // (1)
//     notars(negra/2, NOTE_E5);  

    //-----------------------------------------------
      tone(8,NOTE_CS5 ,negra*3/4);
    //-----------------------------------------------
      delay(negra/4);
      delay(negra/4);
     digitalWrite(led, LOW);    //  (2)                     
      delay(negra/4);
     digitalWrite(led, HIGH);   //  (3)                     
     noTone(8);
     delay(negra/4);
     
     //--------------
     delay(negra/4);
     digitalWrite(led, LOW);    //  (4) 

     delay(negra/4);
     delay(negra/4);       
  
}
void notars(int noteDuration,int LaNota ){

    //noteDuration=negra/4;
  tone(8,LaNota ,noteDuration*0.9);
//      pauseBetweenNotes = noteDuration * 1.30;
      pauseBetweenNotes = noteDuration * 1.1;
      delay(pauseBetweenNotes);
      noTone(8);  


}
void notars_jai(int noteDuration,int LaNota ,int Desfase){

    //noteDuration=negra/4;
  tone(8,LaNota ,noteDuration*0.9);
//      pauseBetweenNotes = noteDuration * 1.30;
      pauseBetweenNotes = noteDuration * 1.1;
      delay(Desfase);
      
       digitalWrite(led, HIGH);   //  (1)   
      
        delay(pauseBetweenNotes-Desfase);
      noTone(8);  


}