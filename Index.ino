int trava = 2;
int status = 0;
void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(trava, OUTPUT);
    Serial.println("Digite 1 para abrir e 0 para fechar");
    //IMPRIME O TEXTO NO MONITOR SERIAL
}
void loop() {
    char a = Serial.read(); //VARIÁVEL RESPONSÁVEL POR RECEBER O
    if (a == '1'){
        if(status == 0){
            digitalWrite(trava, HIGH); // Faz com que abra a trava
            status = 1; //VARIÁVEL RECEBE O VALOR 1 (LIGADO)
            Serial.println("ABERTO"); //IMPRIME O TEXTO NO MONITOR
        }
    }
    else if(a == '2'){
        if(status == 1){
            digitalWrite(trava, LOW); // Faz com que feche a trava
            status = 0; //VARIÁVEL RECEBE O VALOR 1 (LIGADO)
            Serial.println("FECHADO"); //IMPRIME O TEXTO NO MONITOR
        }
    }
}
