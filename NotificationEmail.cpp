#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string d, string m, string o)
    : Notification(d, m)
{
    this->objet = o;
}

void NotificationEmail::afficher() const
{
    cout << "EMAIL | A : " << destinataire
        << " | Objet : " << objet
        << " | Message : " << message << endl;
}

void NotificationEmail::envoyer() const
{
    cout << "Envoi Email vers " << destinataire
        << " : " << message << endl;
}