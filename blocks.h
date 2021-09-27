//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "$HOME/.local/share/dwm/blocks/internet",	10,		0},
    // HDD info (from i3blocks)
	{"", "printf ' [%6s] ' $(df -h -P -l / | awk '/^\\// {print $4}')",	20,		0},
	{"", "$HOME/.local/share/dwm/blocks/music",	5,		11},
	{"", "$HOME/.local/share/dwm/blocks/memory",	10,		0},
	{"", "$HOME/.local/share/dwm/blocks/cpu",	5,		0},

	/* {"", "date '+%b %d (%a) %I:%M%p'",					5,		0}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
