#include <vector>

void display_misses(int misses);
void greet();
void end_game(std::string codeword, std::string answer);
void display_status(std::vector<char> incorrect, std::string answer);
bool reused(std::vector<char> incorrect, char letter);