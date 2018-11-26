package smart_home;

import java.util.ArrayList;

public class house {
	private boolean acStatus; // true = on, false = off
	private boolean heatStatus; // true = on, false = off
	
	public house(boolean acStatus, boolean heatStatus) {
		this.acStatus = acStatus;
		this.heatStatus = heatStatus;
	}
	
	public void setACStatus(boolean acStatus) {
		this.acStatus = acStatus;
	}
	public boolean getACStatus() {
		return acStatus;
	}
	public void setHeatStatus(boolean heatStatus) {
		this.heatStatus = heatStatus;
	}
	public boolean getHeatStatus() {
		return heatStatus;
	}
}
