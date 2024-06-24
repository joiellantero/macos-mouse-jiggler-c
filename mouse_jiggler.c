#include <ApplicationServices/ApplicationServices.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jiggleMouse() {
    // get the current mouse position
    CGEventRef event = CGEventCreate(NULL);
    CGPoint currentPos = CGEventGetLocation(event);
    CFRelease(event);

    // generate random movement values
    int deltaX = (rand() % 21) - 10; // Random value between -10 and 10
    int deltaY = (rand() % 21) - 10; // Random value between -10 and 10

    // move the mouse to a new position
    CGPoint newPos = CGPointMake(currentPos.x + deltaX, currentPos.y + deltaY);
    CGEventRef move = CGEventCreateMouseEvent(NULL, kCGEventMouseMoved, newPos, kCGMouseButtonLeft);
    CGEventPost(kCGHIDEventTap, move);
    CFRelease(move);

    printf("Mouse moved to: (%.0f, %.0f)\n", newPos.x, newPos.y);
}

int main() {
    // initialize starting point of random number generator
    srand((unsigned int)time(NULL));

    while (1) {
        jiggleMouse();
        // change mouse position every 60 seconds
        sleep(60);
    }
    return 0;
}
