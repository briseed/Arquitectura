void setup(){ //el void setup es la parte de nuestro programa que selecciona el bloque en el que se almacenarán estos comandos
  pinMode(4, INPUT); //define que el pin 4 es una entrada
  pinMode(2, OUTPUT); //define que el pin 2 es una salida
  pinMode(3, OUTPUT); //define que el pin 3 es una salida 
}

void loop() //el loop hace que el programa comienza directamente después del corchete de apertura (}), se ejecuta hasta que ve el corchete de cierre (}), vuelve a saltar a la primera línea del bucle () y comienza de nuevo
{
  if (digitalRead(4) == HIGH) { //si leemos el pin 4, y esta encendido o en HIGH, entonces
    digitalWrite(2, HIGH); //actualizar pin 2, o sea el led, encendido en HIGH
    digitalWrite(3, LOW); //actualiza el pin 3, apagado, LOW 
  } else { // si no
    digitalWrite(2, LOW); //actualizamos el pin 2, en apagado, LOW 
    digitalWrite(3, HIGH); //actulizamos el pin 3, en prendido, HIGH 
  }
  
}//fghfghgfh
//hgjghj
