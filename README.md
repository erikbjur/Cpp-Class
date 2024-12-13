# C++ Samples Workspace

This repository contains a collection of C++ sample topics, organized by folders within a Visual Studio Code workspace. Each folder represents a unique topic and includes all necessary resources for building and running the sample code.
Once you are done reading this README, open the Basics.code-workspace to be able to use all of the pre-built tasks associated with each folder.

## Features
- **Platform Support**: Buildable on macOS, Windows, and Linux.
- **Per-Folder Tasks**: Each topic folder has its own `tasks.json` file to simplify the build process.
- **Clang++ Compiler**: All samples are configured to build using the `clang++` compiler.
- **VS Code Integration**: Easily build topics using the Command Palette in VS Code.

---

## Getting Started

### Prerequisites
- **Visual Studio Code**: Ensure you have VS Code installed.
- **C++ Compiler**: Install `clang++` and ensure it is in your system's PATH.
  - macOS: Pre-installed or install via Xcode command-line tools.
  - Windows: Install via [LLVM](https://llvm.org/).
  - Linux: Install via your package manager (e.g., `sudo apt install clang` on Ubuntu).

### Clone the Repository
```bash
git clone https://github.com/erikbjur/CPP-Class.git
cd CPP-Class
```

### Open in VS Code
1. Open the cloned repository in VS Code.
2. Ensure the workspace file (`*.code-workspace`) is selected.

### Configure Build
Each folder contains its own `tasks.json` file with tasks pre-configured for macOS, Windows, and Linux.

- **macOS/Linux**: Use the `Mac` tasks.
- **Windows**: Use the `Windows` tasks.

### Building a Sample
1. Open the Command Palette (`Ctrl+Shift+P` or `Cmd+Shift+P` on macOS).
2. Select `Tasks: Run Task`.
3. Choose the folder (topic) you want to build.
4. Select the appropriate build task for your platform.

### Running the Executable
After building, the compiled executable will be available in the same folder. Run it using the terminal:
```bash
./executable-name  # macOS/Linux
executable-name.exe  # Windows
```

---

## Folder Structure
Each folder corresponds to a sample topic and contains:
- **Source Files**: `.cpp` files for the sample code.
- **tasks.json**: Pre-configured build tasks.
- **README.md** (optional): Topic-specific documentation.

---

## Contributing
Contributions are welcome! To contribute:
1. Fork this repository.
2. Create a branch for your changes: `git checkout -b feature-name`.
3. Commit your changes: `git commit -m "Add new sample topic"`.
4. Push the branch: `git push origin feature-name`.
5. Open a Pull Request.

---

## License
This project is licensed under the [MIT License](LICENSE).

---

## Issues
If you encounter any issues, please open an [issue](https://github.com/erikbjur/CPP-Class/issues) on GitHub.

---

## Acknowledgments
- Thanks to the creators of [Clang++](https://clang.llvm.org/) and [Visual Studio Code](https://code.visualstudio.com/) for their awesome tools.
