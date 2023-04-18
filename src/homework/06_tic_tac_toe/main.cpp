#include <memory>
#include "tic_tac_toe_manager.h"
using std::make_unique;

int main()
{
    TicTacToeManager manager;
    string player;
    string cont = "Y";
    unique_ptr<TicTacToe> game;
    int game_type;

    while (cont == "Y")
    {
		while(game_type != 3 && game_type != 4){
            game_type = 2;
			cout << "Enter 3 for TicTacToe 3x3 or 4 for TicTacToe 4x4: " << "\n";
			cin >> game_type;
			if (game_type == 3)
			{
				game = make_unique<TicTacToe3>();
			}
			else if (game_type == 4)
			{
				game = make_unique<TicTacToe4>();
			}
			else
			{
				cout << "Invalid game type." << "\n";
			}
        }
        cout << "Enter X or O: " << "\n";
        cin >> player;

        game->start_game(player);

        while (!(game->game_over()))
        {
            int position;
            cout << "Enter a Position: " << "\n";
            cin >> position;
            position--;
            game->mark_board(position);
            cout << *game;
            if (game->game_over() == true)
            {
                cout << "game over" << "\n";
                cout << "The winner is " << game->get_winner() << "\n";
                cout << "Enter Y to play again: " << "\n";
                cin >> cont;
                game_type = 2;
                manager.save_game(game);
            }
        }
    }

    cout << manager;

    return 0;
}
