#include "Record.h"
#include "Player.h"
#include "Trainer.h"
#include "Spectator.h"

#include <vector>


class Command {
private:
	std::string commandName;
	std::vector<Player> players;
	std::vector<Trainer> trainer;
	std::vector<Spectator> spectators;
	std::vector<Record> commandStaff;
public:
	Command() {
		players = std::vector<Player>(5);
	};
	std::vector<Record> viewCommandStaff();
};