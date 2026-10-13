#include <iostream>
using namespace std;

enum PlayerState { IDLE, RUNNING, JUMPING, DEAD };

int main() {
    PlayerState state = PlayerState::IDLE;

    // حدث شيء في اللعبة أدى لموت اللاعب
    state = DEAD;

    if (state == DEAD) {
        cout << "انتهت اللعبة! (Game Over)" << endl;
    } else if (state == RUNNING) {
        cout << "اللاعب يركض..." << endl;
    }

    return 0;
}