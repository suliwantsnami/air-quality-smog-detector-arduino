
class GasSensor {
  private:
    int sensorPin;

  public:
    GasSensor(int pin) {
      sensorPin = pin;
    }

    int getAirQuality() {
      return analogRead(sensorPin);
    }
};


class AlertSystem {
  private:
    int greenLED;
    int redLED;
    int buzzer;

  public:
    AlertSystem(int g, int r, int b) {
      greenLED = g;
      redLED = r;
      buzzer = b;

      pinMode(greenLED, OUTPUT);
      pinMode(redLED, OUTPUT);
      pinMode(buzzer, OUTPUT);
    }

    void indicateGoodAir() {
      digitalWrite(greenLED, HIGH);
      digitalWrite(redLED, LOW);
      digitalWrite(buzzer, LOW);
    }

    void indicateBadAir() {
      digitalWrite(greenLED, LOW);
      digitalWrite(redLED, HIGH);
      digitalWrite(buzzer, HIGH);
    }
};


class AirQualityMonitor {
  private:
    GasSensor sensor;
    AlertSystem alert;
    int dangerThreshold;

  public:
    AirQualityMonitor(GasSensor s, AlertSystem a, int threshold)
      : sensor(s), alert(a) {
      dangerThreshold = threshold;
    }

    void analyzeAir() {
      int airValue = sensor.getAirQuality();

      Serial.print("Air Quality Reading: ");
      Serial.println(airValue);

      if (airValue < dangerThreshold) {
        Serial.println("Status: GOOD AIR");
        alert.indicateGoodAir();
      } else {
        Serial.println("Status: BAD AIR / SMOG DETECTED");
        alert.indicateBadAir();
      }

      Serial.println("-------------------------");
    }
};


GasSensor gasSensor(A0);
AlertSystem alertSystem(6, 7, 8);
AirQualityMonitor airMonitor(gasSensor, alertSystem, 400);


void setup() {
  Serial.begin(9600);
  Serial.println("Air Quality Monitoring System Initialized");
}

void loop() {
  airMonitor.analyzeAir();
  delay(2000);
}
