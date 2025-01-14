import pyautogui
import time
import pyperclip

# Click on the icon at (525, 748)
pyautogui.click(525, 748)

# Pause for a moment to ensure the click is registered
time.sleep(1)

# Drag from (414, 142) to (1289, 644) to select text
pyautogui.moveTo(414, 142)
pyautogui.dragTo(1289, 644, duration=1.0, button='left')

# Press 'Ctrl+C' to copy the selected text
pyautogui.hotkey('ctrl', 'c')

# Pause to ensure the clipboard has time to copy
time.sleep(1)

# Retrieve the copied text from the clipboard
copied_text = pyperclip.paste()

# Print the copied text to verify
print(copied_text)
