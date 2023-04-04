//h
#include <string>
#include <iostream>
#include <vector>
using std::string;
using std::cout;
using std::cin;
using std::vector;


class TicTacToe {
    public:
        bool game_over(){
            if(check_board_full() || check_row_win() || check_column_win() || check_diagonal_win()){
                if(check_row_win() || check_column_win() || check_diagonal_win()){
                    set_winner();
                }
                return true;
            } else {
                return false;
            }
        }
        void start_game(string First_player){
            winner = "C";
            while(!(First_player == "X" || First_player == "O")){
                cout<<"*invalid input* Please enter X or O: ";
                cin>>First_player;
            }
            player = First_player;
            clear_board();
        }
        void mark_board(int position){
            string_pegs[position] = player;
            set_next_player();
        }
        string get_player() const{return player;}
        void display_board() const{
            for(int i = 0; i < string_pegs.size(); i++){
                cout<<string_pegs[i];
                if(i == 0 || i == 1 || i == 3 || i == 4 || i == 6 || i == 7){
                    cout<<"|";
                } else {
                    cout<<"\n";
                }
            }
        }
        string get_winner() {return winner;}
    private:
        bool check_column_win() {
            if (string_pegs[0]=="X"&&string_pegs[3]=="X"&&string_pegs[6]=="X"){
                return true;
            } else if (string_pegs[1]=="X"&&string_pegs[4]=="X"&&string_pegs[7]=="X"){
                return true;
            } else if (string_pegs[2]=="X"&&string_pegs[5]=="X"&&string_pegs[8]=="X"){
                return true;
            } else if (string_pegs[0]=="O"&&string_pegs[3]=="O"&&string_pegs[6]=="O"){
                return true;
            } else if (string_pegs[1]=="O"&&string_pegs[4]=="O"&&string_pegs[7]=="O"){
                return true;
            } else if (string_pegs[2]=="O"&&string_pegs[5]=="O"&&string_pegs[8]=="O"){
                return true;
            }
            return false;
        }
        bool check_row_win() {
            if (string_pegs[0]=="X"&&string_pegs[1]=="X"&&string_pegs[2]=="X"){
                return true;
            } else if (string_pegs[3]=="X"&&string_pegs[4]=="X"&&string_pegs[5]=="X"){
                return true;
            } else if (string_pegs[6]=="X"&&string_pegs[7]=="X"&&string_pegs[8]=="X"){
                return true;
            } else if (string_pegs[0]=="O"&&string_pegs[1]=="O"&&string_pegs[2]=="O"){
                return true;
            } else if (string_pegs[3]=="O"&&string_pegs[4]=="O"&&string_pegs[5]=="O"){
                return true;
            } else if (string_pegs[6]=="O"&&string_pegs[7]=="O"&&string_pegs[8]=="O"){
                return true;
            }
            return false;
        }
        bool check_diagonal_win() {
            if (string_pegs[0]=="X"&&string_pegs[4]=="X"&&string_pegs[8]=="X"){
                return true;
            } else if (string_pegs[6]=="X"&&string_pegs[4]=="X"&&string_pegs[2]=="X"){
                return true;
            } else if (string_pegs[0]=="O"&&string_pegs[4]=="O"&&string_pegs[8]=="O"){
                return true;
            } else if (string_pegs[6]=="O"&&string_pegs[4]=="O"&&string_pegs[2]=="O"){
                return true;
            }
            return false;
        }
        void set_winner() {
            if (player == "X"){
                winner = "O";
            } else {
                winner = "X";
            }
        }
        void set_next_player(){
            if (player == "X"){
                player = "O";
            } else if(player == "O"){
                player = "X";
            }
        }
        bool check_board_full(){
            int counter = 0;
            for(int i = string_pegs.size()-1; i >= 0; i--){
                if(!(string_pegs[i] == " ")) {
                    counter++;
                } 
            }
            if(counter==9){
                return true;
            } else {
                return false;
            }
        }
        void clear_board(){
            for(int i = string_pegs.size()-1; i >= 0; i--) string_pegs[i] = " ";
        }
        string player;
        vector<string> string_pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
        string winner = "C";
};