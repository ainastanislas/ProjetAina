// Constantes pour les broches du bouton et de la LED
const int boutonPin = 2;//lkznlksdnzklfndslkzfnlkds
const int ledPin = 13;

// Variables pour le suivi de l'état du bouton et de la LED
int boutonState = 0;
int lastBoutonState = 0;
int ledState = LOW;

// Variable pour suivre le temps écoulé
unsigned long startTime = 0;
unsigned long elapsedTime = 0;
const unsigned long dureeAllumee = 900000;  // 15 minutes en millisecondes

void setup() {
  // Configurer les broches d'entrée/sortie
  pinMode(ledPin, OUTPUT);
  pinMode(boutonPin, INPUT);
}

void loop() {
  // Lire l'état actuel du bouton
  boutonState = digitalRead(boutonPin);

  // Vérifier si le bouton est enfoncé
  if (boutonState == HIGH && lastBoutonState == LOW) {
    // Allumer la LED et enregistrer le temps de début
    ledState = HIGH;
    startTime = millis();
  }

  // Vérifier si la LED a été allumée
  if (ledState == HIGH) {
    // Calculer le temps écoulé depuis le début
    elapsedTime = millis() - startTime;

    // Vérifier si la durée allouée est écoulée
    if (elapsedTime >= dureeAllumee) {
      // Éteindre la LED
      ledState = LOW;
    }
  }

  // Mettre à jour l'état de la LED
  digitalWrite(ledPin, ledState);

  // Enregistrer l'état actuel du bouton pour la prochaine itération
  lastBoutonState = boutonState;
}
