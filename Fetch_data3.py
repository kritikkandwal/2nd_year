import requests
import json
import os

city = "Kotdwara,IN"
api_key = "bc80336fa45ce091a031936e46ef181a"  # Replace with your actual API key
url = f"https://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}"

def get_weather():
    response = requests.get(url)
    if response.status_code == 200:
        data = response.json()
        with open("weather_data.json", "w") as file:
            json.dump(data, file, indent=4)
        print("✅ GET: Weather data fetched and saved to weather_data.json.\n")
    else:
        print(f"❌ GET: Error {response.status_code}: {response.json().get('message', 'Unknown error')}")

def post_note():
    note = {"note": "Weather data collected for analysis."}
    if os.path.exists("weather_data.json"):
        with open("weather_data.json", "r+") as file:
            data = json.load(file)
            data["user_note"] = note
            file.seek(0)
            json.dump(data, file, indent=4)
            file.truncate()
        print("✅ POST: Note added to weather_data.json.\n")
    else:
        print("❌ POST: File not found. Run GET first.")

def put_city_custom():
    if os.path.exists("weather_data.json"):
        with open("weather_data.json", "r+") as file:
            data = json.load(file)
            data["custom_city_info"] = {
                "local_name": "Kotdwar",
                "region": "Uttarakhand",
                "visited": False
            }
            file.seek(0)
            json.dump(data, file, indent=4)
            file.truncate()
        print("✅ PUT: Custom city info added/updated.\n")
    else:
        print("❌ PUT: File not found. Run GET first.")

def patch_visit_status():
    if os.path.exists("weather_data.json"):
        with open("weather_data.json", "r+") as file:
            data = json.load(file)
            if "custom_city_info" in data:
                data["custom_city_info"]["visited"] = True
                file.seek(0)
                file.truncate()
                json.dump(data, file, indent=4)
                print("✅ PATCH: Visit status updated to True.\n")
            else:
                print("❌ PATCH: custom_city_info not found. Run PUT first.")
    else:
        print("❌ PATCH: File not found. Run GET first.")

def show_menu():
    print("Choose an action:")
    print("1. GET weather data (fetch from API and save locally)")
    print("2. POST a note (add 'user_note' locally)")
    print("3. PUT custom city info (add/update 'custom_city_info' locally)")
    print("4. PATCH visit status (set visited=True locally)")
    print("5. Exit")

if __name__ == "__main__":
    while True:
        show_menu()
        choice = input("Enter choice (1-5): ").strip()
        if choice == "1":
            get_weather()
        elif choice == "2":
            post_note()
        elif choice == "3":
            put_city_custom()
        elif choice == "4":
            patch_visit_status()
        elif choice == "5":
            print("Exiting...")
            break
        else:
            print("Invalid choice. Try again.")

        print("\nCurrent contents of weather_data.json:\n")
        if os.path.exists("weather_data.json"):
            with open("weather_data.json", "r") as f:
                print(f.read())
        else:
            print("weather_data.json does not exist yet.\n")
        print("-" * 40)
