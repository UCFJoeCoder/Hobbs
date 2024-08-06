package com.example.hobbs;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

import com.example.hobbs.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity
{

    // Used to load the 'hobbs' library on application startup.
    static
    {
        System.loadLibrary("HobbsApp");

        // Loading these libraries after hobbs allows the dynamic cast to be successful.
        // Loading these libraries before hobbs causes the dynamic cast to fail.
        //System.loadLibrary("RectangleLib");
        //System.loadLibrary("CirclesLib");
        //System.loadLibrary("TriangleLib");
        //System.loadLibrary("ShapesLib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        ActivityMainBinding binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        // Example of a call to a native method
        TextView tv = binding.sampleText;
        tv.setText(stringFromJNI());
    }

    /**
     * A native method that is implemented by the 'hobbs' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}