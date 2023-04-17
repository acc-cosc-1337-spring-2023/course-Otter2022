#include <memory>
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
using std::make_unique;

int main()
{
    TicTacToeManager manager;
    std::unique_ptr<TicTacToe> game;
    string player;
    string cont = "Y";
    int game_type;

    while (cont == "Y")
    {
		game_type = 2;
		while(game_type != 3 && game_type != 4){
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

        while (true)
        {
            int position;
            cout << "Enter a Position: " << "\n";
            cin >> position;
            position--;
            game->mark_board(position);
            cout << *game;
            if (game->game_over() == true)
            {
                manager.save_game(move(game));
                cout << "game over" << "\n";
                cout << "The winner is " << game->get_winner() << "\n";
                cout << "Enter Y to play again: " << "\n";
                cin >> cont;
                break;
            }
        }
    }

    cout << manager;

    return 0;
}