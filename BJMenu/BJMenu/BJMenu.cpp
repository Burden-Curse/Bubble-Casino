//Programmers: Kenneth De La Cruz & Jaqueline Gastelum
//Code example https://www.geeksforgeeks.org/shuffle-a-deck-of-cards-3/
//code being used https://codereview.stackexchange.com/questions/133489/c-blackjack-game/133501
//Example http://www.cplusplus.com/forum/general/155547/
#include <iostream>
#include <array>
#include <algorithm>
#include <ctime>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

int main()
{
	cout << endl;
	cout << "PLEASE SCROLL UP AND DOWN, THE BLACKJACK MENU IS AFTER THIS TITLE" << endl;
	cout << endl;

	cout << "                                                       ***   *  *  *  *  *  *  *  ***" << endl;
	cout << "                                                 ***                                      ***" << endl;
	cout << "                                            ***                                                ***" << endl;
	cout << "                                        ***                                                        ***" << endl;
	cout << "                                    ***                                                                ***" << endl;
	cout << "                                 ***                                                                      ***" << endl;
	cout << "                              ***                                                                            ***" << endl;
	cout << "                           ***                                                                                 ***" << endl;
	cout << "                        ***__________    _____   _____   __________      __________     _____         __________ ***" << endl;
	cout << "                      *** |   ____   \\   |   |   |   |  |    ____  \\    |    ____  \\    |   |        |          |  ***" << endl;
	cout << "                    ***   |   |   |   |  |   |   |   |  |   |    |   |  |   |    |   |  |   |        |    ______|   ***" << endl;
	cout << "                  ***     |   | _/   /   |   |   |   |  |   |  _/   /   |   |  _/   /   |   |        |   |______      ***" << endl;
	cout << "                ***       |   | \\   \\    |   |   |   |  |   |    \\   \\   |   |  \\  \\    |   |        |    ______|      ***" << endl;
	cout << "              ***         |   |   |   |  |   |   |   |  |   |    |   |  |   |    |   |  |   |_____   |   |______        ***" << endl;
	cout << "             ***          |   |___/   /  |   |___|   |  |   |___/   /   |   |___/   /   |         |  |          |        ***" << endl;
	cout << "            ***           |__________/    \\_________/   |__________/    |__________/    |_________|  |__________|          ***" << endl;
	cout << "           ***                                                                                                              ***" << endl;
	cout << "          ***                                                                                                                ***" << endl;
	cout << "         ***                                                                                                                  ***" << endl;
	cout << "         ***                                                                                                                   ***" << endl;
	cout << "        ***               _________         _____         ________  __________ _____   ______    _______                        ***" << endl;
	cout << "        ***              /         \\       /    \\        /        \\|          ||   \\  |    |    /       \\                      ***" << endl;
	cout << "        ***             |     _____/      /  __  \\      |     ____/|__      __|     \\ |    |   /   ____  \\                      ***" << endl;
	cout << "        ***             |    /           /  /_\\   \\      \\  \\         |    |   |     \\|    |   |  |    |  |                    ***" << endl;
	cout << "        ***             |   |           /    ___   \\      \\  \\        |    |    |           |  |  |    |  |                    ***" << endl;
	cout << "         ***            |   \\____      /    /   \\   \\   ___\\  \\     __|    |__  |    |\\     |  |  |____|  |                  ***" << endl;
	cout << "         ***            |         \\   /    /     \\   \\  |      |   |          | |    | \\    |   \\         /                   ***" << endl;
	cout << "          ***           \\_________/  /____/       \\ ___\\\\______/   |__________| |____|  \\___|    \\_______/                  ***" << endl;
	cout << "           ***                                                                                                               ***" << endl;
	cout << "            ***                             ___          _ _   ___              ___ ____ _  _                              ***" << endl;
	cout << "             ***                            | _)\\_/ .    | /  |__  |\\ | |\\ | |__   |   |__|                             ***" << endl;
	cout << "              ***                           |__) |  .    |\\_  |___ | \\| | \\| |___  |   |  |                           ***" << endl;
	cout << "               ***                                                                                                    ***" << endl;
	cout << "                 ***                                                 and                                            ***" << endl;
	cout << "                  ***                                    _____  _    ___ _ _ ___  ___                             ***" << endl;
	cout << "                    ***                                    |   /_\\ /    | /  |  |__                            ***" << endl;
	cout << "                      ***                                __/  /   \\\\___ |\\_ _|_ |___                        ***" << endl;
	cout << "                        ***                                                                                ***" << endl;
	cout << "                           ***                                                                          ***" << endl;
	cout << "                              ***                                                                     ***" << endl;
	cout << "                                 ***                                                               ***" << endl;
	cout << "                                    ***                                                          **" << endl;
	cout << "                                       ***                                                   ***" << endl;
	cout << "                                           ***                                            ***" << endl;
	cout << "                                                 ***                                  ***" << endl;
	cout << "                                                      ***   *  *  *  *  *  *  *  ***" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                        ***   *   *   *   *   ***" << endl;
	cout << "                 ***                                 ***" << endl;
	cout << "            ***                                          ***" << endl;
	cout << "         ***                                                ***" << endl;
	cout << "       ***        ____  _        _     ____   _  __           ***" << endl;
	cout << "      ***        |  __) |       /_\\   /       | /               ***" << endl;
	cout << "     ***         |   \\  |      /   \\  |       | \\                ***" << endl;
	cout << "    ***          |____/ |____ /     \\ \\____   |  \\                ***" << endl;
	cout << "    ***                _______ _      ____  _  __                 ***" << endl;
	cout << "    ***                   |   /_\\   /      | /                   ***" << endl;
	cout << "     ***                  |  /   \\ |       | \\                ***" << endl;
	cout << "       ***             ___/ /     \\ \\____  |  \\            ***" << endl;
	cout << "         ***                                             ***" << endl;
	cout << "             ***                                   ***" << endl;
	cout << "                   ***   *   *   *   *   ***" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	const int FACTS_CHOICE = 1,
		RULES_CHOICE = 2,
		CARDS_CHOICE = 3,
		GAME_CHOICE = 4,
		QUIT_CHOICE = 5;

	int choice;
	int card;
	int n;
	int DResults;
	int PResults;
	int DealerCard1;
	int DealerCard2;
	int DealerCard3;
	int PlayerCard1;
	int PlayerCard2;
	int PlayerCard3;
	int PlayerCard4;
	int PlayerCard5;
	int Phit;
	int Phit2;
	int Phit3;
	int PlayerHand;

	cout << fixed << showpoint << setprecision(2);

	do
	{

		cout<< "          ______________________________________"
			<< "\n\t\n\t  |                                    |"
			<< "\n\t\n\t  |   BUBBLE CASINO: BLACKJACK MENU    |"
			<< "\n\t\n\t  |____________________________________|"
			<< "\n\t\n\t  |1. SPECIAL GAME FACTS               |"
			<< "\n\t\n\t  |2. GAME RULES                       |"
			<< "\n\t\n\t  |3. CARDS FACE VALUES                |"
			<< "\n\t\n\t  |4. PLAY THE GAME	                   |"
			<< "\n\t\n\t  |5. QUIT THE GAME		               |"
			<< "\n\t\n\t  |____________________________________|" << endl; 
		cout<< "\n\t\n\t Choose your choice: ";
		cin >> choice;
	
	} while (choice < FACTS_CHOICE || choice > QUIT_CHOICE);
		{
			cout << "\n\t\n\t Please enter the choice again: ";
			cin >> choice;
		}
		if (choice != QUIT_CHOICE)
		{
			cout << "\n\t\n\t Thank you for picking this. \n\n";

			switch (choice)
			{
			case 1:
				cout << "\n\t\n\t- The creators of BUBBLE CASINO'S BLACKJACK game are Kenneth De La Cruz and Jaqueline Gastelum" << endl;
				cout << "\n\t\n\t- And, a small fun fact as to why the title of this game is called BUBBLE CASINO is because we \n" <<
					    "\n\t\n\twere talking about bubbles in a conversation and we genuinley thought that it would be really \n" <<
					    "\n\t\n\tfunny to include the idea of bubbles as a theme throughout the game of blackjack. " << endl;
				cout << "\n\t\n\t- Lastly, the name BlackJack is most commonly used in the U.S., meanwhile, the rest of" <<
					    "\n\t\n\tthe world usually calls this card game Twenty-One." << endl;
				break;
			case 2:
				cout << "\n\t\n\tIf you don't know how to play blackjack, but still want to play the game then you have come to the right place!" << endl << endl;
				cout << "\n\t\n\tRULES: " << endl;
				cout << "\n\t\n\t1. The goal of blackjack is to beat the dealer's hand without going over 21." << endl;
				cout << "\n\t\n\t2. Face cards are worth 10. Aces are worth 1 or 11." << endl;
				cout << "\n\t\n\t3. Each player starts with two cards, one of the dealer's cards is hidden until the end." << endl;
				cout << "\n\t\n\t4. To 'Hit' is to ask for another card. To 'Stand' is to hold your total and end your turn." << endl;
				cout << "\n\t\n\t5. If you go over 21 you bust, and the dealer wins regardless of the dealer's hand." << endl;
				cout << "\n\t\n\t6. If you are dealt 21 from the start(Ace & 10), you got a blackjack." << endl;
				cout << "\n\t\n\t7. Doubling is like a hit, only the bet is doubled and you only get one more card." << endl;
				cout << "\n\t\n\t8. Split can be done when you have two of the same card - the pair is split into two hands." << endl;
				break;
			case 3:
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /     DIAMONDS    \\		=  FACE VALUE OF 2" << endl;
				cout << "  \\        2        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /     DIAMONDS    \\		= FACE VALUE OF 3" << endl;
				cout << "  \\       3         /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /            \\" << endl;
				cout << "   /              \\" << endl;
				cout << "  /    DIAMONDS    \\		= FACE VALUE OF 4" << endl;
				cout << "  \\       4        /" << endl;
				cout << "   \\              /" << endl;
				cout << "    \\____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /     DIAMONDS    \\		= FACE VALUE OF 5" << endl;
				cout << "  \\        5        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /     DIAMONDS    \\		= FACE VALUE OF 6" << endl;
				cout << "  \\        6        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /     DIAMONDS    \\		= FACE VALUE OF 7" << endl;
				cout << "  \\        7        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /     DIAMONDS    \\		= FACE VALUE OF 8" << endl;
				cout << "  \\        8        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /     DIAMONDS    \\		= FACE VALUE OF 9" << endl;
				cout << "  \\        9        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /     DIAMONDS    \\		= FACE VALUE OF 10" << endl;
				cout << "  \\       10        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /     DIAMONDS    \\		= FACE VALUE OF 10" << endl;
				cout << "  \\      JACK       /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /     DIAMONDS    \\		= FACE VALUE OF 10" << endl;
				cout << "  \\      QUEEN      /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /     DIAMONDS    \\		= FACE VALUE OF 10" << endl;
				cout << "  \\      KING       /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /     DIAMONDS    \\		= FACE VALUE OF 1/11" << endl;
				cout << "  \\      ACE        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      CLUBS      \\		= FACE VALUE OF 2" << endl;
				cout << "  \\        2        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      CLUBS      \\		= FACE VALUE OF 3" << endl;
				cout << "  \\        3        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      CLUBS      \\		= FACE VALUE OF 4" << endl;
				cout << "  \\        4        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      CLUBS      \\		= FACE VALUE OF 5" << endl;
				cout << "  \\        5        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      CLUBS      \\		= FACE VALUE OF 6" << endl;
				cout << "  \\        6        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      CLUBS      \\		= FACE VALUE OF 7" << endl;
				cout << "  \\        7        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /       CLUBS     \\		= FACE VALUE OF 8" << endl;
				cout << "  \\        8        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      CLUBS      \\		= FACE VALUE OF 9" << endl;
				cout << "  \\        9        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      CLUBS      \\		= FACE VALUE OF 10" << endl;
				cout << "  \\       10        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      CLUBS      \\		= FACE VALUE OF 10" << endl;
				cout << "  \\      JACK       /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      CLUBS      \\		= FACE VALUE OF 10" << endl;
				cout << "  \\     QUEEN       /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      CLUBS      \\		= FACE VALUE OF 10" << endl;
				cout << "  \\      KING       /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      CLUBS      \\		= FACE VALUE OF 1/11" << endl;
				cout << "  \\      ACE        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 2" << endl;
				cout << "  \\        2        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 3" << endl;
				cout << "  \\        3        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 3" << endl;
				cout << "  \\        3        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 4" << endl;
				cout << "  \\        4        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 5" << endl;
				cout << "  \\        5        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 6" << endl;
				cout << "  \\        6        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 7" << endl;
				cout << "  \\        7        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 8" << endl;
				cout << "  \\        8        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 9" << endl;
				cout << "  \\        9        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 10" << endl;
				cout << "  \\       10        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 10" << endl;
				cout << "  \\      JACK       /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 10" << endl;
				cout << "  \\      QUEEN      /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 10" << endl;
				cout << "  \\      KING       /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      HEARTS     \\		= FACE VALUE OF 1/11" << endl;
				cout << "  \\       ACE       /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 2" << endl;
				cout << "  \\        2        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 3" << endl;
				cout << "  \\        3        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 4" << endl;
				cout << "  \\        4        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 5" << endl;
				cout << "  \\        5        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 6" << endl;
				cout << "  \\        6        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 7" << endl;
				cout << "  \\        7        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 8" << endl;
				cout << "  \\        8        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 9" << endl;
				cout << "  \\        9        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 10" << endl;
				cout << "  \\       10        /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 10" << endl;
				cout << "  \\      JACK       /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 10" << endl;
				cout << "  \\	  QUEEN      /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 10" << endl;
				cout << "  \\      KING       /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				cout << endl;
				cout << "     _____________" << endl;
				cout << "    /             \\" << endl;
				cout << "   /               \\" << endl;
				cout << "  /      SPADES     \\		= FACE VALUE OF 1/11" << endl;
				cout << "  \\       ACE       /" << endl;
				cout << "   \\               /" << endl;
				cout << "    \\_____________/" << endl;
				break;
			case 4:
				cout << "\n\t\n\t Welcome to the game! \n\n\n" << endl;
					/*class Card
					{
					public:
						enum Rank
						{
							ACE = 1,
							TWO = 2,
							THREE = 3,
							FOUR = 4,
							FIVE = 5,
							SIX = 6,
							SEVEN = 7,
							EIGHT = 8,
							NINE = 9,
							TEN = 10,
							JACK = 11,
							QUEEN = 12,
							KING = 13
						};
						enum Suite
						{
							SPADE = 0,
							HEART = 0,
							CLUB = 0,
							DIAMOND = 0
						};
					};*/
			
					srand(time(0));
					int i = 1;
					char Phit;
					char Phit2;
					char Phit3;
					int PlayerCard1 = i + (rand() % (12 - i));
					int PlayerCard2 = i + (rand() % (12 - i));
					int PlayerCard3 = i + (rand() % (12 - i));
					int PlayerCard4 = i + (rand() % (12 - i));
					int PlayerCard5 = i + (rand() % (12 - i));
					int DealerCard1 = i + (rand() % (12 - i));
					int DealerCard2 = i + (rand() % (12 - i));
					int DealerCard3 = i + (rand() % (12 - i));
					int PlayerHand = PlayerCard1 + PlayerCard2;
					int DealerHand = DealerCard1 + DealerCard2;
					int DResults = DealerHand - 21;
					int PResults = PlayerHand - 21;
					cout << "Your Cards" << endl;
					cout << PlayerCard1 << setw(10) << PlayerCard2 << endl;
					cout << "Dealer's Cards" << endl;
					cout << DealerCard1 << setw(10) << DealerCard2 << endl;
					cout << endl;
					if (PlayerHand < 21)
					{
						cout << "\n\t\n\tAdd another Card?(Y/N)";
						cin >> Phit;
						if (Phit == 'Y' || Phit == 'y')
						{
							cout << "Your Cards" << endl;
							cout << PlayerCard1 << setw(10) << PlayerCard2 << setw(10) << PlayerCard3 << endl;
							cout << "Dealer's Cards" << endl;
							cout << DealerCard1 << setw(10) << DealerCard2 << endl;
							PlayerHand = PlayerCard1 + PlayerCard2 + PlayerCard3;
							cout << endl;

							if (PlayerHand > 21)
							{
								cout << "\n\t\n\tPlayer went over 21" << endl;
								system("pause");
							}
							else if (PlayerHand < 21)
							{
								cout << "\n\t\n\tAdd another Card?(Y/N)";
								cin >> Phit2;
								if (Phit2 == 'Y' || Phit2 == 'y')
								{
									cout << "Your Cards" << endl;
									cout << PlayerCard1 << setw(10) << PlayerCard2 << setw(10) << PlayerCard3 << setw(10) << PlayerCard4 << endl;
									cout << "Dealer's Cards" << endl;
									cout << DealerCard1 << setw(10) << DealerCard2 << endl;
									PlayerHand = PlayerCard1 + PlayerCard2 + PlayerCard3 + PlayerCard4;
									DealerHand = DealerCard1 + DealerCard2;
									cout << endl;
									if (PlayerHand > 21)
									{
										cout << "\n\t\n\tPlayer went over 21." << endl;
										system("pause");
									}
									else if (PlayerHand < 21)
									{
										cout << "\n\t\n\tAdd another Card?(Y/N)";
										cin >> Phit3;
										if (Phit3 == 'Y' || Phit3 == 'y')
										{
											cout << "Your Cards" << endl;
											cout << PlayerCard1 << setw(10) << PlayerCard2 << setw(10) << PlayerCard3 << setw(10) << PlayerCard4 << setw(10) << PlayerCard5 << endl;
											cout << "Dealer's Cards" << endl;
											cout << DealerCard1 << setw(10) << DealerCard2 << endl;
											PlayerHand = PlayerCard1 + PlayerCard2 + PlayerCard3 + PlayerCard4 + PlayerCard5;
											DealerHand = DealerCard1 + DealerCard2;
											cout << endl;
											if (PlayerHand > 21)
											{
												cout << "\n\t\n\tPlayer went over 21" << endl;
												system("pause");
											}
											else if (PlayerHand < 21)
											{
												cout << "\n\t\n\tUnder 21" << endl;
												system("pause");
											}
											else if (PlayerHand = 21)
											{
												cout << "\n\t\n\tPlayer got 21, You win" << endl;
												system("pause");
											}
											else
											{
												cout << "\n\t\n\tError" << endl;
											}
										}
										else if (Phit3 == 'N' || Phit3 == 'n')
										{
											cout << "\n\t\n\tPlayer Folds" << endl;
											system("pause");
											cout << "Your Cards" << endl;
											cout << PlayerCard1 << setw(10) << PlayerCard2 << setw(10) << PlayerCard3 << setw(10) << PlayerCard4 << endl;
											cout << "Dealer's Cards" << endl;
											cout << DealerCard1 << setw(10) << DealerCard2 << setw(10) << DealerCard3 << endl;
											PlayerHand = PlayerCard1 + PlayerCard2 + PlayerCard3 + PlayerCard4;
											DealerHand = DealerCard1 + DealerCard2 + DealerCard3;
											DResults = DealerHand;
											PResults = PlayerHand;
											cout << endl;
											if (DealerHand > 21)
											{
												cout << "\n\t\n\tDealer went over 21. Player Wins" << endl;
												system("pause");
											}
											else if (DResults < PResults)
											{
												cout << "\n\t\n\tDealer wins for being closest to 21 after you folded" << endl;
												system("pause");
											}
											else if (DResults > PResults)
											{
												cout << "\n\t\n\tPlayer wins for being the closest to 21 after folding" << endl;
												system("pause");
											}
											else if (DResults = 21)
											{
												cout << "\n\t\n\tDealer wins for pulling 21" << endl;
												system("pause");
											}
											else if (DResults = PResults)
											{
												cout << "\n\t\n\ttied, no winner" << endl;
												system("pause");
											}
											else
											{
												cout << "\n\t\n\tError" << endl;
												system("pause");
											}
										}
									}
									else if (PlayerHand = 21)
									{
										cout << "\n\t\n\tPlayer wins for pulling 21" << endl;
										system("pause");
									}
									else
									{
										cout << "\n\t\n\tError" << endl;
									}
								}
								else if (Phit2 == 'N' || Phit2 == 'n')
								{
									cout << "\n\t\n\tPlayer Folds" << endl;
									system("pause");
									cout << "Your Cards" << endl;
									cout << PlayerCard1 << setw(10) << PlayerCard2 << setw(10) << PlayerCard3 << endl;
									cout << "Dealer's Cards" << endl;
									cout << DealerCard1 << setw(10) << DealerCard2 << setw(10) << DealerCard3 << endl;
									PlayerHand = PlayerCard1 + PlayerCard2 + PlayerCard3;
									DealerHand = DealerCard1 + DealerCard2 + DealerCard3;
									DResults = DealerHand;
									PResults = PlayerHand;
									cout << endl;
									if (DealerHand > 21)
									{
										cout << "\n\t\n\tDealer went over 21. Player Wins" << endl;
										system("pause");
									}
									else if (DResults > PResults)
									{
										cout << "\n\t\n\tDealer wins for being closest to 21 after you folded" << endl;
										system("pause");
									}
									else if (DResults < PResults)
									{
										cout << "\n\t\n\tPlayer wins for being the closest to 21 after folding" << endl;
										system("pause");
									}
									else if (DResults = 21)
									{
										cout << "\n\t\n\tDealer wins for pulling 21" << endl;
										system("pause");
									}
									else if (DResults = PResults)
									{
										cout << "\n\t\n\ttied, no winner" << endl;
										system("pause");
									}
									else
									{
										cout << "\n\t\n\tError" << endl;
										system("pause");
									}
								}
								else if (PlayerHand = 21)
								{
									cout << "\n\t\n\tPlayer wins" << endl;
									system("pause");
								}
								else
								{
									cout << "\n\t\n\tError" << endl;
									system("pause");
								}
							}
							else if (PlayerHand = 21)
							{
								cout << "\n\t\n\tPlayer wins for pulling 21" << endl;
							}
							else
							{
								cout << "\n\t\n\tError" << endl;
								system("pause");
							}
						}
						else if (Phit == 'N' || Phit == 'n')
						{
							cout << "\n\t\n\tPlayer Folds" << endl;
							system("pause");
							cout << "Your Cards" << endl;
							cout << PlayerCard1 << setw(10) << PlayerCard2 << endl;
							cout << "Dealer's Cards" << endl;
							cout << DealerCard1 << setw(10) << DealerCard2 << setw(10) << DealerCard3 << endl;
							PlayerHand = PlayerCard1 + PlayerCard2;
							DealerHand = DealerCard1 + DealerCard2 + DealerCard3;
							DResults = DealerHand;
							PResults = PlayerHand;
							cout << endl;
							if (DResults < PResults)
							{
								cout << "\n\t\n\tPlayer wins for being the closest to 21 after folding" << endl;
								system("pause");
							}
							else if (DResults > PResults)
							{
								cout << "\n\t\n\tDealer wins for being the closest to 21 after you folded" << endl;
								system("pause");
							}
							else if (DResults = PResults)
							{
								cout << "\n\t\n\ttied, no winner" << endl;
								system("pause");
							}
							else
							{
								cout << "\n\t\n\tError" << endl;
							}
						}
						else
						{
							cout << "\n\t\n\tError" << endl;
							system("pause");
						}
					}
					else if (PlayerHand = 21)
					{
						cout << "\n\t\n\tPlayer Wins for having 21" << endl;
						system("pause");
					}
					else if (DealerHand = 21)
					{
						cout << "\n\t\n\tDealer wins for pulling 21" << endl;
						system("pause");
					}
					else if (DealerHand > 21)
					{
						cout << "\n\t\n\tDealer went over 21, Player Wins" << endl;
						system("pause");
					}
					else if (PlayerHand > 21)
					{
						cout << "\n\t\n\tPlayer lost for pulling over 21" << endl;
						system("pause");
					}
					else
					{
						cout << "\n\t\n\tError" << endl;
						system("pause");
					}
					cout << endl;
			}
		} 
		while (choice != QUIT_CHOICE);
		return 0;
}