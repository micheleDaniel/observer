#include "GameCharacter.h"
#include "GUIMap.h"
#include "MiniGUIMap.h"

int main() {
    GameCharacter hero;

    GUIMap* map = new GUIMap( &hero );
    MiniGUIMap* miniMap = new MiniGUIMap( &hero );

    hero.move(1, 2);
    hero.move(1, 1);
    miniMap->setVisible(false);
    hero.move(2, 1);
    miniMap->setVisible(true);
    hero.move(1, 1);

    delete miniMap;
    hero.move(2, 0);

    delete map;

    return 0;
}