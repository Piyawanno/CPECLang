#include <stdio.h>
#include <stdlib.h>

typedef struct MixtureSystem{
	float volumeA;
	float volumeB;
	float temperatureVoltage;
	float temperature;
	float streamingVoltage;
	float streaming;
	int valveA;
	int valveB;
} MixtureSystem;

float calculateStreaming(float streamingVoltage){
	float streaming = 0.0;
	float startStreaming = 0.0;
	float slope = 0.0;
	if(streamingVoltage >= 0 && streamingVoltage < 3){
		slope = 0.5;
		startStreaming = 0.0;
	}else if(streamingVoltage >= 3 && streamingVoltage < 7){
		slope = 1.0;
		startStreaming = -1.5;
	}else{
		slope = 0.5;
		startStreaming = 2.0;
	}
	streaming = startStreaming + slope*streamingVoltage; 
	return streaming;
}

float calculateTemperature(float temperatureVoltage){
	float temperature = 0.0;
	float startTemperature = 35.0;
	float slope = 0.0;
	if(temperatureVoltage >= 0 && temperatureVoltage < 3){
		slope = 0.5;
		startTemperature = 35.0;
	}else if(temperatureVoltage >= 3 && temperatureVoltage < 7){
		slope = 1.0;
		startTemperature = 33.5;
	}else{
		slope = 0.5;
		startTemperature = 37.0;
	}
	temperature = startTemperature + slope*temperatureVoltage; 
	return temperature;
}

void openValve (MixtureSystem* system) {
	if(system->temperature>=35 &&system->temperature<38){
		system->valveA = 60;
		system->valveB = 40;
	}else if (system->temperature>=38 && system->temperature<40){
		system->valveA = 50;
		system->valveB = 50;
	}else if (system->temperature>=40 && system->temperature<42){
		system->valveA = 40;
		system->valveB = 60;
    }
}

void calculateSystemState(MixtureSystem *system){
	system->streaming = calculateStreaming(system->streamingVoltage);
	system->temperature = calculateTemperature(system->temperatureVoltage);
	openValve(system);
	/// Calculate volume left
}

int main(){
	MixtureSystem m1;
	m1.volumeA = 1000;
	m1.volumeB = 1200;
	do{
		m1.streamingVoltage = (random()%100)/10.0;
		m1.temperatureVoltage = (random()%100)/10.0;
		calculateSystemState(&m1);
	}while(m1.volumeA > 0 && m1.volumeB > 0);
	return 0;
}