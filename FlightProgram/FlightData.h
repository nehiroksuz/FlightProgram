#ifndef FLIGHT_DATA_H
#define FLIGHT_DATA_H
class FlightData{
private:
    double altitude;
    double temperature;
    double acceleration;
    double pressure;
    
public:
    FlightData(double alt, double temp, double acc, double pres): altitude(alt), temperature(temp), acceleration(acc), pressure(pres){
    }
    double getAltitude() const{
        return altitude;
    }
    double getTemp() const{
        return temperature;
    }
    double getAcceleration() const{
        return acceleration;
    }
    double getPressure() const{
        return pressure;
    }
    
};
#endif
