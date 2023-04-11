#include "tic_tac_toe_manager.h"

int main() 
{
	TicTacToeManager manager;
	TicTacToe game;
	string player;
	string cont = "Y";
	
	cout<<"Enter X or O: "<<"\n";
	cin>>player;

	game.start_game(player);

	while(cont == "Y"){
		int position;
		cout<<"Enter a Position(between 1 and 9): "<<"\n";
		cin>>position;
		position--;
		game.mark_board(position);
		cout<<game;
		if(game.game_over()==true){
			manager.save_game(game);
			cout<<"game over"<<"\n";
			cout<<"The winner is "<<game.get_winner()<<"\n";
			cout<<"Enter Y to play again: "<<"\n";
			cin>>cont;
			if(cont == "Y"){
				cout<<"Enter X or O: "<<"\n";
				cin>>player;
				game.start_game(player);
			} else {
				cout<<manager;
			}
		}
	}

	return 0;
}