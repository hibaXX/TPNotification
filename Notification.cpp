#include "Notification.h"

Notification::Notification(string d, string m)
{
    destinataire = d;
    message = m;
}

void Notification::afficher() const
{
    cout << "Destinataire : " << destinataire
        << " | Message : " << message << endl;
}

Notification::~Notification()
{
    cout << "Destructeur Notification" << endl;
}
