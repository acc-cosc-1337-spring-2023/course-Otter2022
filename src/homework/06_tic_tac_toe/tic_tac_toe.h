//h
#include <string>
#include <iostream>
#include <vector>
// #include "tic_tac_toe_manager.h"
using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::ostream;
using std::istream;


class TicTacToe{

    public:
        virtual ~TicTacToe() {} 
        TicTacToe(int size) : pegs(size * size, " ") {};
        friend istream& operator>>(istream& in, TicTacToe& game){
            int position;
            in >> position;
            game.mark_board(position);
            return in;
            }
        friend ostream& operator<<(ostream& out, const TicTacToe& game){
            int size = game.pegs.size();
            for(int i = 0; i < game.pegs.size(); i++){
                out << game.pegs[i];
                if((size==16&&(i+1)%4==0)||(size==9&&(i+1)%3==0)){
                    out << "\n";
                } else {
                    out << "|";
                }
            }
            return out;
        }
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
            pegs[position] = player;
            set_next_player();
        }
        string get_player() const{return player;}
        // void display_board() const{
        //     for(int i = 0; i < string_pegs.size(); i++){
        //         cout<<string_pegs[i];
        //         if(i == 0 || i == 1 || i == 3 || i == 4 || i == 6 || i == 7){
        //             cout<<"|";
        //         } else {
        //             cout<<"\n";
        //         }
        //     }
        // }
        string get_winner() {return winner;}
    protected:
        virtual bool check_column_win(){
            return false;
        };
        virtual bool check_row_win(){
            return false;
        };
        virtual bool check_diagonal_win(){
            return false;
        };
        
        std::vector<std::string> pegs;
    private:
        // bool check_column_win() {
        // //     if (string_pegs[0]=="X"&&string_pegs[3]=="X"&&string_pegs[6]=="X"){
        // //         return true;
        // //     } else if (string_pegs[1]=="X"&&string_pegs[4]=="X"&&string_pegs[7]=="X"){
        // //         return true;
        // //     } else if (string_pegs[2]=="X"&&string_pegs[5]=="X"&&string_pegs[8]=="X"){
        // //         return true;
        // //     } else if (string_pegs[0]=="O"&&string_pegs[3]=="O"&&string_pegs[6]=="O"){
        // //         return true;
        // //     } else if (string_pegs[1]=="O"&&string_pegs[4]=="O"&&string_pegs[7]=="O"){
        // //         return true;
        // //     } else if (string_pegs[2]=="O"&&string_pegs[5]=="O"&&string_pegs[8]=="O"){
        // //         return true;
        // //     }
        //     return false;
        // }
        // bool check_row_win() {
        // //     if (string_pegs[0]=="X"&&string_pegs[1]=="X"&&string_pegs[2]=="X"){
        // //         return true;
        // //     } else if (string_pegs[3]=="X"&&string_pegs[4]=="X"&&string_pegs[5]=="X"){
        // //         return true;
        // //     } else if (string_pegs[6]=="X"&&string_pegs[7]=="X"&&string_pegs[8]=="X"){
        // //         return true;
        // //     } else if (string_pegs[0]=="O"&&string_pegs[1]=="O"&&string_pegs[2]=="O"){
        // //         return true;
        // //     } else if (string_pegs[3]=="O"&&string_pegs[4]=="O"&&string_pegs[5]=="O"){
        // //         return true;
        // //     } else if (string_pegs[6]=="O"&&string_pegs[7]=="O"&&string_pegs[8]=="O"){
        // //         return true;
        // //     }
        //     return false;
        // }
        //  bool check_diagonal_win() {
        // //     if (string_pegs[0]=="X"&&string_pegs[4]=="X"&&string_pegs[8]=="X"){
        // //         return true;
        // //     } else if (string_pegs[6]=="X"&&string_pegs[4]=="X"&&string_pegs[2]=="X"){
        // //         return true;
        // //     } else if (string_pegs[0]=="O"&&string_pegs[4]=="O"&&string_pegs[8]=="O"){
        // //         return true;
        // //     } else if (string_pegs[6]=="O"&&string_pegs[4]=="O"&&string_pegs[2]=="O"){
        // //         return true;
        // //     }
        //     return false;
        // }
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
            int size = pegs.size();
            int counter = 0;
            for(int i = pegs.size()-1; i >= 0; i--){
                if(!(pegs[i] == " ")) {
                    counter++;
                } 
            }
            if(counter==size){
                return true;
            } else {
                return false;
            }
        }
        void clear_board(){
            for(int i = pegs.size()-1; i >= 0; i--) pegs[i] = " ";
        }
        string player;
        //vector<string> string_pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
        string winner = "C";
};