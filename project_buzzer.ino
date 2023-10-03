// Vasilis kotoulas 03/10/2023
// Δηλωση PIN arduino nano / μεταβλητες

int led_pwm = 5;       //Pin 5 PWM output
int sw = 2;            //Pin 2 input digital
int value_sw = 0;      // μεταβλητη διακοπτη
int buzzer = 3;        // Pin 3 PWM output
int delay_loop = 200;  // Μεταβλητη για καθυστερηση




// τρεχει την πρωτη φορα

void setup() {

  Serial.print(9600);  // επικοινωνια με σειριακη θυρα

  pinMode(led_pwm, OUTPUT);  // δηλωση Led ως εξοδος
  pinMode(buzzer, OUTPUT);   // δηλωση Buzzer σαν εξοδος
  pinMode(value_sw, INPUT);  // δηλωση διακοπτη σαν εισοδος ψηφιακη


  //Demo Αρχικη εκκινηση

  digitalWrite(led_pwm, HIGH);  // Αναψε το Led
  digitalWrite(buzzer, HIGH);   //βγαλε ηχο στο buzzer
  delay(200);                   //καθυστερηση για 200 mSec
  digitalWrite(led_pwm, LOW);   // σβησε Led
  digitalWrite(buzzer, LOW);    // κοψε ηχο στο buzzer
}

void loop() {
  if (value_sw = 1) {
    digitalWrite(led_pwm, HIGH);  // Αναψε το Led
    tone(buzzer, 1000);           // ενεργοποιηση ηχου στο buzzer  1 Khz
    delay(200);                   // καθυστερηση 200 ms
    digitalWrite(led_pwm, LOW);   // σβησε Led
    delay(delay_loop);            // καθυστερηση 0.2 sec

  } else {
    digitalWrite(led_pwm, LOW);  // Σβησε το Led
    noTone(buzzer);              // απενεργοποιησε τον ηχο στο buzzer
  }
}
