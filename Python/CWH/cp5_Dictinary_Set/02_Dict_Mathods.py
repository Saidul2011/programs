marks={
    "Akib":     70,
    "Saidul":   99,
    "Khairul":  30,
    "Rohan":    50,
    2: "Akib Roll"
}
print(marks.items())
print(marks.keys())
print(marks.values())
marks.update({"Akib":75,"Huma":30}) # mutable
print(marks.get("Akib"))  # if not exist print none no err 