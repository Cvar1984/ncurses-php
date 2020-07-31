#include <phpcpp.h>
#include <ncurses.h>

Php::Value nc_printw(Php::Parameters &params)
{
    return printw(params[0]);
}
Php::Value nc_initscr()
{
    return initscr();
}
Php::Value nc_endwin()
{
    return endwin();
}
Php::Value nc_noecho()
{
    return noecho();
}
Php::Value nc_cbreak()
{
    return cbreak();
}
Php::Value nc_refresh()
{
    return refresh();
}

extern "C" {
    PHPCPP_EXPORT void *get_module() {
        static Php::Extension extension("ncurses-php", "1.0");
        extension.add<nc_printw>("printw");
        extension.add<nc_initscr>("initscr");
        extension.add<nc_endwin>("endwin");
        extension.add<nc_cbreak>("cbreak");
        extension.add<nc_noecho>("nocho");
        extension.add<nc_refresh>("refresh");
        return extension;
    }
}
