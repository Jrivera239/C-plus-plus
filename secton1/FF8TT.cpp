#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

struct Card {
int top;
int right;
int bottom;
int left;
std::string name;
};

void initCards(std::vector<Card>& deck) {
deck.push_back({1, 2, 3, 4, "Card 1"});
deck.push_back({5, 6, 7, 8, "Card 2"});
deck.push_back({9, 10, 11, 12, "Card 3"});
// Add more cards as desired
}

void shuffleDeck(std::vector<Card>& deck) {
unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
std::shuffle(deck.begin(), deck.end(), std::default_random_engine(seed));
}

bool compareCards(const Card& a, const Card& b, int direction) {
if (direction == 0) {
return a.top > b.bottom;
} else if (direction == 1) {
return a.right > b.left;
} else if (direction == 2) {
return a.bottom > b.top;
} else {
return a.left > b.right;
}
}

void playCard(const Card& a, Card& b, int direction) {
if (compareCards(a, b, direction)) {
b = a;
std::cout << a.name << " played on " << direction << " beats " << b.name << std::endl;
} else {
std::cout << a.name << " played on " << direction << " loses to " << b.name << std::endl;
}
}

int main() {
std::vector<Card> deck;
initCards(deck);
shuffleDeck(deck);

// Game logic
Card board[3][3];
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
board[i][j] = deck.back();
deck.pop_back();
}
}

// Play example
playCard(board[0][0], board[0][1], 1);
playCard(board[0][1], board[1][1], 2);
playCard(board[1][1], board[2][1], 2);

return 0;
}