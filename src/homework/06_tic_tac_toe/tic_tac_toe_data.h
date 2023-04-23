//h
#include <fstream>
#include <memory>
#include <vector>
#include "tic_tac_toe_3.h"

class TicTacToeData {
public:
    void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games) {
        std::ofstream outFile("tictactoe_data.txt", std::ios::out);

        for (const auto& game : games) {
            for (const auto& peg : game->get_pegs()) {
                outFile << peg;
            }
            outFile << game->get_winner() << std::endl;
        }

        outFile.close();
    }

    std::vector<std::unique_ptr<TicTacToe>> get_games() {
        std::vector<std::unique_ptr<TicTacToe>> boards;
        std::ifstream inFile("tictactoe_data.txt", std::ios::in);
        std::string line;

        while (std::getline(inFile, line)) {
            std::vector<std::string> pegs;

            for (size_t i = 0; i < line.size() - 1; ++i) {
                pegs.push_back(std::string(1, line[i]));
            }

            std::string winner = std::string(1, line.back());

            if (pegs.size() == 9) {
                boards.push_back(std::make_unique<TicTacToe3>(pegs, winner));
            } else if (pegs.size() == 16) {
                boards.push_back(std::make_unique<TicTacToe4>(pegs, winner));
            }
        }

        inFile.close();
        return boards;
    }
};