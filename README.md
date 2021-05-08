# Dzień Nowych Technologii
> Projekt kieszonkowego sensora zbliżenia!

## Ogolna koncepcja
* [O projekcie](#sensor zbiżenia na Arduino)
* [Screenshots](#postępy pracy) 
* [Technologie zstosowane](#Arduino AMR, sensor ulstadziękowy echo, )
* [Konfiguracja](#Arduino Leonardo, sensro zbliżenia echo. tring, taśma komputerowa, zestaw lutoniczy)
* [Plan wykonania](#plan układu i symulacja w Tinkercad, wykonanie projektu na płytce prototypowej, wlutowanie układu na płytce uniwersalnej lutowniczej)
* [Status](#lutowanie didy i czujnika do płyti uniwersalnej)
* [Inspiracja](# Projekty arduino, inteligętne domy)
* [Kontact](#budownictwa@zoho.com )

## General info
Nauka mechatroniki, Arduino, Linux Debian 11

## Screenshots
![Thincrecad](./img/screenshot.png)

## Technologies
* Tech 1 - version 1.0
* Tech 2 - version 2.0
* Tech 3 - version 3.0

## Setup
Describe how to install / setup your local environement / add link to demo version.

## Przyłd kodu
Przykład kodu wykonującego:
    int Trig = 2;   // Numer pinu wyzwolenia
    int Echo = 3;   // Numer pinu odpowiedzi
    int Red = 4;    // Numer pinu - dioda czerwona
    long EchoTime;  // Czas trwania sygnału ECHO
    int  Distance;  // Odległość w centymetrach
    int  MaximumRange = 200; // Maksymalna odległość
    int  MinimumRange = 2;   // Minimalna odległość
         void setup()
    {
      // Inicjalizacja portu szeregowego
      Serial.begin(9600);
           // Konfiguracja pinów
      pinMode(Trig, OUTPUT);
      pinMode(Echo, INPUT);
      pinMode(Red, OUTPUT);
    }
    void loop()
    {
      // Ustawiamy TRIG w stan niski na 2us
      digitalWrite(Trig, LOW);
      delayMicroseconds(2);
           // Ustawiamy TRIG w stan wysoki na 10us
      digitalWrite(Trig, HIGH);
      delayMicroseconds(10);
           // Ustawiamy TRIG w stan niski - rozpoczynamy pomiar
      digitalWrite(Trig, LOW);
           // Odczytujamy czas trwania stanu wysokiego na pinie ECHO
      EchoTime = pulseIn(Echo, HIGH);
           // Obliczamy odległość
      Distance = EchoTime / 58;
           // Sprawdzamy zakres pomiarowy
      if (Distance >= MaximumRange || Distance <= MinimumRange)
      {
        Serial.println("Poza zakresem");  
      } else  
      {
        if (Distance < 50
       )
        {
          digitalWrite(Red, LOW);  
          delay(5000);    
        } else
        {
          digitalWrite(Red, HIGH);      
        }    
                Serial.print("Odleglosc: ");
        Serial.println(Distance);
      }
           // Opóźnienie kolejnego pomiaru
      delay(100);
    }


## Features
List of features ready and TODOs for future development
* Awesome feature 1
* Awesome feature 2
* Awesome feature 3

To-do list:
* Wow improvement to be done 1
* Wow improvement to be done 2

## Status
Project is: _in progress_, _finished_, _no longer continue_ and why?

## Inspiracje
Projekty arduino

## Contact
Created by [budownictwa@zoho.com](http://mechatronikaedu.blogspot.com/) - nie wahaj się ze mną skontaktować!
