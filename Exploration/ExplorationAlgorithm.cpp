#include <string>

struct Node {

};

char wallsObserved(){
    return 'p'; //parallel walls
}

char findAngle(){
    return '1'; //default, will be -1, 0 or 1
}

void forward(int units){
    //move forward x units (working off control system that keeps it evenly between the 2 parallel walls)
}

char moveForward() {
    while(wallsObserved() == 'p'){
        forward(1);
    }
    return 'c'; //crossroads/corner
}

void exploreNode(Node parent){

}

void main() {
    while(1){
        moveForward();
        char tmp = wallsObserved();
        Node tmpNode = Node();
        if(tmp == '1'){
            char angle = findAngle();
            //tmpNode = new MazeNode(coordinates, (angle of turn, explored = false))
        } else if(tmp == '2'){
            char angle = findAngle();
            //tmpNode = new MazeNode(coordinates, (angle of turn 1, explored = false))
            char angle2 = findAngle();
            //tmpNode.addPath(angle of turn 2, explored = false)
        } else if(tmp == '3'){
            //tmpNode = new MazeNode(coordinates, (-90, explored = false))
            //tmpNode.addPath(0, explored = false)
            //tmpNode.addPath(90, explored = false)
        }
        exploreNode(tmpNode);
    }
}