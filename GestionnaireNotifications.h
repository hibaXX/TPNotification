#pragma once
#include"Notification.h"
class GestionnaireNotifications {
	Notification** tab;
	int nb;
public:
	GestionnaireNotifications();
	bool ajouter(Notification* n);
	void envoyer()const;
	~GestionnaireNotifications();
};