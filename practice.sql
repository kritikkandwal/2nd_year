-- Create and use your own practice database
CREATE DATABASE IF NOT EXISTS practice_db;
USE practice_db;

-- Now create your table
CREATE TABLE students (
    id INT PRIMARY KEY,
    name VARCHAR(100),
    age INT
);

-- Insert sample data
INSERT INTO students VALUES (1, 'Aryan', 20), (2, 'Kritika', 22);

-- View data
SELECT * FROM students;
