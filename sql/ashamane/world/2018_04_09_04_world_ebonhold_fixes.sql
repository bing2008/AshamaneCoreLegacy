-- Waypoint Data for Instructor Razovious.
DELETE FROM `waypoint_data` WHERE id=961470;
INSERT INTO `waypoint_data` (`id`, `point`, `position_x`, `position_y`, `position_z`, `orientation`, `delay`, `move_type`, `action`, `action_chance`, `wpguid`) VALUES 
('961470', '1', '2494.19', '-5611.14', '420.48', '0', '1000', '0', '0', '100', '0'),
('961470', '2', '2498.07', '-5593.25', '420.48', '0', '0', '0', '0', '100', '0'),
('961470', '3', '2495.2', '-5578.86', '420.47', '0', '0', '0', '0', '100', '0'),
('961470', '4', '2486.86', '-5566.65', '420.47', '0', '0', '0', '0', '100', '0'),
('961470', '5', '2474.65', '-5558.41', '420.49', '0', '0', '0', '0', '100', '0'),
('961470', '6', '2456.7', '-5555.3', '420.49', '0', '1000', '0', '0', '100', '0'),
('961470', '7', '2474.65', '-5558.41', '420.49', '0', '0', '0', '0', '100', '0'),
('961470', '8', '2486.86', '-5566.65', '420.47', '0', '0', '0', '0', '100', '0'),
('961470', '9', '2495.2', '-5578.86', '420.47', '0', '0', '0', '0', '100', '0'),
('961470', '10', '2498.07', '-5593.25', '420.48', '0', '0', '0', '0', '100', '0');

UPDATE creature SET MovementType=2 WHERE id=28357;
UPDATE creature_addon SET path_id=961470 WHERE guid=96147;