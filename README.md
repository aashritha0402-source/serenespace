# 🌿 SereneSpace

![Language](https://img.shields.io/badge/Language-C-blue?style=flat&logo=c)
![Platform](https://img.shields.io/badge/Platform-Ubuntu-orange?style=flat&logo=ubuntu)
![Editor](https://img.shields.io/badge/Editor-Nano-lightgrey?style=flat)
![License](https://img.shields.io/badge/License-MIT-green?style=flat)
![Status](https://img.shields.io/badge/Status-Complete-brightgreen?style=flat)

A text-based mental wellness companion built in C. SereneSpace is a safe space for your thoughts and emotions — offering relaxation tips, grounding techniques, motivation, and a gratitude journal.

---

## 📸 Preview

```
=====Serene Space=====
This is Serene Space your mental wellness companion and a safe space for your thoughts and emotions
What can I call you?
> Alex

Hey Alex! How can I help you today?
I can give you:
1. Relaxation tips
2. Grounding methods
3. Motivation
4. Gratitude journal
Pick one!
> 3

====MOTIVATION JAR====
Welcome to the motivation jar!
Pick a number between 1-4
> 2
This too shall pass..
```

---

## ✨ Features

- Personalized greeting with your name
- Relaxation tips for stressful moments
- Scientifically proven grounding techniques for anxiety
- A motivation jar with uplifting quotes
- A gratitude journal to record things you're thankful for

---

## 🗂️ Menu Options

```
SereneSpace
 ├── 1. Relaxation Tips     → Helpful tips to de-stress
 ├── 2. Grounding Methods   → 5-4-3-2-1 and other calming techniques
 ├── 3. Motivation Jar      → Pick a number, get an uplifting quote
 └── 4. Gratitude Journal   → Write 3 things you are grateful for today
```

---

## 🚀 Getting Started

### Prerequisites

- [VMware Workstation](https://www.vmware.com/) with **Ubuntu** installed
- **GCC** compiler (pre-installed on Ubuntu)
- **Nano** text editor (pre-installed on Ubuntu)

To verify GCC is installed, run:
```bash
gcc --version
```

If not installed, run:
```bash
sudo apt update
sudo apt install gcc
```

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/serenespace.git
   ```

2. Navigate to the project folder:
   ```bash
   cd serenespace
   ```

3. Compile the program:
   ```bash
   gcc serenespace.c -o serenespace
   ```

### Run the Program

```bash
./serenespace
```

---

## 🕹️ Usage

- Enter your name when prompted
- Pick a number from the menu (1–4)
- Follow the on-screen instructions for each feature
- For the Motivation Jar, pick any number between 1 and 4

---

## 📝 Opening and Editing with Nano

To open and edit the file in nano:
```bash
nano serenespace.c
```

Useful nano shortcuts:
- `Ctrl + O` → Save the file
- `Ctrl + X` → Exit nano
- `Ctrl + K` → Cut a line
- `Ctrl + U` → Paste a line

---

## 📁 File Structure

```
serenespace/
│
├── serenespace.c      # Main source file
├── .gitignore         # Files excluded from Git
├── LICENSE            # MIT License
└── README.md          # Project documentation
```

---

## 🛠️ Technologies Used

- **C** — core language
- **GCC** — compiler
- **Nano** — text editor
- **Ubuntu** — operating system (via VMware)
- Standard C libraries: `stdio.h`, `string.h`

---

## 👤 Author

Made by **Your Name**
GitHub: [@your-username](https://github.com/your-username)

---

## 📜 License

This project is open source and available under the [MIT License](LICENSE).
