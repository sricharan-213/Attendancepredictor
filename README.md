<h1 align="center">📊 Attendance Predictor (Python)</h1>

<p align="center">
A simple and interactive <b>Python console application</b> that helps students
predict their future attendance percentage based on how many classes they plan
to <b>attend or bunk</b>.
</p>

<hr>

<h2>🚀 Features</h2>
<ul>
  <li>Accepts current total classes and attendance percentage</li>
  <li>Predicts future attendance after attending or bunking classes</li>
  <li>Displays total classes, attended classes, missed classes</li>
  <li>Shows predicted attendance percentage</li>
  <li>Built-in <b>75% Attendance Planner</b></li>
  <ul>
    <li>Maximum safe bunks allowed</li>
    <li>Minimum classes required to reach 75%</li>
  </ul>
  <li>Handles invalid inputs safely</li>
</ul>

<hr>

<h2>🛠️ Tech Stack</h2>
<ul>
  <li><b>Language:</b> Python 🐍</li>
  <li><b>Module:</b> math</li>
</ul>

<hr>

<h2>🧠 How It Works</h2>
<ol>
  <li>User enters total classes and current attendance</li>
  <li>User chooses to attend or bunk classes</li>
  <li>Program recalculates attendance</li>
  <li>Displays prediction and 75% planning advice</li>
</ol>

<hr>

<h2>▶️ Sample Test Cases</h2>

<h3>✅ Test Case 1: Attendance Already Safe</h3>
<pre>
Input:
Total Classes Held: 100
Current Attendance: 80
Choice: Attend
Planned Classes: 5

Output:
Predicted Attendance: 81.82%
You can safely bunk up to some classes
Attendance already above 75%
</pre>

<h3>⚠️ Test Case 2: Attendance Drops Due to Bunking</h3>
<pre>
Input:
Total Classes Held: 100
Current Attendance: 78
Choice: Bunk
Planned Classes: 10

Output:
Predicted Attendance: 70.90%
You need to attend more classes to reach 75%
</pre>

<h3>📈 Test Case 3: Recovering From Low Attendance</h3>
<pre>
Input:
Total Classes Held: 80
Current Attendance: 60
Choice: Attend
Planned Classes: 20

Output:
Predicted Attendance: 66.67%
Still below 75%
Shows minimum classes required to reach target
</pre>

<h3>🚨 Test Case 4: Edge Case (Very Low Attendance)</h3>
<pre>
Input:
Total Classes Held: 50
Current Attendance: 30
Choice: Attend
Planned Classes: 30

Output:
Predicted Attendance: 50.00%
Significant effort required to reach 75%
Planner gives exact count
</pre>

<h3>❌ Test Case 5: Invalid Input Handling</h3>
<pre>
Input:
Total Classes Held: -10
Current Attendance: 110

Output:
[ERROR] Invalid input! Please enter valid numbers.
</pre>

<hr>

<h2>▶️ How to Run</h2>

<pre>
python attendance_predictor.py
</pre>

<hr>

<h2>🧪 Input Validation</h2>
<ul>
  <li>Prevents negative values</li>
  <li>Ensures attendance percentage is between 0–100</li>
  <li>Detects logical inconsistencies</li>
</ul>

<hr>

<h2>💡 Use Cases</h2>
<ul>
  <li>College attendance planning</li>
  <li>Avoiding attendance shortage panic</li>
  <li>Beginner-friendly Python logic project</li>
</ul>

<hr>

<h2>🌱 Future Improvements</h2>
<ul>
  <li>GUI version (Tkinter)</li>
  <li>Web app (Flask / Streamlit)</li>
  <li>Semester attendance tracker</li>
</ul>

<hr>

<h2>⭐ Support</h2>
<p>
If you like this project, give it a ⭐<br>
<b>Stay consistent and plan smart!</b>
</p>
