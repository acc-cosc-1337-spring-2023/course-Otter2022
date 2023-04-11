#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("verify player X"){
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player()=="X");
}

TEST_CASE("verify player O"){
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player()=="O");
}

TEST_CASE("verify tic_tac_toe class"){
	TicTacToe game;
	game.start_game("X");
	game.mark_board(0);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(8);
	REQUIRE(game.game_over()==false);
	game.mark_board(6);
	REQUIRE(game.get_winner()=="C");
}

TEST_CASE("verify column 1"){
	TicTacToe game;
	game.start_game("X");
	game.mark_board(0);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	REQUIRE(game.game_over()==false);
	game.mark_board(6);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("verify column 2"){
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(0);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("verify column 3"){
	TicTacToe game;
	game.start_game("X");
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	REQUIRE(game.game_over()==false);
	game.mark_board(8);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("verify row 1"){
	TicTacToe game;
	game.start_game("X");
	game.mark_board(0);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("verify row 2"){
	TicTacToe game;
	game.start_game("X");
	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("verify row 3"){
	TicTacToe game;
	game.start_game("X");
	game.mark_board(6);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(8);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("verify horizontal left right"){
	TicTacToe game;
	game.start_game("X");
	game.mark_board(0);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(8);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("verify horizontal right left"){
	TicTacToe game;
	game.start_game("X");
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	REQUIRE(game.game_over()==false);
	game.mark_board(6);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("verify tictactoemanager"){
	TicTacToeManager Manager;
	TicTacToe game;
	game.start_game("X");
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	REQUIRE(game.game_over()==false);
	game.mark_board(6);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
	TicTacToe game1;
	game1.start_game("X");
	game1.mark_board(2);
	REQUIRE(game1.game_over()==false);
	game1.mark_board(1);
	REQUIRE(game1.game_over()==false);
	game1.mark_board(4);
	REQUIRE(game1.game_over()==false);
	game1.mark_board(7);
	REQUIRE(game1.game_over()==false);
	game1.mark_board(6);
	REQUIRE(game1.game_over()==true);
	REQUIRE(game1.get_winner()=="X");
	TicTacToe game2;
	game2.start_game("X");
	game2.mark_board(2);
	REQUIRE(game2.game_over()==false);
	game2.mark_board(1);
	REQUIRE(game2.game_over()==false);
	game2.mark_board(4);
	REQUIRE(game2.game_over()==false);
	game2.mark_board(7);
	REQUIRE(game2.game_over()==false);
	game2.mark_board(6);
	REQUIRE(game2.game_over()==true);
	REQUIRE(game2.get_winner()=="X");

	Manager.save_game(game);
	Manager.save_game(game1);
	Manager.save_game(game2);

	int o,x,c;
	Manager.get_winner_total(o, x, c);

    REQUIRE(o == 0);
    REQUIRE(x == 3);
    REQUIRE(c == 0);
}