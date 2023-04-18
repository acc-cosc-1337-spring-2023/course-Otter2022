//h
#include "tic_tac_toe.h"

class TicTacToe4 : public TicTacToe {
public:
    TicTacToe4() : TicTacToe(4) {}
    virtual ~TicTacToe4() {}

private:
    bool check_column_win() override{
        if (pegs[0]=="X"&&pegs[4]=="X"&&pegs[8]=="X"&&pegs[12]=="X"){
            return true;
        } else if (pegs[1]=="X"&&pegs[5]=="X"&&pegs[9]=="X"&&pegs[13]=="X"){
            return true;
        } else if (pegs[2]=="X"&&pegs[6]=="X"&&pegs[10]=="X"&&pegs[14]=="X"){
            return true;
        } else if (pegs[3]=="X"&&pegs[7]=="X"&&pegs[11]=="X"&&pegs[15]=="X"){
            return true;
        } else if (pegs[0]=="O"&&pegs[4]=="O"&&pegs[8]=="O"&&pegs[12]=="O"){
            return true;
        } else if (pegs[1]=="O"&&pegs[5]=="O"&&pegs[9]=="O"&&pegs[13]=="O"){
            return true;
        } else if (pegs[2]=="O"&&pegs[6]=="O"&&pegs[10]=="O"&&pegs[14]=="O"){
            return true;
        } else if (pegs[3]=="O"&&pegs[7]=="O"&&pegs[11]=="O"&&pegs[15]=="O"){
            return true;
        }
        return false;
    }
    bool check_row_win() override{
        if (pegs[0]=="X"&&pegs[1]=="X"&&pegs[2]=="X"&&pegs[3]=="X"){
            return true;
        } else if (pegs[4]=="X"&&pegs[5]=="X"&&pegs[6]=="X"&&pegs[7]=="X"){
            return true;
        } else if (pegs[8]=="X"&&pegs[9]=="X"&&pegs[10]=="X"&&pegs[11]=="X"){
            return true;
        } else if (pegs[12]=="X"&&pegs[13]=="X"&&pegs[14]=="X"&&pegs[15]=="X"){
            return true;
        } else if (pegs[0]=="O"&&pegs[1]=="O"&&pegs[2]=="O"&&pegs[3]=="O"){
            return true;
        } else if (pegs[4]=="O"&&pegs[5]=="O"&&pegs[6]=="O"&&pegs[7]=="O"){
            return true;
        } else if (pegs[8]=="O"&&pegs[9]=="O"&&pegs[10]=="O"&&pegs[11]=="O"){
            return true;
        } else if (pegs[12]=="O"&&pegs[13]=="O"&&pegs[14]=="O"&&pegs[15]=="O"){
            return true;
        }
        return false;
    }
    bool check_diagonal_win() override{
        if (pegs[0]=="X"&&pegs[5]=="X"&&pegs[10]=="X"&&pegs[15]=="X"){
            return true;
        } else if (pegs[3]=="X"&&pegs[6]=="X"&&pegs[9]=="X"&&pegs[12]=="X"){
            return true;
        } else if (pegs[0]=="O"&&pegs[5]=="O"&&pegs[10]=="O"&&pegs[15]=="O"){
            return true;
        } else if (pegs[3]=="O"&&pegs[6]=="O"&&pegs[9]=="O"&&pegs[12]=="O"){
            return true;
        }
        return false;
    }
};