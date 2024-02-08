select patient_id, patient_name ,conditions from Patients
where conditions REGEXP '^(DIAB1)|( DIAB1)'