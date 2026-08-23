#ifndef FLIGHT_DATA_RECORDER_H
#define FLIGHT_DATA_RECORDER_H
#include "FlightData.h"
#include <iostream>
#include <vector>

class FlightDataRecorder{
private:
    std::vector<FlightData> measurements;
public:
    void addMeasurement(const FlightData& measurement){
        measurements.push_back(measurement); //added a measurement to measurements vector, FlightData turunde data
    }
    void displayMeasurements(){
        long int size=measurements.size(); //number of total data
        for(int i=0; i<size; i++){
            FlightData myObj=measurements[i];
            int count=i+1;
          std::cout<<"\n"<<"Measurement"<<count<<"\n";
            std::cout<<"Altitude: "<<myObj.getAltitude()<<"\n";
            std::cout<<"Temperature: "<<myObj.getTemp()<<"\n";
            std::cout<<"Acceleration: "<<myObj.getAcceleration()<<"\n";
            std::cout<<"Pressure: "<<myObj.getPressure()<<"\n";
        }
    }
    double getMaxAltitude(){
        double max=-1;
        long int size=measurements.size(); //number of total data
        for(int i=0; i<size; i++){
            FlightData myObj=measurements[i];
            double currentAlt=myObj.getAltitude();
            if(currentAlt>max){
                max=currentAlt;
            }
        }
        return max;
    }
    double getAverageTemperature(){
        double temps=0;
        long int size=measurements.size(); //number of total data
        for(int i=0; i<size; i++){
            FlightData myObj=measurements[i];
            temps+=myObj.getTemp();
        }
        double averageTemp=(temps/measurements.size());
        
        return averageTemp;
    }
    
};
#endif
