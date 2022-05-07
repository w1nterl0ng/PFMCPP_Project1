#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: knife
//  action 1: Stab a Player
knife.stab();
//  action 2: Slash a Player
knife.slash();
//  action 3: Hold knife Menacingly
knife.menace();
//  2)
//  Noun: cat
//  action 1: Make a meow sound
cat.meow();
//  action 2: scratch an attacker
cat.scratchAttacker();
//  action 3: Jump
cat.jump();
//  3)
//  Noun: box
//  action 1: Move the box
box.move();
//  action 2: Rotate the Box clockwise
box.rotateClockwise();
//  action 3: Flip the box
box.flipX();
//  4)
//  Noun: dice
//  action 1: Roll the dice
dice.roll();
//  action 2: pick up the dice
dice.pickup();
//  action 3: Drop the Dice
dice.drop();
//  5)
//  Noun: Seat
//  action 1: Move Seat Forward
seat.moveForward();
//  action 2: Eject from vehicle
seat.eject();
//  action 3: Deploy Airbags
seat.deployAirbag();
//  6)
//  Noun: Screw Dreiver
//  action 1: screw in clockwise 
screwDriver.screw();
//  action 2: unscrew counter clockwise
screwDriver.unscrew();
//  action 3: gouge surface
screwDriver.gougeSurface();
//  7)
//  Noun: Car
//  action 1: Turn Left
car.turnLeft();
//  action 2: Accelerate
car.accelerate();
//  action 3: Narrow the distance to the car leading it.
car.tailgate();
//  8)
//  Noun: phone
//  action 1: call home
phone.callHome();
//  action 2: sound the alarm
phone.soundAlarm();
//  action 3: sene an email
phone.sendEmail();
//  9)
//  Noun: horse
//  action 1: buck the rider
horse.buckRider();
//  action 2: do simple math
horse.doMath();
//  action 3: eat
horse.eat();
//  10)
//  Noun: blender
//  action 1: Blend Juice
blender.juice();
//  action 2: Puree food
blender.puree();
//  action 3: spray food around the room
blender.explode();
#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].
 
 If you didn't already:
	Make a pull request after you make your first commit
	pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
	std::cout << "good to go" << std::endl;
	return 0;
}
