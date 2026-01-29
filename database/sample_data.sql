INSERT INTO students (name, email) VALUES 
('Ahmad Arafat', 'ahmad.arafat@gmail.com'),
('Wael Hamad', 'waelhamad00@gmail.com'),
('Ismael Husain', 'ismaelh@gmail.com'),
('Qaysar Aloch', 'qaysarq@gmail.com'),
('Alaa Baghdadi', 'alaa090@gmail.com');

INSERT INTO courses (title, duration) VALUES 
('Exel from beginner to advanced', '35hr'),
('General english starter', '48hr'),
('HRD course', '40hr'),
('Professional program in graphic design', '34hr'),
('Digital Filmmaking', '12hr');

INSERT INTO enrollments (student_id, course_id, enrollment_date) VALUES 
(1, 3, '2026-01-01'),
(2, 4, '2026-01-13'),
(5, 1, '2026-01-14'),
(4, 2, '2026-01-23'),
(3, 5, '2026-02-01');
