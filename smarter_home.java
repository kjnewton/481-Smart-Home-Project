package smart_home;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class smarter_home {
	private static int numRooms;
	public static void main(String [] args) {
		Scanner input = new Scanner(System.in);
		house home = new house(false, false);
		ArrayList<room> rooms = new ArrayList<>();

		System.out.println("Hello! How many rooms are in your house?");
		numRooms = input.nextInt();
		while(numRooms < 1) {
			System.out.println("Please enter a valid room number(Must be greater than 0): ");
			numRooms = input.nextInt();
		}
		roomDetails(numRooms, rooms);
		showRooms(rooms);
	}
	public static void roomDetails(int numRooms, ArrayList<room> rooms) {
		Scanner input = new Scanner(System.in);
		
		
		for(int i = 0; i < numRooms; i++) {
			room newRoom = new room(0,"", 0, 0, 0, false);
			System.out.println("What is the name of room number " + (i+1) + "?");
			String roomName = input.next();
			newRoom.setName(roomName);
			System.out.println("What is the desired temperature you would like to set the '" + newRoom.getName() +  "' to be(In farenheit between 50 and 90 degrees)?");
			int setTemp = input.nextInt();
			while(setTemp < 50 || setTemp > 90) {
				System.out.println("Please enter a valid temperature between 50 and 90 degrees farenheit: ");
				setTemp = input.nextInt();
			}
			newRoom.setTemp(setTemp);
			System.out.println("What time would you like the '" + newRoom.getName() + "' to reach it's desired temperature in military time? between 0000 and 2400(ie. 2200 = 10:00 PM)");
			int setStart = input.nextInt();
			while(setStart < 0 || setStart > 2400) {
				System.out.println("Please enter a valid start time between 0000 and 2400: ");
				setStart = input.nextInt();
			}
			newRoom.setStartTime(setStart);
			System.out.println("What time would you like the '" + newRoom.getName() + "' to leave the desired temperature in military time? between 0000 and 2400(ie. 2300 = 11:00 PM)?");
			int setEnd = input.nextInt();
			while(setEnd < 0 || setEnd > 2400) {
				System.out.println("Please enter a valid end time between 0000 and 2400: ");
				setStart = input.nextInt();
			}
			newRoom.setEndTime(setEnd);
			System.out.println("What level of priority would you like the '" + newRoom.getName() + "' to have when compared? A valid priority being between 1(Being the highest priority) and "+(numRooms+1)+"(Being the lowest priority)");
			int setPriority = input.nextInt();
			while(setPriority < 1 || setPriority > (numRooms)) {
				System.out.println("Please enter a valid priority between 1(Being the highest priority) and "+ (numRooms) +"(Being the lowest priority): ");
				setPriority = input.nextInt();
			}
			newRoom.setPriority(setPriority);
			
			System.out.println("Room Name: " + newRoom.getName() );
			System.out.println("Desired Temperature: " + newRoom.getTemp() + " degrees farenheit");
			System.out.println("Desired Start Time: " + newRoom.getStartTime());
			System.out.println("Desired End Time: " + newRoom.getEndTime());
			System.out.println("Desired Priority: " + newRoom.getPriority());
			
			rooms.add(newRoom);
			
			
		}
		Collections.sort(rooms,(room1,room2) -> room1.getPriority() - room2.getPriority());
	}
	
	public void roomLogic(ArrayList<room> roomList, house home, int currentTime, int currentTemp) {
		boolean running = true;
		while(running) {
			for(room r: roomList) {
				if(currentTime > r.getStartTime() && currentTime < r.getEndTime()) {
					if(currentTemp < r.getTemp()) {
						home.setACStatus(true);
						home.setHeatStatus(false);
						r.setVentOpen(true);
					}
					else if(currentTime > r.getTemp()) {
						home.setHeatStatus(true);
						home.setACStatus(false);
						r.setVentOpen(true);
					}
					else {
						r.setVentOpen(false);
					}
				}
			}
		}
	}
	
	public static void showRooms(ArrayList<room> roomList) {
		System.out.println("Room List");
		for(room r: roomList) {
			System.out.println("Room Name: " + r.getName() );
			System.out.println("Desired Temperature: " + r.getTemp() + " degrees farenheit");
			System.out.println("Desired Start Time: " + r.getStartTime());
			System.out.println("Desired End Time: " + r.getEndTime());
			System.out.println("Desired Priority: " + r.getPriority());
			System.out.println("\n");
		}
	}
}
