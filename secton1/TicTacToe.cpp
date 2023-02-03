#include <iostream>

const int BOARD_SIZE = 3;

char board[BOARD_SIZE][BOARD_SIZE];

void InitializeBoard() {
  for (int i = 0; i < BOARD_SIZE; i++) {
    for (int j = 0; j < BOARD_SIZE; j++) {
      board[i][j] = ' ';
    }
  }
}

void PrintBoard() {
  for (int i = 0; i < BOARD_SIZE; i++) {
    for (int j = 0; j < BOARD_SIZE; j++) {
      std::cout << board[i][j];
      if (j < BOARD_SIZE - 1) {
        std::cout << " | ";
      }
    }
    std::cout << std::endl;
    if (i < BOARD_SIZE - 1) {
      std::cout << "---------\n";
    }
  }
}

bool MakeMove(int player, int x, int y) {
  if (board[x][y] == ' ') {
    board[x][y] = (player == 1 ? 'X' : 'O');
    return true;
  }
  return false;
}

int main() {
  InitializeBoard();
  int player = 1;
  int x, y;
  while (true) {
    PrintBoard();
    std::cout << "Player " << player << ", enter your move (x y): ";
    std::cin >> x >> y;
    if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE) {
      std::cout << "Invalid move, try again.\n";
      continue;
    }
    if (!MakeMove(player, x, y)) {
      std::cout << "Spot already taken, try again.\n";
      continue;
    }
    player = (player == 1 ? 2 : 1);
  }
  return 0;
}
