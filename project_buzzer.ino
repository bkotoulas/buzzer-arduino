// Vasilis kotoulas 05/10/2023

// project youtube https://www.youtube.com/watch?v=tkwhxi_4EX4

// Δηλωση PIN arduino nano / μεταβλητες

int led_pwm = 5;       //Pin 5 PWM output
int sw = 2;            //Pin 2 input digital
int value_sw = 0;      // μεταβλητη διακοπτη
int buzzer = 3;        // Pin 3 PWM output
int delay_loop = 200;  // Μεταβλητη για καθυστερηση




// τρεχει την πρωτη φορα

void setup() {

  Serial.begin(9600);  // επικοινωνια με σειριακη θυρα

  pinMode(led_pwm, OUTPUT);  // δηλωση Led ως εξοδος
  pinMode(buzzer, OUTPUT);   // δηλωση Buzzer σαν εξοδος
  pinMode(sw, INPUT_PULLUP); // δηλωση διακοπτη σαν εισοδος ψηφιακη pin 2 σε κατασταση Pullup


  //Demo Αρχικη εκκινηση

  digitalWrite(led_pwm, HIGH);  // Αναψε το Led
  digitalWrite(buzzer, HIGH);   //βγαλε ηχο στο buzzer
  delay(1300);                   //καθυστερηση για 1.3 Sec
  digitalWrite(led_pwm, LOW);   // σβησε Led
  digitalWrite(buzzer, LOW);// κοψε ηχο στο buzzer

}

void loop() {

  value_sw = digitalRead(sw);// Διαβασε απο τον Διακοπτη  Sw pin 2

//Αν το value_sw ειναι0 

  if (value_sw == 0) {

    Serial.println(value_sw);

    digitalWrite(led_pwm, HIGH);  // Αναψε το Led
    tone(buzzer, 490);           // ενεργοποιηση ηχου στο buzzer  490 hz
    delay(200);                   // καθυστερηση 200 ms
    digitalWrite(led_pwm, LOW);   // σβησε Led
    delay(delay_loop);            // καθυστερηση 0.2 sec

// αν οχι 

  } else {

    Serial.println(value_sw);
    digitalWrite(led_pwm, LOW);  // Σβησε το Led
    noTone(buzzer);              // απενεργοποιησε τον ηχο στο buzzer
  }
}   
