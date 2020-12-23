const int CONNEXION=13;
int tempsDePause;
int compteur;

// Boucle d'initialisation
void setup(){
  pinMode(CONNEXION, OUTPUT); // connexion 13 en mode "envoi de courant"
  tempsDePause = 2000;
  compteur = 0;
}

// Boucle infinie
void loop() {
    if (compteur < 10){
      tempsDePause = 500; // Attente de 500 ms (1/2 seconde)
    }
    else if (compteur >= 10 && compteur < 100){
      tempsDePause = 50; // Attente de 50 ms (1/20 seconde)
    }
    else if (compteur >=  100 && compteur < 110) {
      tempsDePause = 1000; // Attente de 1000 ms (1 seconde)
    }
    else if (compteur ==  110) {
      compteur = 0; 
    }
    
    digitalWrite(CONNEXION, HIGH); // Envoi de courant dans la connexion 13 
    delay(tempsDePause); 
    digitalWrite(CONNEXION, LOW); //Arrêt du courant dans la connexion 13
    delay(tempsDePause); 
    compteur ++;
    

}
