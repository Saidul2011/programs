// Example: Dynamically update exam updates
document.addEventListener("DOMContentLoaded", () => {
    const updatesSection = document.querySelector("#exam-updates");

    const newUpdate = document.createElement("p");
    newUpdate.innerHTML = "<strong>Result Announcement:</strong> 5th January 2025";
    updatesSection.appendChild(newUpdate);
});