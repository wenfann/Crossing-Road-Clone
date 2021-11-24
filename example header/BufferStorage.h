#pragma once
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;


// Any buffer that requires padding to block
extern vector <string> CHAR_TO_BLOCK = {
	"player",
	"enemy1",
	"enemy2",
	"enemy3",
	"enemy4",
	"enemy5",
	"enemy6",
	"enemy7",
	"enemy8",
	"title",
	// "Some string here"
};

// Any buffer that requires a clear buffer (movable GameObject)
extern vector <string> CLEAR_BUFFER = {
	"player",
	"enemy1",
	"enemy2",
	"enemy3",
	"enemy4",
	"enemy5",
	"enemy6",
	"enemy7",
	"enemy8"
};