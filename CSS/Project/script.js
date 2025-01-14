function updateTime() {
    const now = new Date();
    let hours = now.getHours();
    const ampm = hours >= 12 ? 'PM' : 'AM';

    // Convert to 12-hour format
    hours = (hours % 12) || 12;

    const minutes = now.getMinutes().toString().padStart(2, '0');
    const seconds = now.getSeconds().toString().padStart(2, '0');
    const month = (now.getMonth() + 1).toString().padStart(2, '0'); // Months are zero-based
    const day = now.getDate().toString().padStart(2, '0');
    const year = now.getFullYear();

    const timeString = `${hours}:${minutes}:${seconds} ${ampm}`;
    const dateString = `  \n${month}/${day}/${year}`;

    document.getElementById('time').innerText = timeString;
    document.getElementById('date').innerText = dateString;
}

// Update time every second
setInterval(updateTime, 1000);

// Initial update
updateTime();
