// ***** Definiendo pines *****
#define Led_R D6
#define Led_B D7
#define Led_G D8
// **** Configurando pines para salida *****
void setup() {
  Serial.begin(9600);
  pinMode(Led_R, OUTPUT);
  pinMode(Led_B, OUTPUT);
  pinMode(Led_G, OUTPUT);
  Serial.println("\n\t Ingresar un numero entero :");
}
// ***** Programa principal *****
void loop() {
  if (Serial.available()) {
    String cad;// Definiendo una variable de tipo cadena de caracteres
    Shutdown();// Subprograma para apagar los leds
    cad = Serial.readString();// guardando lectura de datos.
    F_signo(cad.toFloat());// convirtiendo la cadena de caracteres
                          //  en un numero real de tipo float.
  }
}
// **** Sea la funcion que identifica el signo del numero ****
void F_signo(float n) {
  Muestra_resultado(n);
  if (n == 0) {
    digitalWrite(Led_R, HIGH);// si " V " encendera el led rojo
    Serial.print(" CERO.");
  } else if (n < 0) {
    digitalWrite(Led_B, HIGH);// si " V " encendera el led azul
    Serial.print(" NEGATIVO.");
  } else if (n > 0) {
    digitalWrite(Led_G, HIGH);// si " V " encendera el led verde
    Serial.print(" POSITIVO.");
  } else {
    Serial.print("error");
  }
}
// Funcion para mostrar en consola el valor del unmero ingresado
void Muestra_resultado(float n) {
  Serial.print("\n\t El numero ' ");
  Serial.print(n);
  Serial.print(" ' es ");
}
// Funcion de apagado de leds
void Shutdown() {
  digitalWrite(Led_R, LOW);
  digitalWrite(Led_B, LOW);
  digitalWrite(Led_G, LOW);
}