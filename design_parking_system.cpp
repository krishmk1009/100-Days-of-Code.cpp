class ParkingSystem {
public:
int low, med,high;
    ParkingSystem(int big, int medium, int small) {
         low = small ;
         med = medium;
         high = big;
    }
    
    bool addCar(int carType) {
      
        if (carType==3){
            return (--low)>=0;
        }
        else if (carType==2){
            return (--med)>=0;
        }
        else{
            return (--high)>=0;
        }
        return -1;
    }
       
    
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
