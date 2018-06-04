// Design pattern - command
// g++ -std=c++11 -o command command.cpp
// g++ -std=c++1z -o command command.cpp
// Вы можете реализовать команды open и save

#include <iostream>
#include <vector>

class ChessBoard {
  public:
    void create() {
      std::cout << "Create chessboad" << std::endl;
    }
    void make_move(std::string step) {
      std::cout << "Made a move: " << step << std::endl;
    }
    void open(std::string file) {
      std::cout << "The chessboard is open: " << file << std::endl;
    }
    void save(std::string file) {
      std::cout << "Position saved:" << file << std::endl;
    }
};

std::string get_user_input(std::string text) {
  std::cout << text;
  std::string input;
  std::cin >> input;
  return input;
}

class Command {
  public:
    virtual void execute() = 0;
    virtual ~Command() {}
  protected:
    ChessBoard *board;
    Command(ChessBoard *chessboard) : board(chessboard) {}
};

class CreateCommand : public Command {
  public:
    CreateCommand(ChessBoard *chessboad) : Command(chessboad) {}
    void execute() {
      board->create();
    }
};

class MakeMoveCommand : public Command {
  public:
    MakeMoveCommand(ChessBoard *chessboad) : Command(chessboad) {}
    void execute() {
      board->make_move(
        get_user_input("Enter your move: ")
      );
    }
};

int main() {
  ChessBoard chessboad;
  std::vector<Command*> commands;
  commands.push_back(
    new CreateCommand(&chessboad)
  );
  commands.push_back(
    new MakeMoveCommand(&chessboad)
  );
  for (size_t i = 0; i < commands.size(); ++i) {
    commands[i]->execute();
  }
  return 0;
}
