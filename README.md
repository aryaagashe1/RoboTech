**Inspiration**

For many people, falling is a minor inconvenience. But for those with motor-control and balance disabilities, such as individuals with cerebral palsy, multiple sclerosis, spinal cord injuries, or age-related conditions, a fall can be dangerous and life-altering. From a study on CP, 86% reported having fallen in the past year. The worst part is, most lack the strength to get back up on their own, and without immediate assistance, they’re left vulnerable, stuck in one place for extended periods. Staying on the floor for too long can lead to sores, swelling, chronic pain, and even hospitalization. Not everyone has a personal caretaker or the financial ability to hire one. Some people are alone for long periods, making every fall a moment of fear and uncertainty, therefore hindering their ability to live independently. Therefore, we decided to build RiseAssist-- to give people confidence in their day-to-day lives, so they never have to fear being stranded again.

**What it does**

For our solution, our concept was to create a robot that is smart enough to identify when a user has fallen and is in distress, and autonomously guides itself to the user to assist them in standing back up. To do this, our solution would use a machine learning model trained on the user's voice to recognize when they call for help after they have fallen. Afterward using distance sensors, cameras, and IMUs, RiseAssist will be able to use path planning algorithms and computer vision to smoothly navigate to the user to assist them as soon as possible. After arriving the user is able to grab onto the two handles on top of robot assist to pull their upper body onto RiseAssist. When the user uses their voice to let RiseAssist know that they are ready to start going up, RiseAssist will begin to rise and stop when the user says to stop. With our use of hands free control, and autonomous movement RiseAssist gives users their freedom of locomotion back, allowing the user to be able to do daily tasks without having to worry about who will help them if they fall.

For our prototype, we chose to implement the critical functionality to demonstrate our solution. Currently, the prototype is able to drive to the user after they have fallen. Once the user has situated themselves on the mount of the robot, the user is able to use a switch to control the linear actuators, giving them the ability to move up, down, and stop. This prototype is able to show the core functionality of our solution which we intend to build on later.

**Solution Concept**

User falls and calls for help
Robot uses voice recognition model to detect the distress call
Robot autonomously navigates towards the user
Robot arrives and user grabs handles to regain some balance
User pulls themself onto the top of the robot
User voices they are ready to go up
Robot moves up until user is standing again

**Prototype**

Same functionality, but replaced the sound recognition with pressing a button
We also did not have the right batteries to provide enough power to all four linear actuators and four motors, so our prototype uses power from the wall

**How we built it**

We split our robot into three major sections - linear actuators, DC motors for wheels, and the wooden frame. The four linear actuators are controlled by a makeshift double pole double throw switch to control whether the actuators move up, down, or stay put. The four DC motors used to drive the robot are each controlled by an individual motor driver allowing for complex movement and control. The frame of the robot is custom built using the HIVE’s machine shop allowing for a smooth integration of parts fit exactly to a user's needs. Custom wheels, motor mounts, and handles were 3D printed to smoothly integrate all of our components. For our design process we started by drawing a concept picture, decided on specific dimensions, and allocated tasks to work as efficiently with our limited time. We were able to make effective use of our time by working collaboratively, asking each other for debugging help and giving our feedback and new ideas.

**Challenges we ran into**

An initial challenge we faced was coming up with an idea that would be helpful for a particular audience that could potentially be high impact, but also something that would be unique and doable in the short time frame.

We ran into several challenges while constructing the prototype. When we initially tested the motors for our drivetrain, we found that we were unable to power them even after connecting them to our power source, the motor drivers, and the Arduino Mega. After examining the datasheets and pinout diagrams for the Mega in detail, we found that the PWM pin of the motor driver was connected to the wrong pin of the Mega. While this itself was a minor fix, the process of reaching this conclusion involved extensive research and debugging. We also did have a little trouble with trying to go into detail a little too much, which led us to focusing too much on some things and not as much on others.

An additional challenge we faced was ensuring that the separate components of our robot, both mechanical and electronics, could work together cohesively. This was something we struggled with when we decided to construct our drivetrain with thicker wood and to use multiple linear actuators to support the weight of a person to assist them in standing. At this time, we were using TT motors, which we realized were definitely not strong enough to provide enough power to drive forward the weight of the wood and actuators. We then revised our solution to implement four 12 Volt DC motors, which would better fit the estimated weight of the solution.

The linear actuators also brought several challenges and learning opportunities. Firstly, we weren’t even able to make them move because their startup current was too high to be supported by the power supply and made it trip due to overcurrent. Then, we got advice and learned how to use capacitors to smooth the current, and it worked! But in order to control them to go up AND down, we supposedly had to use a DPDT switch which was not available to us. We brainstormed and tried several methods to emulate the behavior of that switch, using a microcontroller, FETs, diodes, and relays, and then ended up going with a mechanical solution of connecting two SPDT switches together.

Mechanical challenges were also faced. When we attempted at assembling together the linear actuators into the wood frame that we built, they would not even stay upright due to the given metal connectors being unideal and flimsy. We had to measure and machine blocks and spacers that we fit into the structure to give it maximum stability.

**Accomplishments that we're proud of**

Through the process of working on this project, we were able to gain a more holistic understanding of the process of building a robot consisting of several interdependent parts. We are proud to have been able to design an innovative solution that can actually be implemented to help people with motor-control and balance disabilities solve an issue that poses a risk to them. From a technical standpoint, we are proud to have developed a working motorized prototype that is able to support the weight of a person while moving upward. While finding a way to power the actuators was difficult, it is satisfying to see the actuators extend using a switch. In general, we are proud of ourselves for taking a chance and completing a challenging new robotics project with a practical application.

**What we learned**

Through the thirty six hours we poured into this project we learned a lot about motor power management and control. Specifically we learned a lot about understanding how the voltage and current relate to weight capacity. We also expanded our skills in using the benchtop tools like the power supply, digital multimeter, and soldering iron. Additionally, there was a lot of debugging and trial and error when programming the motors with an Arduino Mega, figuring out how to control the linear actuators by switching polarity, and assembling everything and figuring out how to distribute all the weight evenly.

What's next for RiseAssist
Next for RiseAssist would be advancing our technology to include telemetry, voice control, bluetooth, and traveling longer distances. We would also be interested in improving stability and finding an easier way to power the device.
