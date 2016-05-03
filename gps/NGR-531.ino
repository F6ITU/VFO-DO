void setup ()
{}
Serial.begin(9600);
Serial0.begin(9600);
}
void loop ()
{
if Serial0.available();
int fluxGPS=Serial0.read();
Serial.print(fluxGPS)
}