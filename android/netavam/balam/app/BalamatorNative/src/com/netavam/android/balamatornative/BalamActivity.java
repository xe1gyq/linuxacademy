package com.netavam.android.balamatornative;

import android.app.Activity;
import android.os.Bundle;
import android.os.Handler;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import com.netavam.android.lib.balam.LibBalam;

public class BalamActivity extends Activity
  implements View.OnClickListener, Runnable {

  private TextView utilization;
  private Handler handler;
  private LibBalam libBalam;

  public void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    super.setContentView(R.layout.balam);
    this.utilization = (TextView) super.findViewById(R.id.utilization);
    Button button = (Button) super.findViewById(R.id.update_button);
    button.setOnClickListener(this);
    this.handler = new Handler();
  }

  @Override
  public void onResume() {
    super.onResume();
    this.libBalam = new LibBalam();
    this.handler.post(this);
  }

  @Override
  public void onPause() {
    super.onPause();
    this.handler.removeCallbacks(this);
    this.libBalam.close();
  }

  public void onClick(View view) {
    this.updateUtilization();
  }

  public void run() {
    this.updateUtilization();
    this.handler.postDelayed(this, 1000);
  }

  private void updateUtilization() {
    int onc = this.libBalam.balamatorOn();
    int offc = this.libBalam.balamatorOff();
    this.utilization.setText(
      super.getString(R.string.utilization_message,
      onc, offc));
  }
}
