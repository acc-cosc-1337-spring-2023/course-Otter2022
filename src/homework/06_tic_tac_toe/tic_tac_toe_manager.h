//h
#include "tic_tac_toe_data.h"
#include <memory>
using std::unique_ptr;
using std::move;

class TicTacToeManager{
    public:
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData& data) : data(data) {
        games = data.get_games();
        for (const auto& game : games) {
            update_winner_count(game->get_winner());
        }
    }
    void save_game(unique_ptr<TicTacToe>& b){
        string winner = b->get_winner();
        update_winner_count(winner);
        //games.push_back(move(b));
    }
    friend ostream& operator<<(ostream & out, const TicTacToeManager &manager){
        for (auto& game : manager.games)
        {
            out << *game << "\n";
        }
        out << "X wins: " << manager.x_win << "\n";
        out << "O wins: " << manager.o_win << "\n";
        out << "Ties: " << manager.ties << "\n";
        return out;
    };
    void get_winner_total(int& o, int& x, int& t){
        x = x_win;
        o = o_win;
        t = ties;
    }
    ~TicTacToeManager() {
        data.save_games(games);
    }
    
    private:
    vector<unique_ptr<TicTacToe>> games{};
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    TicTacToeData data;

    void update_winner_count(string winner){
        if (winner == "X"){
            x_win++;
        } else if (winner == "O"){
            o_win++;
        } else {
            ties++;
        }
    }
};