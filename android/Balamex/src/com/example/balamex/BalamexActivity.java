package com.example.balamex;

import android.app.Activity;
import android.app.ProgressDialog;
import android.os.AsyncTask;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.EditText;
import android.widget.RadioGroup;
import android.widget.TextView;

public class BalamexActivity extends Activity implements OnClickListener {

	private EditText input;
	private RadioGroup type;
	private TextView output;
	private Button button;
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_balamex);
		this.input = (EditText) super.findViewById(R.id.input);
		this.type = (RadioGroup) super.findViewById(R.id.type);
		this.output = (TextView) super.findViewById(R.id.output);
		this.button = (Button) super.findViewById(R.id.button);
		this.button.setOnClickListener(this);
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		getMenuInflater().inflate(R.menu.balamex, menu);
		return true;
	}

	@Override
	public boolean onOptionsItemSelected(MenuItem item) {
		// Handle action bar item clicks here. The action bar will
		// automatically handle clicks on the Home/Up button, so long
		// as you specify a parent activity in AndroidManifest.xml.
		int id = item.getItemId();
		if (id == R.id.action_settings) {
			return true;
		}
		return super.onOptionsItemSelected(item);
	}

	@Override
	public void onClick(View view) {
		String s = this.input.getText().toString();
		if (TextUtils.isEmpty(s)) {
			return;
		}
		final ProgressDialog dialog = ProgressDialog.show(this, "", "Calculating", true);
		final long n = Long.parseLong(s);
		new AsyncTask<Void, Void, String>() {
			
			@Override
			protected String doInBackground(Void... params) {

				long result = 0;
				long t = System.currentTimeMillis();
				switch(BalamexActivity.this.type.getCheckedRadioButtonId()) {
					case R.id.type_balamator_jon:
						result = BalamexLib.balamatorJOn(n);
						break;
					case R.id.type_balamator_joff:
						result = BalamexLib.balamatorJOff(n);
						break;
					case R.id.type_balamator_ion:
						result = BalamexLib.balamatorIOn(n);
						break;
					case R.id.type_balamator_ioff:
						result = BalamexLib.balamatorIOff(n);
						break;
				}
				t = System.currentTimeMillis() - t;
				return String.format("Balamator Result %d", result);
			}
			@Override
			protected void onPostExecute(String result) {
				dialog.dismiss();
				BalamexActivity.this.output.setText(result);
			}
		}.execute();
	}
}
