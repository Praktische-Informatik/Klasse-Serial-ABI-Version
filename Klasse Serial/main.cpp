#include "Serial/Serial.h"   // Serial-Klasse liegt im Ordner Serial/Serial  (siehe VS-Projektordner)

int main()
{
    // COM-Port-Nummer: hier zur Demo fest verdrahtet (statt cin >> port_nr)
    string portNr = "1";  // Beispiel: Empfänger auf 1
    //cin >> portNr;
    cout << "COM Port Nummer (Empfaenger): " << portNr << endl;

    // "COM" + Nummer ergibt den Portnamen (z. B. "COM1")
    string port = "COM" + portNr;

    Serial com(port, 9600, 8, ONESTOPBIT, NOPARITY);

    if (!com.open()) {
        cout << "Schnittstelle Empfaenger konnte NICHT geoeffnet werden. Programmabbruch!" << endl;
        return -1;
    }

    cout << "Schnittstelle Empfaenger geoeffnet" << endl;

    return 0;
}