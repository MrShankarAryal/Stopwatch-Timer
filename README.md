# ⏱️ Clock Time Stopper Program

![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)
![Language: C](https://img.shields.io/badge/Language-C-blue.svg)

## 📜 Description
This is a simple stopwatch program implemented in C for the Turbo C compiler. The program displays a clock that can be started, stopped, paused, and reset. It is designed for educational purposes and is part of the C programming curriculum for B.E students.

## ✨ Features
- ⏯️ **Start, stop, and pause** the stopwatch.
- 🔄 **Reset** the stopwatch to zero.
- ⏱️ Real-time display updates every **centisecond** (1/100th of a second).

## 🚀 Getting Started

### 📋 Prerequisites
- **Turbo C compiler**
- A **DOS environment** or an emulator like **DOSBox** to run the Turbo C compiler

### 💻 Installation
1. **Clone this repository**:
    ```sh
    git clone https://github.com/yourusername/clock-time-stopper.git
    ```
2. **Open the project** in Turbo C or any other compatible C compiler.

### ▶️ Running the Program
1. **Compile** the program using the Turbo C compiler.
2. **Run** the executable.
3. **Follow the on-screen instructions**:
   - Press `0` to start the stopwatch.
   - Press `S` to stop the stopwatch.
   - Press `P` to pause the stopwatch.
   - Press `R` to resume the stopwatch if paused.
   - Press `T` to reset the stopwatch to zero.
   - Press `E` to exit the program.

## 🎮 Usage
Once the program is running, you can control the stopwatch using the following keys:
- `0`: Start the stopwatch
- `S`: Stop the stopwatch
- `P`: Pause the stopwatch
- `R`: Resume the stopwatch
- `T`: Reset the stopwatch to zero
- `E`: Exit the program

## 🛠️ Code Overview
The main components of the program are:
- `printTime(int h, int m, int s, int cs)`: Function to display the current time on the screen.
- `main()`: The main function where the stopwatch logic is implemented.

### 📄 Example
Here's a snippet of the code that runs the stopwatch:
```c
while (1) {
    if (stopwatch_running) {
        if (stopwatch_paused) {
            // Handle paused state
        } else {
            // Update and display the time
            for (cs = 0; cs < 100; cs++) {
                printTime(h, m, s, cs);
                delay(10);
                if (kbhit()) {
                    // Handle user input
                }
            }
            // Increment time counters
        }
    } else {
        // Wait for the user to start the stopwatch
    }
}
```
## 🤝 Contributing
Contributions are welcome! Please fork the repository and create a pull request with your changes.

## 📜 License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## 🙏 Acknowledgements
This project was created as part of the C programming curriculum for B.E students.
Thanks to the Turbo C compiler team for providing a robust development environment.
