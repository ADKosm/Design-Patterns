#include <iostream>

#include "Menu.h"
#include "Picture.h"
#include "NewLineCommand.h"
#include "PrintCommand.h"

int main() {
    Picture * pic = new Picture(30);

    Menu m;

    m.AddButton("Add line with \'-~\'", new Button(new NewLineCommand(pic, "-~")));
    m.AddButton("Add line with \'#==#\'", new Button(new NewLineCommand(pic, "#==#")));
    m.AddButton("Add line with \'@\\/@\'", new Button(new NewLineCommand(pic, "@\\/@")));
    m.AddButton("Print picture", new Button(new PrintCommand(pic)));

    while(!m.Exit()) {
        m.Show();
        m.HandleUser();
    }

    return 0;
}