---------------------------------------------------------------------------------------------------------------------

					MINI PROJET C : ** Extension De jeu  'Snake'**
					
							Par :**TOUIL Zouheir**
							    Sous Windows

---------------------------------------------------------------------------------------------------------------------
L'**objectif** dans ce **Mini Projet** est de développer une Version avancé du **jeu de Snake**:

# **Résume:**

Il s'agit d'une implémentation du jeu de Snake classique avec quelques différences en utilisant le langage de 
programmation C et la bibliothèque de jeux Raylib.
Dans cette version, J'ai implémenté une panoplie de fonctionnalité pour avoir une version de jeu très avancé.

# **Les Fonctionnalités Implémentées**:

1/Ajout d'une introduction Au jeu 

2/Ajout d'une Animation  au introduction.

3/Ajout d'un menu : easy medium hard (+Sound)

4/Ajout d'un compteur de Score

5/Les trois niveaux **Easy, Medium et HardCord **

6/ Dans Le niveau Easy il y a Aucune Limite de bordure ! **The Snake Is Free** :>

7/Ajout des Walls pour  les deux niveaux medium et hard

8/Changement de vitesse selon le niveau

9/Ajout de son lorsque le snake mange le fruit

10/Ajout != BackGround selon le niveau

11/Ajout de theme gameOver



# Voici quelques **SreensShots** du jeu:

!<img src="ScreensShots_Of_Game/Menu.PNG" width="1000">






# Les instructions pour **Installation / Execution** :

*Sur Linux/macOs :*

-Afin de compiler et / ou d'exécuter le jeu **SNakeVersion 2**, vous devez installer ou construire une bibliothèque statique pour Raylib 
(consultez le wiki dans la page du dépôt officiel de raylib - Travailler sur macOS et travailler sur GNU Linux)[LienVersRaylib](https://www.raylib.com/games.html)

-Après avoir construit / compilé la bibliothèque statique, le moyen le plus simple est d'exécuter les commandes make dans le dossier avec le fichier .c 
(si vous voulez simplement exécuter le jeu juste après le clonage du référentiel, exécutez simplement les fichiers corrects:

**Pour le clonage :**

git clone [SnakeGameV2Repo](https://gvipers.imt-lille-douai.fr/zouheir.touil/miniprojet-c-snake)

cd MiniProjet-c

make:

./mainGame

Si vous rencontrez des erreurs, essayez d'exécuter le **make clean** et après le **make** pour nettoyer les dossiers et recompiler tout

make clean pour supprimer l'exécutable et les autres fichiers compilés

make pour tout compiler pour créer l'exécutable

 *Sur windows :*
 
 -Vous devriez avoir installé mingw32.
 
 -vous devez remplacer ./lib/libraylib.a par une version Windows: soit obtenir une version compilée sur le site Web de Raylib ou github, soit recompiler 
Raylib par vous-même.

 -Si vous utiliserez L'Ide NotePad++ fourni avec Raylib il suffit d'ouvrir le fichier mainGame.c et tapez ctrl+F6 après choisissez raylib_compile_execute.
 
# Les Instructions de jeu:

Dans le jeu "SnakeV2", le joueur contrôle un serpent (Snake) qui doit "manger" des Fruit répartis sur la carte.

Les étapes du jeu:

Au début du jeu, le Joueur doit choisir un niveau selon les trois : easy,meduim ou hardcore. 

ensuite,le serpent commence avec un éléments: une tête

Il y aura du Fruit répartie sur la carte du jeu.

Si le serpent mange un Fruit  cet Fruit deviendra une partie du serpent en tant qu'élément de la queue.

Chaque fois que le serpent mange un Fruit, Sa vitesse augmente

Le serpent meurt et la partie est terminée si:

-Le Snaket frappe les murs de la carte (Pour les deux niveau meduim et HardCore) 

-Le snake se frappe avec lui même

L'augmentation du score sera basée sur la taille du serpent, pour chaque Fruit que le serpent mange, le score augmentera (+1).


# Description des fichiers écrits:

Dans le Reposetory Vous trouverez 3 fichiers  de code:

-mainGame : Contient le programme principal du jeu 

-Snake_v2.h: Contient les structures utilisées  dans le programme ainsi le signature des fonction utiliseé(Initgame,intro,menuGame...)

-Snake_v2.c: Contient les fonctions utilisées dans le programme principal pour lancer l'introduction(introGame) et le menu(menu game) et pour l'initailisation du jeu
et la mise à jeur du jeu (update)


# Les points d’amélioration:

-mettre des difficultés au centre de jeu(murs à ne pas traverser)

-Créer des Fruits avec des couleurs Aléatoires et Si le serpent mange un Fruit de couleur différente  que la tête, la tête disparaît et, par conséquent, le serpent sera réduit.
Si le serpent mange une Fruit de la même couleur de la tête, cette Fruit deviendra une partie du serpent en tant qu'élément de la queue.


