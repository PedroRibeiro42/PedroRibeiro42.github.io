#!/bin/bash

# AED - Configure VSCode at FEUP Labs (made by Iohan Soares and Pedro Ribeiro) 
# [Use at your own risk!]

# Find g++ compiler path
COMPILER=$(which g++)

# VS Code user settings directory
USER_VSCODE_DIR="$HOME/.config/Code/User"
SETTINGS_FILE="$USER_VSCODE_DIR/settings.json"

# Create directory if it doesn't exist
mkdir -p "$USER_VSCODE_DIR"

echo "VSCode user settings directory: $USER_VSCODE_DIR"

# Backup existing settings.json if it exists
if [ -f "$SETTINGS_FILE" ]; then
    BACKUP_FILE="$SETTINGS_FILE.bak_$(date +%Y%m%d_%H%M%S)"
    cp "$SETTINGS_FILE" "$BACKUP_FILE"
    echo "Existing settings.json found."
    echo "Backup created at: $BACKUP_FILE"
else
    echo "No existing settings.json found. A new one will be created."
fi

# Write new settings.json
cat > "$SETTINGS_FILE" <<EOL
{
    "C_Cpp.default.compilerPath": "$COMPILER",
    "C_Cpp.default.intelliSenseMode": "gcc-x64",
    "C_Cpp.default.cppStandard": "c++17",
    "C_Cpp.default.cStandard": "c11",
    "C_Cpp.default.includePath": [
        "/usr/include",
        "/usr/include/c++/9",
        "/usr/include/c++/x86_64-linux-gnu"
    ]
}
EOL

echo "New VSCode C++ configuration has been written to: $SETTINGS_FILE"
