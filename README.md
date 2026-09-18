# Exam Random Number Generator

A lightweight repository hosting a dual-range pseudo-random number generator. This project includes both a native desktop implementation in **C** and a lightweight web application compiled for modern browser environments.

## 🚀 Features
* **Dual-Range Generation**: Simultaneously outputs a primary random value (Range: 1–6) and a secondary value (Range: 7–12).
* **Cross-Platform Deployments**: Built with a C backend for native console runtime and a standalone web-optimized HTML/JavaScript engine.

## 📂 Repository Structure
```text
├── bin/                 # Generated native Windows executables (.exe)
├── src/                 # Native C implementation resource files (.c)
├── index.html           # Web asset application distribution file (.html)
└── README.md            # Repository usage documentation
```

## 🛠️ Desktop Build & Compilation

### Prerequisite System Requirements
Ensure an active GCC runtime environment or a C-supported compiler toolkit is available locally.

### Executable Build Automation
1. Launch **Code::Blocks IDE** and open the configuration target file (`.cbp`).
2. Toggle the build optimization target dropdown configuration profile to **Release**.
3. Execute compilation pipeline processing using **`Ctrl + F9`** (or navigate to *Build* -> *Build*).
4. Locate the production target executable file relative to your workspace root directory layout:
   ```bash
   ./bin/Release/your_program.exe
   ```

---

## 🌐 Web Infrastructure Deployment

The interactive client engine runs natively across web environments using vanilla JavaScript rendering logic.

### Local Initialization Steps
1. Navigate directly to the deployment directory containing the distribution source.
2. Initialize execution manually by **double-clicking** the target resource profile:
   ```bash
   index.html
   ```
3. Alternatively, drag and drop the `.html` file asset directly into any modern web browser window instance (Chrome, Edge, Firefox).
