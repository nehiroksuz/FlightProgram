#include "FlightDataRecorder.h"

int main() {
    FlightData data1(100.0, 21.4, 12.3, 1001.0);
    FlightData data2(999.0, 19.8, 15.7, 970.0);
    FlightData data3(720.0, 17.2, 10.4, 930.0);
    
    FlightDataRecorder recorder;
    recorder.addMeasurement(data1);
    recorder.addMeasurement(data2);
    recorder.addMeasurement(data3);
    recorder.displayMeasurements();
    std::cout<<recorder.getAverageTemperature()<<"\n";
    std::cout<<recorder.getMaxAltitude()<<"\n";
}
