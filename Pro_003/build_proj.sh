set -e

# Step 1: remove previous build
rm -rf build

# Step 2: create build
mkdir build

# Step 3: go to build and run CMake
cd build
cmake ..
cd ..

# Step 4: Verbose build output
cmake --build build --verbose

# Step 5: Additional custom steps (if needed)
echo "Build process completed successfully!"