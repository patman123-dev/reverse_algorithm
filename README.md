# Reverse Audio Algorithm 🎧

A C++ implementation of an in-place reverse algorithm, originally designed for processing audio data such as MP3 frames. This project forms the foundation of a full mobile app that plays audio files in reverse.

---

## 🔧 What It Does

- Reverses an array of audio data (or any generic array) in-place.
- Forms the core logic for reversing audio playback.
- Optimized for performance and memory usage.
- Meant to integrate with a GUI front end (Java/Android Studio via JNI).

---

## 📂 File Structure

- `src/reverse.cpp` – Core reverse algorithm in C++
- `test_audio/` – (Optional) Folder to place sample MP3 or WAV segments
- `README.md` – Project documentation

---

## 🧠 Algorithm Overview

The core algorithm uses a simple in-place swap pattern:

```cpp
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
