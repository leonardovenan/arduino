#include "TimerOne.h"

void setup()
{
 pinMode(13, OUTPUT);
 Timer1.initialize(500000); // Inicializa o Timer1 e config para um período de 0.5s
 Timer1.attachInterrupt(callback); // Configura a função callback() como a função para
 // ser chamada a cada interrupção do Timer1
}
void callback()
{
 digitalWrite(13, digitalRead(13) ^ 1); // Operação XOR bit a bit
}
void loop()
{
 // Seu código vai aqui...
}
