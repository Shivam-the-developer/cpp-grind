
# Make running cpp easy

## step 1

mkdir -p "$HOME/.local/bin"
cat << 'EOF' > "$HOME/.local/bin/run-cpp"
#!/bin/bash
```
if [ -z "$1" ]; then
    echo "Usage: run-cpp <file.cpp>"
    exit 1
fi

FILE="$1"
BASENAME="${FILE%.*}"

# Check if file exists
if [ ! -f "$FILE" ]; then
    echo "Error: File '$FILE' not found."
    exit 1
fi

echo "==> Compiling $FILE with clang++ (C++20)..."
clang++ -std=c++20 -Wall -Wextra -Wpedantic "$FILE" -o "$BASENAME"

# If compilation succeeded, run it
if [ $? -eq 0 ]; then
    echo "==> Running ./$BASENAME"
    echo "----------------------------------------"
    ./"$BASENAME"
    STATUS=$?
    echo "----------------------------------------"
    echo "==> Process finished with exit code $STATUS"
else
    echo "==> Compilation failed."
    exit 1
fi
EOF
```

## step 2

```
chmod +x "$HOME/.local/bin/run-cpp"
```

## step 3

```
echo 'export PATH="$HOME/.local/bin:$PATH"' >> ~/.zshrc
source ~/.zshrc
```

## How to run:

```
run-cpp filename.cpp
```

---

