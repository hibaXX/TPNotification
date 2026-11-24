#include "GestionnaireNotifications.h"

GestionnaireNotifications::GestionnaireNotifications()
{
    tab = new Notification * [100];
    nb = 0;
}

bool GestionnaireNotifications::ajouter(Notification* n)
{
    if (nb < 100 && n != nullptr)
    {
        tab[nb] = n;
        nb++;
        return true;
    }

    return false;
}

void GestionnaireNotifications::envoyer() const
{
    for (int i = 0; i < nb; i++)
    {
        tab[i]->envoyer();
    }
}

GestionnaireNotifications::~GestionnaireNotifications()
{
    delete[] tab;
}