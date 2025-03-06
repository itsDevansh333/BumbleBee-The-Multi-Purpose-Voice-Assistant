# Virtual Desktop Assistant
![Virtual Assistant GUI](./BumbleBee.gif)

## Overview
This **Virtual Desktop Assistant** is a powerful AI-driven application designed to enhance user productivity through voice commands. It is a desktop application that starts automatically at system boot, providing hands-free control over various system functionalities and external services.

---

## Features

### 1. Bootup GUI
- Launches a user-friendly graphical interface automatically when the system starts.

### 2. Active Wake Up (Hotword Detection)
- The assistant listens for a predefined **wake word** to activate its functionalities.

### 3. Google Automation
- Perform quick searches and access Google services through voice commands.

### 4. YouTube Automation
- Open, search, and control YouTube directly using voice inputs.

### 5. Database Control
- Execute various database operations:
    - Fetch records
    - Add new data
    - Delete data
    - Update data

### 6. Windows OS Control
- Perform system operations like opening applications, managing files, and controlling basic settings.

### 7. Dual Lock System
- **Face Lock:** Unlock the system using facial recognition.
- **Password Lock:** Traditional password-based unlock mechanism.

### 8. Active Push Notifications
- Sends a **real-time push notification to a connected phone** whenever the database is accessed.

### 9. Voice-Controlled Typing
- Convert speech to text and type directly into applications and documents.

### 10. AI-Powered Command Handling
- Uses **speech recognition** and **voice synthesis** to:
    - Understand user commands.
    - Match commands to predefined queries.
    - Execute corresponding actions.
    - Provide verbal feedback with synthesized voice responses.

---

## System Requirements
- **Operating System:** Windows 10/11
- **Programming Languages:** Python (recommended for core functionality)
- **Libraries/Technologies:** 
    - SpeechRecognition
    - pyttsx3 (Text-to-Speech)
    - OpenCV (for Face Lock)
    - SQLite/MySQL (for Database Control)
    - Notification Service for Push Alerts
    - GUI Framework (like Tkinter or PyQt)

---

## Installation
1. Clone this repository:
    ```
    git clone https://github.com/your-repo/virtual-desktop-assistant.git
    ```
2. Install required dependencies:
    ```
    pip install -r requirements.txt
    ```
3. Set the application to run at system boot using:
    - Task Scheduler (Windows)
    - Startup folder (Windows)

4. Configure database credentials and notification service settings in `config.json`.

---

## Usage
- Use the wake word to activate the assistant.
- Speak commands like:
    - "Open Google"
    - "Search YouTube for AI tutorials"
    - "Fetch today's logs from the database"
    - "Lock the system with Face Lock"
    - "Send push notification"
- The assistant will respond verbally and perform the required action.

---

## Example Commands
| Command                       | Action                                      |
|-------------------|-------------------------------|
| "Open Notepad"   | Opens Notepad application |
| "Search Google for weather" | Opens browser and searches for weather |
| "Add record to database" | Adds a record to the connected database |
| "Lock system" | Activates Face Lock or Password Lock based on settings |

---

## Contributing
Contributions are welcome! Please fork this repository and submit a pull request with your enhancements or bug fixes.

---

## License
This project is licensed under the **MIT License**.

---

## Contact
For queries, suggestions, or issues, feel free to reach out at:
- 📧 Email: your-email@example.com
- 🌐 GitHub: [YourGitHubProfile](https://github.com/your-profile)

---

**Made with ❤️ for Seamless Desktop Automation**
