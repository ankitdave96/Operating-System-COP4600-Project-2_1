package com.example.ankitdave.ostextfilereader;

import android.support.v4.widget.TextViewCompat;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
//import android.

public class MainActivity extends AppCompatActivity {
    static {
        try {
            System.loadLibrary("native-lib");
        } catch (UnsatisfiedLinkError e) {
            System.err.println("Native code library failed to load.\n" + e);
            System.exit(1);
        }
    }



    public static native String readfile(String filename);





    TextView filename;
    Button Read;
    TextView outputtext;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);




        //scode sample = new oscode();

       // String  text;


        filename= (TextView) findViewById(R.id.editText);
        Read = (Button)findViewById(R.id.button);
        outputtext=(TextView)findViewById(R.id.editText2);


        Read.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                String f=filename.getText().toString();
                //text = readfile("textfile.txt");
                String output=readfile(f);
                System.out.println("stringMethod: " + output);



                outputtext.setText(output);



            }
        });
}






}
