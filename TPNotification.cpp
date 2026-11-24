// TPNotification.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include <iostream>
#include"Notification.h"
#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"
#include "GestionnaireNotifications.h"

using namespace std;

int main()
{
    // Création des objets
    NotificationEmail email(
        "sara@example.com",
        "Nouvelle connexion detectee",
        "Securite"
    );

    NotificationSMS sms(
        "0612345678",
        "Votre code est 4582",
        "Orange"
    );

    NotificationPush push(
        "user_102",
        "Paiement confirme",
        "MyBank"
    );

    cout << "===== AFFICHAGE =====" << endl;

    email.afficher();
    sms.afficher();
    push.afficher();

    // Tableau de 3 pointeurs
    Notification* tab[3];

    tab[0] = &email;
    tab[1] = &sms;
    tab[2] = &push;

    cout << "\n===== POLYMORPHISME =====" << endl;

    for (int i = 0; i < 3; i++)
    {
        tab[i]->envoyer();
    }

    // Gestionnaire
    GestionnaireNotifications G;

    G.ajouter(&email);
    G.ajouter(&sms);
    G.ajouter(&push);

    cout << "\n===== ENVOI GROUPE =====" << endl;

    G.envoyer();

    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
