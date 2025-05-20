import requests
import json

# Step 1: Fetch data from API
city = "Kotdwara,IN"
api_key = "bc80336fa45ce091a031936e46ef181a"  # Replace with your actual API key
url = f"https://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}"

response = requests.get(url)

# Check if the request was successful
if response.status_code == 200:
    with open('weather_data.json', 'w') as json_file:
        json.dump(response.json(), json_file, indent=4)
    print("Weather data saved successfully.")
    print(response.status_code)       # Should be 200
    print(response.json())            # Full weather data in JSON
else:
    # Handle the error and print a more detailed message
    error_message = response.json().get('message', 'Unknown error')
    print(f"Error {response.status_code}: {error_message}")
