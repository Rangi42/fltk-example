#pragma warning(push, 0)
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#pragma warning(pop)

class Example : public Fl_Window {
public:
	Example(int X, int Y, int W, int H, const char *L = NULL);
};

Example::Example(int X, int Y, int W, int H, const char* L) : Fl_Window(X, Y, W, H, L) {
	for (int i = 0; i < 4; i++) {
		Fl_Box* box = new Fl_Box(16, 16 + 64 * i, 288, 64, "Hello World!");
		box->box(FL_UP_BOX);
	}
	end();
}

int main(int argc, char **argv) {
	Example *example = new Example(160, 144, 320, 288);
	example->show(argc, argv);
	return Fl::run();
}
