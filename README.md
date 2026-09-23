# Software Development & Practical Lab Engineering Index

This repository archives the codebases, algorithm prototypes, automated test environments, and development assets backing my academic works, book chapters, and computational lab frameworks. 

## 💻 Tech Stack & Engineering Core

The projects hosted here integrate software engineering workflows across diverse computational domains:
*   **System & Native Development (C/C++)**: Native algorithms, memory management simulations, and optimization implementations.
*   **Data Analytics & Scripting (Python)**: Analytical models, performance metric frameworks, and algorithmic simulations.
*   **Object-Oriented Applications (Java)**: Scalable application modules, syntax execution models, and programmatic tools.
*   **Data Tier Engineering (DBMS)**: Structured query templates, transaction logs, and relational database schema prototypes.

---

## 🛠️ Continuous Integration & Automated Workflows

This repository implements automated software quality tracking via **GitHub Actions** pipelines to enforce syntax linting, compilation accuracy, and test validations.

### Pipeline Status & Architecture
*   **Workflow Engine**: GitHub Actions Runner (`Ubuntu-Latest` matrix environment)
*   **CI Configuration**: `.github/workflows/c-cpp-ci.yml`
*   **Build Target Tracking**: Triggered automatically on every `push` and `pull_request` to the `main` branch.

> ⚠️ **Current DevOps Notice**: The active build tracking metric lists compilation/linking issues during recent automated workflows (e.g., commit iterations `d1f2ece`, `2c38712`, `4a1bcff`). Debugging steps are currently active within the native compiler workspace to address link-time dependencies and local header declarations.

---

## 📂 Source Code Distribution Tree

```text
├── .github/workflows/
│   └── c-cpp-ci.yml               # GitHub Actions CI compilation pipeline configuration
├── source-code/
│   ├── c-native-systems/          # Core memory, thread management, and system logic
│   ├── python-analytics/          # Analytics scripts, visualization scripts, and algorithms
│   └── java-frameworks/           # Java application files and core logical systems
└── configurations/
    └── dbms-schemas/              # Relational database architectures and scripts
```

---

## 🚀 Local Compilation & Execution Blueprints

### Native C Applications
Ensure a standard GCC or Clang environment is running natively. Compile using standard flags:
```bash
gcc -Wall -O2 source-code/c-native-systems/main.c -o system_app.out
./system_app.out
```

### Python Frameworks
Execute data components inside an isolated virtual environment:
```bash
python3 -m venv env
source env/bin/activate
python3 source-code/python-analytics/analysis.py
```
