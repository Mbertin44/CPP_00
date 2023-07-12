#include "../includes/MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
	return;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	return;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}


template class MutantStack<int>; //instanciation explicite pour le type int. Nécéssaire pour la compilation

/*
	Dans le contexte des classes templates, la définition des fonctions membres
	doit être disponible au moment de la compilation pour chaque type utilisé
	avec la classe template.

	Cependant, les fichiers .cpp sont généralement compilés séparément des
	fichiers d'en-tête. Lorsque vous définissez les fonctions membres d'une
	classe template dans un fichier .cpp, elles ne sont pas automatiquement
	incluses dans le processus de compilation, car elles sont considérées comme
	des fonctions non utilisées.

	L'explicitation d'instanciation explicite template class MutantStack<int>;
	permet de résoudre ce problème.

	-- Pourquoi je n'ai pas de probleme de compilation si je m'est tout dans le fichier .hpp ? --

	Lorsque vous définissez toutes les fonctions membres d'une classe template
	dans un fichier d'en-tête (.hpp), elles sont automatiquement incluses dans
	chaque fichier source qui inclut ce fichier	d'en-tête. Cela signifie que les
	définitions des fonctions membres sont disponibles pour chaque type utilisé
	avec la classe template lors de la compilation.

	En revanche, lorsque vous séparez les définitions des fonctions membres dans
	un fichier de mise en œuvre (.cpp), elles ne sont pas automatiquement
	incluses dans chaque fichier source. Par conséquent, lors de la compilation
	des autres fichiers sources qui utilisent la classe template avec différents
	types, les définitions des fonctions membres ne sont pas disponibles,
	ce qui entraîne des erreurs de lien.

	Lorsque vous placez toutes les définitions dans le fichier d'en-tête, elles
	sont incluses à chaque inclusion du fichier d'en-tête, ce qui garantit que
	les définitions des fonctions membres sont disponibles pour chaque type
	utilisé avec la classe template.


	 +-----------------------+
     |  Fichier d'en-tête    |
     |    (fichier.hpp)     |
     +-----------------------+
                 |
         +--------------+
         |  Fichier     |
         |  Source      |
         | (fichier.cpp)|
         +--------------+
                 |
         +-----------------------+
         | Fichier de définition |
         |   des fonctions       |
         |   membres             |
         |   (fichier.cpp)       |
         +-----------------------+
                 |
         +--------------+
         |   Fichier   |
         |   Source    |
         |  (main.cpp) |
         +--------------+

*/