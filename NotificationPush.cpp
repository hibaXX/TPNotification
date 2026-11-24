#include "NotificationPush.h"

NotificationPush::NotificationPush(string d, string m, string app)
    : Notification(d, m)
{
    application = app;
}

void NotificationPush::afficher() const
{
    cout << "PUSH | Utilisateur : " << destinataire
        << " | Application : " << application
        << " | Message : " << message << endl;
}

void NotificationPush::envoyer() const
{
    cout << "Envoi Push via " << application
        << " vers " << destinataire
        << " : " << message << endl;
}