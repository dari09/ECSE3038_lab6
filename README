# Lab 6 Description
The code is designed for a project that controls electronic devices connected to the ESP32 module. The project consists of two parts: an API accessible via the internet and an Arduino sketch that is programmed on the ESP32 module.

## Embedded Section
This section instructs the developer to create a function that reads the current temperature from a digital temperature sensor and populates the body of a PUT request sent to the API. The GET request in the Arduino sketch will determine the state of the fan and light pins on the circuit.

## API Section
In the API section, the developer should deploy the server application to an online cloud hosting service. The response to the GET request should contain fan and light attributes, where the fan attribute is true if the current temperature in the database is greater than or equal to 28.0 and false otherwise, and the light attribute is true if the current time is later than today's sunset time according to a specified API and false otherwise. The response to the PUT request should return an HTTP 204 status code on a successful PUT and an HTTP 400 otherwise. Additionally, the request body from the ESP32 should be saved directly to the database.