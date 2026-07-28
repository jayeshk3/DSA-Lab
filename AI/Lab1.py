def diagnose(symptoms):
    # Convert symptoms list to a set for fast, order-independent matching
    symptom_set = set(symptoms)

    # 1. Check for COVID-19 (3 symptoms)
    if {"fever", "cough", "difficulty breathing"}.issubset(symptom_set):
        return "COVID-19"
        
    # 2. Check for Flu (2 symptoms)
    elif {"fever", "cough"}.issubset(symptom_set):
        return "flu"
        
    # 3. Check for Measles (2 symptoms)
    elif {"fever", "rash"}.issubset(symptom_set):
        return "measles"
        
    # 4. Check for Migraine (2 symptoms)
    elif {"headache", "nausea"}.issubset(symptom_set):
        return "migraine"
        
    # 5. Check for Cold (2 symptoms)
    elif {"sneezing", "runny nose"}.issubset(symptom_set):
        return "cold"
        
    # 6. Check for Strep Throat (2 symptoms)
    elif {"sore throat", "fever"}.issubset(symptom_set):
        return "strep throat"
        
    # 7. Check for Influenza (2 symptoms)
    elif {"fatigue", "muscle pain"}.issubset(symptom_set):
        return "influenza"
        
    # 8. Check for Allergy (2 symptoms)
    elif {"itchy eyes", "sneezing"}.issubset(symptom_set):
        return "allergy"
        
    else:
        return "Unknown condition"

symptoms = input('Enter symptoms seperated by comma: ')
patient_symptoms = [symptom.strip().lower() for symptom in symptoms.split(",")]
print("Your diagnosis is: ", diagnose(patient_symptoms))
