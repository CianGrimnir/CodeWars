/*

Question is from testdome.com
Implement function countNumbers that accepts a sorted vector of unique integers and,
efficiently with respect to time used, counts the number of vector elements that are
less than the parameter lessThan.

*/


#include <stdexcept>
#include <iostream>

class TrainNode{
private:
    int value;
    TrainNode *leftTrain;
    TrainNode *rightTrain;
public:
    TrainNode(){leftTrain=rightTrain=NULL;}
    TrainNode(int wagonId){
        value=wagonId;
        leftTrain=rightTrain=NULL;
    }
    int getValue(){return value;}
    void setLeftTrain(TrainNode *newNode){leftTrain=newNode;}
    void setRightTrain(TrainNode *newNode){rightTrain=newNode;}
    TrainNode* getRightTrain(){return rightTrain;}
    TrainNode* getLeftTrain(){return leftTrain;}
};

class TrainComposition
{
private:
    TrainNode *leftMost;
    TrainNode *rightMost;
public:
    TrainComposition(){leftMost=rightMost=NULL;}
    void attachWagonFromLeft(int wagonId)
    {
        TrainNode *tmp=new TrainNode(wagonId);
        if(leftMost !=NULL){
            leftMost->setLeftTrain(tmp);
            tmp->setRightTrain(leftMost);
            leftMost=tmp;
        }else{
            leftMost=tmp;
            rightMost=tmp;
        }
    }
    
    void attachWagonFromRight(int wagonId)
    {
        TrainNode *tmp=new TrainNode(wagonId);
        if(rightMost !=NULL){
            rightMost->setRightTrain(tmp);
            tmp->setLeftTrain(rightMost);
            rightMost=tmp;
            
        }else{
            leftMost=tmp;
            rightMost=tmp;
        }
    }
    
    int detachWagonFromLeft()
    {
        TrainNode *tmp;
        if(leftMost!=NULL){
            tmp=leftMost;
            leftMost=leftMost->getRightTrain();
            int tmpValue=tmp->getValue();
            delete tmp;
            return tmpValue;
        }else{
            return NULL;
        }
    }
    
    int detachWagonFromRight()
    {
        TrainNode *tmp;
        if(rightMost!=NULL){
            tmp=rightMost;
            rightMost=rightMost->getLeftTrain();
            int tmpValue=tmp->getValue();
            delete tmp;
            return tmpValue;
        }else{
            return NULL;
        }
    }
};
#ifndef RunTests
int main()
{
    TrainComposition tree;
    tree.attachWagonFromLeft(7);
    tree.attachWagonFromLeft(13);
    std::cout << tree.detachWagonFromRight() << "\n"; // 7 
    std::cout << tree.detachWagonFromLeft(); // 13
}
#endif
