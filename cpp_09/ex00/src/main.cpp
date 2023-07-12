#include "../includes/btc.hpp"

int main(int argc, char *argv[])
{
	btc btcData;
	std::cout << std::setprecision(2) << std::fixed; // Je determine combien de chiffre je veux apres la virgule je veux afficher
	btcData.checkArgc(argc);
	btcData.checkDataCsv();
	btcData.checkInput(argv[1]);
	btcData.dataStorage();
	btcData.inputProcessing();
	return 0;
}


// A donner en parametre au programme : input.txt
// A lire dans le programme data.csv
