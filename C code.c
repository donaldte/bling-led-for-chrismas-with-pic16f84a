//// ASSIGMENT OF MICROCONTROLLER   Done by: TEDOM NOUTCHOGOUIN DONALD  MATRICULE UBA19E0210 LEVEVEL 400


// Here is function to on odd leds and off even leds
void oddLed(){
                       PORTB.F0 = 1;     // on the first odd
                       PORTB.F1 = 0;      // off the second
                       PORTB.F2 = 1;      // on the third led
                       PORTB.F3 = 0;      // off the 4th led
                       PORTB.F4 = 1;      // on the 5th led
                       PORTB.F5 = 0;      // off the 6th led
                       PORTB.F6 = 1;      // on the 7th led
                       PORTB.F7 = 0;      // off the 8th led


}
// Here is function to on even leds and off odd leds
void evenLed(){
                       PORTB.F0 = 0;      // off the first led
                       PORTB.F1 = 1;      // on the second led
                       PORTB.F2 = 0;      // off the third led
                       PORTB.F3 = 1;      // on the 4th led
                       PORTB.F4 = 0;      // off the 5th led
                       PORTB.F5 = 1;      // on the 6th led
                       PORTB.F6 = 0;      // off the 7th led
                       PORTB.F7 = 1;      // on the 8th led


}


// this function is for on the first four led and off the four last led
void firstFourLed(){
                       PORTB.F0 = 1;    // on the first led
                       PORTB.F1 = 1;    // on the second led
                       PORTB.F2 = 1;    // on the third led
                       PORTB.F3 = 1;    // on the 4th led
                       PORTB.F4 = 0;    // off the 5th led
                       PORTB.F5 = 0;    // off the 6th led
                       PORTB.F6 = 0;    // off the  7th led
                       PORTB.F7 = 0;    // off the 8th led


}
// This function is for on the last four led and off the first led
void lastFourLed(){
                       PORTB.F0 = 0;   // off the first led
                       PORTB.F1 = 0;   // off the second led
                       PORTB.F2 = 0;   // off the third led
                       PORTB.F3 = 0;   // off the 4th led
                       PORTB.F4 = 1;   // on the 5th led
                       PORTB.F5 = 1;   // on the 6th led
                       PORTB.F6 = 1;   // on the 7th led
                       PORTB.F7 = 1;   // on the 8th led
}
// Here is the main function of the program
void main() {

                 /////// Initializations ///////  
                  TRISB = 0x00;  // all PORTB set as output   
                  TRISA = 0x1F; // all PORTA set as input   
                  
                  PORTB = 0x00; // put off all PORTB


                  do{
                     unsigned int i;   // declaration of i
                     // programm to blink the 8 leds 10 times
                     for(i=0; i<=10; i++){
                                 PORTB = 0b11111111;   // all PORTB on       
                                 Delay_ms(500);        // 500 milliseconds break       
                                 PORTB = 0b00000000;   // all PORTB off       
                                 Delay_ms(500);        // 500 milliseconds break
                     
                     }
                     
                     // Loop to on led progressively and off it progressively ////
                      for(i=0; i<=10; i++){
                       PORTB = 0b00000001;   // first pin of PORTB on and all others off       
                       Delay_ms(500);        // 500 milliseconds break       
                       PORTB = 0b00000011;   // first and second pin of PORTB on and all others off       
                       Delay_ms(500);        // 500 milliseconds break       
                       PORTB = 0b00000111;   //        
                       Delay_ms(500);        // 500 milliseconds break       
                       PORTB = 0b00001111;   //       
                        Delay_ms(500);        // 500 milliseconds break       
                       PORTB = 0b00011111;   //        
                       Delay_ms(500);        // 500 milliseconds break       
                       PORTB = 0b00111111;   //        
                       Delay_ms(500);        // 500 milliseconds break     
                       PORTB = 0b01111111;   //
                       Delay_ms(500);        // 500 milliseconds break       
                       PORTB = 0b11111111;   //             
                       Delay_ms(500);        // 500 milliseconds break
                         // Sequence of extinction     
                       PORTB = 0b11111111;   //      
                       Delay_ms(500);        // 500 milliseconds break     
                       PORTB = 0b01111111;   //      
                       Delay_ms(500);        // 500 milliseconds break     
                       PORTB = 0b00111111;   //      
                       Delay_ms(500);        // 500 milliseconds break     
                       PORTB = 0b00011111;   //      
                       Delay_ms(500);        // Pause de 500 millisecondes     
                       PORTB = 0b00001111;   //      
                       Delay_ms(500);        // 500 milliseconds break    
                       PORTB = 0b00000111;   //      
                       Delay_ms(500);        // 500 milliseconds break     
                       PORTB = 0b00000011;   //

                     }
                     
                     // loop for on odd and even 10 times
                      for(i=0; i<=10; i++){
                      
                               oddLed();  // called function to on odd led
                               Delay_ms(500);  // 500 milliseconds break
                               evenLed();  // called function to off even led




                      

                     }
                     
                     // Loop for on the first four led and after on the four last led
                     for(i=0; i<=10 ; i++){

                       firstFourLed();       //called function to on the first four leds
                       Delay_ms(500);  // 500 milliseconds break
                       lastFourLed();      // called function to on the  last four leds
                     
                     }
                  
                  }while(1);
}