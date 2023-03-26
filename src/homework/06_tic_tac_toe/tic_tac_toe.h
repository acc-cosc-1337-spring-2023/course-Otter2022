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
        bool game_over(){return check_board_full();}
        void start_game(string First_player){
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
    private:
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
};