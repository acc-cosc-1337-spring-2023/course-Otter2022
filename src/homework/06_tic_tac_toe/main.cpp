#include "tic_tac_toe.h"

int main() 
{
	TicTacToe game;
	string player;
	string cont = "Y";
	
	cout<<"Enter X or O: "<<"\n";
	cin>>player;

	game.start_game(player);

	while(cont == "Y"){
		int position;
		cout<<"Enter a Position(between 0 and 8): "<<"\n";
		cin>>position;
		game.mark_board(position);
		game.display_board();
		if(game.game_over()==true){
			cout<<"game over"<<"\n";
			cout<<"Enter Y to play again: "<<"\n";
			cin>>cont;
			if(cont == "Y"){
				cout<<"Enter X or O: "<<"\n";
				cin>>player;
				game.start_game(player);
			}
		}
	}

	return 0;
}