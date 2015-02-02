package com.marakana.android.fibonaccicommon;

import android.os.Parcel;
import android.os.Parcelable;

public class FibonacciResponse implements Parcelable {

	private long result;
	private long timeInMillis;

	public FibonacciResponse(long result, long timeInMillis) {
		this.result = result;
		this.timeInMillis = timeInMillis;
	}
	
	/** Constructors used implicitly with Parcelable */
	
	public FibonacciResponse() {
		this.result = 0;
		this.timeInMillis = 0;
	}
	
	public FibonacciResponse(Parcel in) {
		readFromParcel(in);
	}

	/** Public Accessors */
	
	public long getResult() {
		return result;
	}

	public long getTimeInMillis() {
		return timeInMillis;
	}

	/** Explicit Parcelable Requirements */
	
	public int describeContents() {
		return 0;
	}

	public void writeToParcel(Parcel parcel, int flags) {
		parcel.writeLong(this.result);
		parcel.writeLong(this.timeInMillis);
	}

	/** Implicit Parcelable Requirements */
	
	public void readFromParcel(Parcel in) {
		this.result = in.readLong();
		this.timeInMillis = in.readLong();
	}
	
	public static final Parcelable.Creator<FibonacciResponse> CREATOR = new Parcelable.Creator<FibonacciResponse>() {
		public FibonacciResponse createFromParcel(Parcel in) {
			return new FibonacciResponse(in);
		}

		public FibonacciResponse[] newArray(int size) {
			return new FibonacciResponse[size];
		}
	};
}
