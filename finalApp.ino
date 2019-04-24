// // This #include statement was automatically added by the Particle IDE.
// //#include <Adafruit_ADS1X15.h>




// //#include "ifndef_ADAFRUIT_TLC59711_Hdefine_ADAFRUIT_TLC59711_H  #include <Arduino.h>   class Adafruit_TLC59711 {  public:   Adafruit_TLC59711(uint8_t n, uint8_t c, uint8_t d);   Adafruit_TLC59711(uint8_t n);    boolean begin(void);    void setPWM(uint8_t chan, uint16_t pwm);   void setLED(uint8_t lednum, uint16_t r, uint16_t g, uint16_t b);   void write(void);   void spiwriteMSB(uint32_t d);   private:   uint16_t *pwmbuffer;    uint8_t BCr, BCg, BCb;   int8_t numdrivers, _clk, _dat;  };   #endif.h"

// // This #include statement was automatically added by the Particle IDE.
 #include <blynk.h>

// //THIS PRINTS ONE VOLTAGE VALUE CONTINUOUSLY - WORKS

// //This sets up the wifi to be on automatic connectivity - connects to wifi without using serial port
// SYSTEM_MODE(AUTOMATIC);
// // This #include statement was automatically added by the Particle IDE.
// #include "Adafruit_TLC59711.h"

// // This #include statement was automatically added by the Particle IDE.
// #include <Adafruit_ADS1X15.h>

// #include <SPI.h>
// // How many boards do you have chained?
// #define NUM_TLC59711 1
// #define data 2
// #define clock 4
// //initialize LED DRIVER
// Adafruit_TLC59711 tlc = Adafruit_TLC59711(NUM_TLC59711, clock, data);
// //initialize ADC
// Adafruit_ADS1115 ads1115;

// int16_t adc0, adc1, adc2, adc3;

// char rssi[10];
// bool wificonnectivity;

// int breakloop;
// int count = 0;
// int darkcurrent = 0; 


// #define BLYNK_PRINT Serial  // Set serial output for debug prints
// //#define BLYNK_DEBUG       // Uncomment this to see detailed prints

// #include <blynk.h>

// // You should get Auth Token in the Blynk App.
// // Go to the Project Settings (nut icon).
// char auth[] = "22e9f3c75fec460db242558c0952cfa2";
// //int analogPin = A4;
// float val = 0;
// int pinValue;
// int led1 = 1;
// // Attach a Button widget (mode: Switch) to the Digital pin 7 - and control the built-in blue led.
// // Attach a Graph widget to Analog pin 1
// // Attach a Gauge widget to Analog pin 2









// void setup() {
//     //LED DRIVER CODE
//     Serial.begin(9600);
//     //Serial.println("LED Driver test");
//     //Serial.println("1 if connected to cloud, 0 if not");
//     //Serial.println(Particle.connected());
//   // Serial.println("Is Wifi ready?");
//     //Serial.println(WiFi.ready());
//     //if(WiFi.ready() == true){
//     //    Particle.publish("connected-to-wifi", PUBLIC);
//     //}
    


//     pinMode(5, OUTPUT);
//     tlc.begin();
//     tlc.write();
    
//     //ADC CODE
//     ads1115.begin();
//     Blynk.begin(auth);
    
// }

// int read(){
//     //take 25 measurements of 30 data points
//     int16_t avg, rd, sum; 
//     sum = 0;
//     for (int j = 0; j <= 30; j++) {
//         adc0 = ads1115.readADC_SingleEnded(0);
//         sum+=(adc0/30); 
//     }
//     breakloop+=1;
//     return sum;
// }

// BLYNK_WRITE(V1) {
//     if (param.asInt() == 1) { // On button down...
//         // Tweeting!
//         // Note:
//         //   We allow 1 tweet per minute for now.
//         //   Twitter doesn't allow identical subsequent messages.
//         Blynk.tweet("My Particle project is tweeting using @blynk_app and it’s awesome!\n @Particle #IoT #blynk");
        
//         // Pushing notification to the app!
//         // Note:
//         //   We allow 1 notification per minute for now.
//         Blynk.notify("You pressed the button and I know it ;)");
//     }
// }
// BLYNK_WRITE(V6) {
//     if (param.asInt() == 1) { // On button down...
//         // Tweeting!
//         // Note:
//         //   We allow 1 tweet per minute for now.
//         //   Twitter doesn't allow identical subsequent messages.
//         Blynk.tweet("My Particle project is tweeting using @blynk_app and it’s awesome!\n @Particle #IoT #blynk");
        
//         // Pushing notification to the app!
//         // Note:
//         //   We allow 1 notification per minute for now.
//         Blynk.notify("You pressed the button and I know it ;)");
//     }
// }

// BLYNK_WRITE(V11) {
//     if (param.asInt() == 1) { // On button down...
//         // Tweeting!
//         // Note:
//         //   We allow 1 tweet per minute for now.
//         //   Twitter doesn't allow identical subsequent messages.
//         Blynk.tweet("My Particle project is tweeting using @blynk_app and it’s awesome!\n @Particle #IoT #blynk");
//         Blynk.virtualWrite(V11,count);
//         count+=1;
//         // Pushing notification to the app!
//         // Note:
//         //   We allow 1 notification per minute for now.
//         Blynk.notify("You pressed the button and I know it ;)");
//     }
// }


// BLYNK_WRITE(V7) {
//     if (param.asInt() == 1) { // On button down...
//         // Tweeting!
//         // Note:
//         //   We allow 1 tweet per minute for now.
//         //   Twitter doesn't allow identical subsequent messages.
//         Blynk.tweet("My Particle project is tweeting using @blynk_app and it’s awesome!\n @Particle #IoT #blynk");
        
//         // Pushing notification to the app!
//         // Note:
//         //   We allow 1 notification per minute for now.
//         Blynk.notify("You pressed the button and I know it ;)");
//     }
// }

// BLYNK_WRITE(V0) {
//     if (param.asInt() == 1) { // On button down...
//         // Tweeting!
//         // Note:
//         //   We allow 1 tweet per minute for now.
//         //   Twitter doesn't allow identical subsequent messages.
//         Blynk.tweet("My Particle project is tweeting using @blynk_app and it’s awesome!\n @Particle #IoT #blynk");
        
//         // Pushing notification to the app!
//         // Note:
//         //   We allow 1 notification per minute for now.
//         Blynk.notify("You pressed the button and I know it ;)");
//     }
// }


// BLYNK_WRITE(V2) {
//     int r = param[0].asInt();
//     int g = param[1].asInt();
//     int b = param[2].asInt();
//     if (r > 0 || g > 0 || b > 0) {
//         RGB.control(true);
//         RGB.color(r, g, b);
//     } else {
//         RGB.control(false);
//     }
// }

// BLYNK_WRITE(V5)
// {
//   pinValue = param.asInt(); 
//   //button value
 
//       if(pinValue==0) {
//               //if(pinValue==1) break;
//               Blynk.virtualWrite(V1, "No data streaming");
//               Blynk.run();
//               pinValue = 0;
//               Blynk.syncVirtual(V5);     
//         }
      
    
      
      
//     if (pinValue==1) {
//             //HIGH
//           //irsend.sendNEC(0xF7C03F,32);
//           //val = read();
//           if(led1==1){
//             measurevalues1020();
//           }
//           else {
//             measurevalues940();
//           }
//           //pinValue = 0;
//           Blynk.syncVirtual(V5);  
//     }
//           //LOW
 

// }


// void measurevalues1020(){
    
//     int16_t dcval;
//     while(darkcurrent <= 25){
//         dcval = dark_current(); 
//         Blynk.virtualWrite(V1,dcval);
//         darkcurrent+=1;
//     } 
   
//     breakloop = 0; 
//     //turn on 1020 LED
//     Serial.println("Starting 1020 measurements"); 
//     int16_t val; 
//     tlc.setLED(3, 65535, 0, 0 );
//     Blynk.syncVirtual(V5);     
    
//     tlc.write();
//     while(breakloop <= 25){
//         val = read();
       
//     }
    
//     Serial.println("Done! - 1020"); 
//     Serial.println(" "); 
   
//     delay(500);
    
//     breakloop = 0;
//     //turn on 940 LED
//     Serial.println("Starting 940 measurements"); 
//     tlc.setLED(3, 0, 0, 65535); //red green blue
    
//     tlc.write();
//     while(breakloop <= 25){
//         val = read();
//         Serial.println(val); 
//         Serial.println("breakloop: ");
//         Serial.println(breakloop);


//     }
    
//     Serial.println("Done! - 940"); 
//     Serial.println("END TRIAL"); 
//     Serial.println(" "); 
//     delay(1000); //delay of 1 min between trials
  
    
// }



// void dark_current(){
//     Serial.println("MEASURING DARK CURRENT");
//     int16_t dc; 
//     //turn off all LEDs 
//     tlc.setLED(3, 0, 0, 0 );
//     tlc.write();
//     dc = read();
//     //Serial.println(dc); 
//     //Serial.println(" "); 
// }

// void loop() {
//     //while (wificonnection == false){
//      //   WiFiSignal sig = WiFi.RSSI();
//       //  float strength = sig.getStrength();
//      //   Serial.println("Wifi Strength (%)");
//      //   Serial.println(strength);
        
//       //  Serial.println("Wifi Local IP");
//       // Serial.println(WiFi.localIP());
//       // wificonnection = true;
//     //}
//     //val = read();
//     //Blynk.virtualWrite(V1, val);
//     Blynk.run();
//     //Serial.println("Is wifi connected?");
//     //Serial.println(Particle.connected());
//     wificonnectivity = Particle.connected();
//     Serial.println(wificonnectivity);
//     //Blynk.virtualWrite(V1,"Is Wifi Connected?");
//     //Blynk.virtualWrite(V1,wificonnectivity);
//     //measure dark current 
//     Blynk.virtualWrite(V0,"Dark Current");
//     while(darkcurrent <= 25){
//         val = dark_current(); 
//         Blynk.virtualWrite(V1, val);
//         darkcurrent+=1;
//     } 
//     //Serial.println("Done! - DARK CURRENT");
//     //take horse measurements 
//     //Serial.println("START TRIAL"); 
//     breakloop = 0; 
//     //turn on 1020 LED
//     //Serial.println("Starting 1020 measurements"); 
//     int16_t val; 
//     tlc.setLED(3, 65535, 0, 0 );
//     led1 = 1;
//     Blynk.virtualWrite(V0,"1020 Measurements in Mv");
//     tlc.write();
    
    
//     while(breakloop <= 25){
//         val = read();
//         Serial.println(val);
//         Blynk.syncVirtual(V5);    
//         if(pinValue==1) {
//             Blynk.virtualWrite(V1, val);
//         }
//         Serial.println(breakloop);
//     }
    
    
//     delay(500);
   
//     breakloop = 0;
//     Serial.println(breakloop);


//     tlc.setLED(3, 0, 0, 65535); //red green blue
//     led1 = 0;
//     Blynk.virtualWrite(V0,"940 Measurements in mV");
//     tlc.write();
    
//     while(breakloop <= 25){
//         val = read();
//         //Blynk.virtualWrite(V11,breakloop);
//         Serial.println(breakloop);
//         Blynk.syncVirtual(V5);      
//         if(pinValue==1) {
//             Blynk.virtualWrite(V7, val);
//             //Blynk.virtualWrite(V0,"940 Measurements in mV: ", val);
//         }
//         //breakloop+=1;
//         //else Blynk.virtualWrite(V1, "No data");
//     }
    
//     delay(1000); //delay of 1 min between trials
    

// }-----------code starts here




//THIS PRINTS ONE VOLTAGE VALUE CONTINUOUSLY - WORKS

//This sets up the wifi to be on automatic connectivity - connects to wifi without using serial port
SYSTEM_MODE(AUTOMATIC);
// This #include statement was automatically added by the Particle IDE.
#include "Adafruit_TLC59711.h"

// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_ADS1X15.h>

#include <SPI.h>
// How many boards do you have chained?
#define NUM_TLC59711 1
#define data 2
#define clock 4

#define BLYNK_PRINT Serial  // Set serial output for debug prints
//#define BLYNK_DEBUG       // Uncomment this to see detailed prints

#include <blynk.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "22e9f3c75fec460db242558c0952cfa2";
int analogPin = A4;
int val = 0;
int pinValue;

unsigned long lastTime = 0;






//initialize LED DRIVER
Adafruit_TLC59711 tlc = Adafruit_TLC59711(NUM_TLC59711, clock, data);
//initialize ADC
Adafruit_ADS1115 ads1115;

int16_t adc0, adc1, adc2, adc3;

char rssi[10];
bool wificonnection = false;

int breakloop;
int darkcurrent = 0; 

void setup() {
    //LED DRIVER CODE
    Serial.begin(9600);
    //Serial.println("LED Driver test");
    //Serial.println("1 if connected to cloud, 0 if not");
    //Serial.println(Particle.connected());
   // Serial.println("Is Wifi ready?");
    //Serial.println(WiFi.ready());
    //if(WiFi.ready() == true){
    //    Particle.publish("connected-to-wifi", PUBLIC);
    //}
    Blynk.begin(auth);


    pinMode(5, OUTPUT);
    tlc.begin();
    tlc.write();
    
    //ADC CODE
    ads1115.begin();
    
}

int read(){
    //take 25 measurements of 30 data points
    int16_t avg, rd, sum; 
    sum = 0;
    for (int j = 0; j <= 30; j++) {
        adc0 = ads1115.readADC_SingleEnded(0);
        sum+=(adc0/30); 
    }
    breakloop+=1;
    return sum;
}

BLYNK_WRITE(V1) {
    if (param.asInt() == 1) { // On button down...
        val = read();
        Blynk.virtualWrite(V1, val);
    }
}


BLYNK_WRITE(V2) {
    if (param.asInt() == 1) { // On button down...
        val = read();
        Blynk.virtualWrite(V2, val);
    }
}


BLYNK_WRITE(V5)
{
  pinValue = param.asInt(); 
  //button value
 
      if(pinValue==0) {
              //if(pinValue==1) break;
              Blynk.virtualWrite(V1, "No data streaming");
              Blynk.run();
              pinValue = 0;
              Blynk.syncVirtual(V5);     
        }
      
    
      
      
    if (pinValue==1) {
            
    }
          //LOW
 

}

BLYNK_WRITE(V0) {
    if (param.asInt() == 1) { // On button down...
        
    }
}



void dark_current(){
    Serial.println("MEASURING DARK CURRENT");
    int16_t dc; 
    //turn off all LEDs 
    tlc.setLED(3, 0, 0, 0 );
    tlc.write();
    if(pinValue==1) Blynk.virtualWrite(V4, val);
        while(pinValue==0) {
            Blynk.virtualWrite(V4, "No data streaming");
            Blynk.syncVirtual(V5);
        }
    dc = read();
    Blynk.virtualWrite(V4,dc);
    Serial.println(dc); 
    Serial.println(" "); 
}

void loop() {
    //while (wificonnection == false){
     //   WiFiSignal sig = WiFi.RSSI();
      //  float strength = sig.getStrength();
     //   Serial.println("Wifi Strength (%)");
     //   Serial.println(strength);
        
      //  Serial.println("Wifi Local IP");
       // Serial.println(WiFi.localIP());
       // wificonnection = true;
    //}
    
    Serial.println("Is wifi connected?");
    Serial.println(Particle.connected());
    //measure dark current 
    Blynk.virtualWrite(V0,"Dark Current");
    while(darkcurrent <= 25){
        dark_current(); 
        darkcurrent+=1;
    } 
    Serial.println("Done! - DARK CURRENT");
    //take horse measurements 
    Serial.println("START TRIAL"); 
    breakloop = 0; 
    //turn on 1020 LED
    Blynk.virtualWrite(V0, "1020 measurements");
    Serial.println("Starting 1020 measurements"); 
    int16_t val; 
    tlc.setLED(3, 65535, 0, 0 );
    
    tlc.write();
    
    unsigned long darkTime = millis();
    if((darkTime - lastTime) >= 1000){
        darkTime = darkTime - lastTime;
    }
    while(breakloop <= 25){
        val = read();
        Blynk.syncVirtual(V5);
        
        
        if(pinValue==1) Blynk.virtualWrite(V1, val);
        while(pinValue==0) {
            Blynk.virtualWrite(V4, "No data streaming");
            Blynk.syncVirtual(V5);
        }
        val = read();
        Blynk.run();
        Serial.println(val);
        Blynk.virtualWrite(V4, val);
        Serial.println("breakloop: ");
        Serial.println(breakloop);
    }
    
    Serial.println("Done! - 1020"); 
    Serial.println(" "); 
    Serial.println(breakloop);

    unsigned long ledtime1 = (millis() - darkTime);
    Serial.println("First measurements time");
    Serial.println(ledtime1*.001);
    delay(500);
    
    breakloop = 0;
    //turn on 940 LED
    Blynk.virtualWrite(V0, "940 measurements");
    Serial.println("Starting 940 measurements"); 
    tlc.setLED(3, 0, 0, 65535); //red green blue
    
    tlc.write();
    while(breakloop <= 25){
        val = read();
        Blynk.syncVirtual(V5);
        if(pinValue==1) Blynk.virtualWrite(V2, val);
        while(pinValue==0) {
            Blynk.virtualWrite(V4, "No data streaming");
            Blynk.syncVirtual(V5);
        }
        val = read();
        Serial.println(val);
        Blynk.virtualWrite(V4, val);
        Serial.println("breakloop: ");
        Serial.println(breakloop);


    }
    unsigned long ledtime2 = millis()-ledtime1-500;
    Serial.println("Second measurements time");
    Serial.println(ledtime2*.001);
    
    Serial.println("Done! - 940"); 
    Serial.println("END TRIAL"); 
    Serial.println(" "); 
    delay(1000); //delay of 1 min between trials
    lastTime = ledtime2;
}




