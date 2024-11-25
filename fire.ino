// inialisasi pin sensor dan alarm/buzzer
const int pinApi = 8;
const int pinAlarm = 9;
// inialisasi variabel data
int data;


// ----------- program default/setting awal ----------- //
void setup()
{
 // inialisasi status I/O pin
 pinMode(pinApi, INPUT); // pin sebagai input
 pinMode(pinAlarm, OUTPUT); // pin sebagai output
}

// ----- program utama, looping/berulang terus-menerus ----- //
void loop()
{
 // variabel data adalah hasil dari pembacaan sensor
 // berupa logic LOW/HIGH
 data = digitalRead(pinApi);


 // jika data bernilai logic LOW
 if (data == LOW)
 {
 // alarm dinyalakan
 digitalWrite(pinAlarm, HIGH);
 delay(100);
 }


 // jika data tidak bernilai logic LOW
 else
 {
 // alarm dimatikan
 digitalWrite(pinAlarm, LOW);
 delay(100);
 }
}
