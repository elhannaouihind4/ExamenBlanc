#Exercice1: 

1.Résultat affiché: 15 20

2.Passage par valeur et passage par référence :

Passage par valeur : la fonction reçoit une copie de la variable. Les modifications effectuées dans la fonction ne changent pas la variable originale.
Passage par référence : la fonction travaille directement sur la variable originale. Les modifications effectuées dans la fonction changent donc cette variable.

3.Modifiez la fonction modifier() pour que les deux variables soient modifiées.

Il faut ajouter & devant le paramètre b , donc résultat c'est 15 30 .

4.Expliquez le rôle de l'opérateur & dans la déclaration des paramètres.

L'opérateur & permet de déclarer un paramètre passé par référence. La fonction utilise directement la variable originale, sans créer une copie. Ainsi, toute modification du paramètre modifie la variable originale.

#Exercice2: 

<img width="250" height="206" alt="Capture d&#39;écran 2026-10-25 163418" src="https://github.com/user-attachments/assets/ae1108d9-53c8-4877-a67f-189ccbe55650" />

#Exercice3: 

<img width="349" height="184" alt="Capture d&#39;écran 2026-10-25 164343" src="https://github.com/user-attachments/assets/44f672bc-1dc3-47c8-a2f1-1fa9a4020a25" />

question 6: Avec virtual : le destructeur est résolu dynamiquement selon le type réel de l’objet. On appelle d’abord ~Voiture() (ou ~Camion()), puis automatiquement ~Vehicule(). L’objet est donc détruit entièrement et dans le bon ordre.

