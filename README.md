🛬 Airport Airline Check-in Simulation – C Project
Welcome! This repository contains a C language project simulating an airline check-in system for Sardar Vallabhbhai Patel International Airport, Ahmedabad. The project provides a console-based interface where users can select various airlines and receive information about their journey, including route details, lounge access, and security process guidance.

✈️ Project Features
Airline Selection:
Choose from multiple airlines (Indigo, SpiceJet, Air India, AirAsia, Emirates, Etihad, Qatar, Lufthansa, British).

Region & Class Options:
After choosing an airline, select your flight’s region (International/Domestic) and your travel class (Economy, Business, or First).

Dynamic Information Display:
For each combination, the system displays relevant details:

Departure terminal and gate

Destination (Ahmedabad to Dubai/Delhi)

Flight number

Security check lane

Departure time

Lounge access status

User Experience:
Colored console interface for different airlines enhances clarity and simulation feel.

🗂️ Code Structure
main() – Entry point; presents the airline menu and navigates to airline-specific functions based on user input.

Individual airline functions (Indigo(), Spicejet(), AirIndia(), etc.) – Handle user prompts for region and class, and print flight details.

Designed for educational purposes to practice:

Modular programming with multiple functions

Use of switch-case logic

Console input/output and UI basics

🚦 How to Run
Compile:
Use any standard C compiler (e.g., GCC).

text
gcc airport_simulation.c -o airport_sim
Execute:

text
./airport_sim
Interact:

Follow on-screen prompts to select airline, region, and class.

Review your simulated boarding and gate details.
