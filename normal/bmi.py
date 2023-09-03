def calculate_bmi(weight, height):
    # Calculate BMI using the formula: weight / (height * height)
    bmi = weight / (height ** 2)
    return bmi

# Test the function
weight = float(input("Enter weight in kilograms: "))
height = float(input("Enter height in meters: "))

bmi = calculate_bmi(weight, height)

print("BMI:", bmi)
