package smart_home;

public class room {
	private int priority;
	private int setTemperature;
	private int startTime;
	private int endTime;
	private boolean ventOpen;
	private String name;
	
	public room(int priority, String name, int setTemperature, int startTime, int endTime, boolean ventOpen) {
		this.priority = priority;
		this.name = name;
		this.setTemperature = setTemperature;
		this.startTime = startTime;
		this.endTime = endTime;
		this.ventOpen = ventOpen;
	}
	public int getPriority() {
		return priority;
	}
	public void setPriority(int priority) {
		this.priority = priority;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getTemp() {
		return setTemperature;
	}
	public void setTemp(int setTemperature) {
		this.setTemperature = setTemperature;
	}
	public int getStartTime() {
		return startTime;
	}
	public void setStartTime(int startTime) {
		this.startTime = startTime;
	}
	public int getEndTime() {
		return endTime;
	}
	public void setEndTime(int endTime) {
		this.endTime = endTime;
	}
	public boolean getVentOpen() {
		return ventOpen;
	}
	public void setVentOpen(boolean ventOpen) {
		this.ventOpen = ventOpen;
	}

}
