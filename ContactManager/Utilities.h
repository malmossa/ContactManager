#ifndef UTILITIES_H
#define UTILITIES_H

class Utilities
{
	private:
		string title;
		string consoleColor;


    public:
		Utilities(string title, string consoleColor);
		void setTitle() const;
		void setConsoleColor() const;
};

#endif

