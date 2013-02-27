package net.kaoriya.qb.unexpected_alignment;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends Activity
{
    public static final String TAG = "UAlign";

    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
    }

    public void onClickDo(View view)
    {
        try {
            String s = Native.alignmentTest();
            ((TextView)findViewById(R.id.result_box)).setText(s);
        } catch (Exception e) {
            Log.e(TAG, "met some trouble", e);
        }
    }
}
