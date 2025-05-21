import os
import json
def post_note():
    note = {"note": "Weather data collected for analysis."}
    if os.path.exists("weather_data.json"):
        with open("weather_data.json", "r+") as file:
            data = json.load(file)
            data["user_note"] = note
            file.seek(0)
            json.dump(data, file, indent=4)
        print("✅ POST: Note added to weather_data.json.\n")
    else:
        print("❌ POST: File not found. Run GET first.")
        
# or by name 
data["dt"] = {
    "timestamp": data["dt"],
    "user_note": {"note": "Weather data collected for analysis."}
}

