#include <vector>

#include "Record.h"


class CommandSerivce {
public:
	void dismissTrainer();
	void hireTrainer();
	void buyPlayer();
	void sellPlayer();
	void dismissPlayer();
	std::vector<Record> viewCommandStaff();
};