package com.marakana.android.fibonaccicommon;

import android.os.Parcel;
import android.os.Parcelable;

public class FibonacciRequest implements Parcelable {

	public static enum Type {
		RECURSIVE_JAVA, ITERATIVE_JAVA, RECURSIVE_NATIVE, ITERATIVE_NATIVE
	}

	private long n;
	private Type type;
	
	public FibonacciRequest(long n, Type type) {
		this.n = n;
		if (type == null) {
			throw new NullPointerException("Type must not be null");
		}
		this.type = type;
	}

	/** Constructors used implicitly with Parcelable */
	
	public FibonacciRequest() {
		this.n = 0;
		this.type = Type.RECURSIVE_JAVA;
	}
	
	public FibonacciRequest(Parcel in) {
		readFromParcel(in);
	}
	
	/** Public Accessors */
	
	public long getN() {
		return n;
	}

	public Type getType() {
		return type;
	}

	/** Explicit Parcelable Requirements */
	
	public int describeContents() {
		return 0;
	}

	public void writeToParcel(Parcel parcel, int flags) {
		parcel.writeLong(this.n);
		parcel.writeInt(this.type.ordinal());
	}

	/** Implicit Parcelable Requirements */
	
	public void readFromParcel(Parcel in) {
		this.n = in.readLong();
		this.type = Type.values()[in.readInt()];
	}
	
	public static final Parcelable.Creator<FibonacciRequest> CREATOR = new Parcelable.Creator<FibonacciRequest>() {
		public FibonacciRequest createFromParcel(Parcel in) {
			return new FibonacciRequest(in);
		}

		public FibonacciRequest[] newArray(int size) {
			return new FibonacciRequest[size];
		}
	};
}
