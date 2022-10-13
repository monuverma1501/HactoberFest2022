
import android.graphics.Color; 
import android.graphics.drawable.ColorDrawable; 
import android.os.Bundle; 
import android.util.DisplayMetrics; 
import android.view.WindowManager; 
import androidx.appcompat.app.ActionBar; 
import androidx.appcompat.app.AlertDialog; 
import androidx.appcompat.app.AppCompatActivity; 
  
public class MainActivity extends AppCompatActivity 
{ 
  
    @Override
    protected void onCreate(Bundle savedInstanceState) 
    { 
        super.onCreate(savedInstanceState); 
        setContentView(R.layout.activity_main); 
  
        // for changing the background color of title bar 
        ActionBar aBar = getSupportActionBar(); 
        ColorDrawable cd = new ColorDrawable(Color.parseColor("#FF00FF00")); 
        if (aBar != null) { 
            aBar.setBackgroundDrawable(cd); 
        } 
        findViewById(R.id.button).setOnClickListener(v -> 
        { 
            AlertDialog.Builder builder = new AlertDialog.Builder(MainActivity.this);  
            builder.setMessage("Welcome to GeeksForGeeks!"); 
            builder.setTitle("Gift !"); 
            builder.setCancelable(false); 
            builder.setPositiveButton("Great, see again!", (dialog, which) -> dialog.cancel()); 
            builder.setNegativeButton("Exit", (dialog, which) -> finish()); 
            AlertDialog alertDialog = builder.create(); 
            alertDialog.show(); 
  
            DisplayMetrics displayMetrics = new DisplayMetrics(); 
            getWindowManager().getDefaultDisplay().getMetrics(displayMetrics); 
            WindowManager.LayoutParams layoutParams = new WindowManager.LayoutParams(); 
            layoutParams.copyFrom(alertDialog.getWindow().getAttributes()); 
            layoutParams.width = (int) (displayMetrics.widthPixels * 0.9f); 
            layoutParams.height = (int) (displayMetrics.heightPixels * 0.9f); 
            alertDialog.getWindow().setAttributes(layoutParams); 
        }); 
    } 
}
