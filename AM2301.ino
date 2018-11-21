
//Kirjastot
#include <dht.h>
dht DHT;


//Vakiot
#define DHT21 2     // DHT21  (AM2302) - Missä pinnissä ollaan


//Muuttujat
float hum;  //Tallentaa kosteuden arvon
float temp; //Tallentaa lämpötilan arvon


void setup()


{
    Serial.begin(9600);
}

void loop()


{
    int chk = DHT.read21(DHT21);
    //Lukee datan ja tallentaa sen muuttujiin hum ja temp    
    hum = DHT.humidity;
    temp= DHT.temperature;
    //Kirjoittaa kosteuden ja lämpötilan arvot sarjaporttiin
    Serial.print("Kosteus: ");
    Serial.print(hum);
    Serial.print(" %, Lämpötila: ");
    Serial.print(temp);
    Serial.println(" °C");
    delay(2000); //Kahden sekunnin viive
}
