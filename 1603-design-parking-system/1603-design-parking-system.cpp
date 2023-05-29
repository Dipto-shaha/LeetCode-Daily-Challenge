class ParkingSystem {
public:
    int b[3];
    ParkingSystem(int big, int medium, int small) {
        b[0]=big,b[1]=medium,b[2]=small;
    }
    
    bool addCar(int carType) {
        if(b[carType-1]>0) {
            b[carType-1]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */