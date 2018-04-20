List of Contents
1.Configuration instructions
	  1. Raspberry Pi 3 1GB RAM
	  2. SD Card 16GB installed already
	  3. RJ45 cable ( made by programmer in LAN laboratory )
	  4. Power cable
	  5. Microphone
	  6. USB Sound Card
	  7. HDMI cable ( for first time installing the SD card and the Raspberry )
2.Installation instructions
	  1. Put the SD card into the Raspberry Pi, then plug in the RJ45 cable and the power cable ( do in the right order ) 
	  2. Initialize the RPi, set up display setting and connect the network
	  3. Check your email. If there is no problem with your initialization, you will receive an email contains your IP address
	  4. Plug in in the USB Sound Card and the microphone, setup the USB Sound Card as default ( in case you have bug of arecord, please fix it        like in the instrusction )
3.Operating instructions
	  1. Open PuTTY and type in the IP address ( receive in your email ), log in as "pi"
	  2. "cd appdev": open the file name "appdev"
		3. "ls": list all the file you have in the folder
	  3. "make": compile all the source codes
    4. "./sound.a": run the file name "sound.a" ( after finishing "make" command )
	  5. After "./sound.a", the microphone will start to record; the bar-diagram will show the changes on the screen due to the volume of              the sound you make and the duration of recording is 1 second. The program will calculate the rms value for every 200 samples of data          for a total of 80 values
	  6. When you need to stop the recording, push Ctrl+C
4. A file manifest (list of files included)
	  1. main.c
		  The root file which contains all the functions of other *.c files.
	  2. sound.c (included header files sound.h and comm.h)
		  Display the information from the header file and the bar-diagram of the recorded file.
	  3. screen.c (included header files screen.h and comm.h)
		  For displaying the bar-diagram.
	  4. comm.c (included header file comm.h)
		  Send the data to the school server.
	  5. makefile
		  Compile all the source codes.
	  6. sound.php
		  Store to the server to process the data received and display to the user
5.Copyright and licensing information
	  1. Raspberry Pi Foundation UK Registered Charity 1129409
	  2. Transcend Information Inc.
	  3. Source codes Copyright by Viet Bui ( student number: e1700690 ), assisted by Dr. Gao Chao
6.Contact information for the programmer
	  Viet Bui
	  Department of Information Technology
	  Vaasa University of Applied Sciences
	  Wolffintie 30, Vaasa, Finland
    Address: Ahventie D49, Vaasa, Finland
	  Homepage: http://www.cc.puv.fi/~e1700690
	  Email: e1700690@edu.vamk.fi / buiducviet27081998@gmail.com
