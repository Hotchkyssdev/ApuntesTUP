-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1:3306
-- Tiempo de generación: 28-04-2026 a las 01:20:20
-- Versión del servidor: 8.3.0
-- Versión de PHP: 8.2.18

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `resenas_db`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `categoria`
--

DROP TABLE IF EXISTS `categoria`;
CREATE TABLE IF NOT EXISTS `categoria` (
  `id_categoria` int NOT NULL AUTO_INCREMENT,
  `nombre` varchar(80) COLLATE utf8mb4_unicode_ci NOT NULL,
  `descripcion` varchar(255) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  PRIMARY KEY (`id_categoria`),
  UNIQUE KEY `nombre` (`nombre`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Volcado de datos para la tabla `categoria`
--

INSERT INTO `categoria` (`id_categoria`, `nombre`, `descripcion`) VALUES
(1, 'Ciencia Ficción', 'Obras de temática científica y futurista'),
(2, 'Drama', 'Obras con conflictos emocionales intensos'),
(3, 'Terror', 'Obras diseñadas para generar miedo o suspenso'),
(4, 'Fantasía', 'Obras con elementos mágicos o imaginarios'),
(5, 'Thriller', 'Obras de suspenso e intriga'),
(6, 'Clásicos', 'Obras de reconocido valor histórico-literario');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `producto`
--

DROP TABLE IF EXISTS `producto`;
CREATE TABLE IF NOT EXISTS `producto` (
  `id_producto` int NOT NULL AUTO_INCREMENT,
  `titulo` varchar(200) COLLATE utf8mb4_unicode_ci NOT NULL,
  `tipo` enum('pelicula','libro') COLLATE utf8mb4_unicode_ci NOT NULL,
  `autor_director` varchar(150) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `anio_lanzamiento` year NOT NULL,
  `genero` varchar(80) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `atributos_extra` json DEFAULT NULL,
  PRIMARY KEY (`id_producto`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Volcado de datos para la tabla `producto`
--

INSERT INTO `producto` (`id_producto`, `titulo`, `tipo`, `autor_director`, `anio_lanzamiento`, `genero`, `atributos_extra`) VALUES
(1, 'Inception', 'pelicula', 'Christopher Nolan', '2010', 'Ciencia Ficción', '{\"premios\": [\"Oscar\"], \"duracion_min\": 148, \"clasificacion\": \"PG-13\", \"idioma_original\": \"en\"}'),
(2, 'El señor de los anillos: La comunidad del anillo', 'pelicula', 'Peter Jackson', '2001', 'Fantasía', NULL),
(3, '1984', 'libro', 'George Orwell', '1949', 'Ciencia Ficción', '{\"isbn\": \"978-0-452-28423-4\", \"edicion\": \"primera\", \"paginas\": 328, \"editorial\": \"Secker & Warburg\"}'),
(4, 'Cien años de soledad', 'libro', 'Gabriel García Márquez', '1967', 'Drama', NULL),
(5, 'Get Out', 'pelicula', 'Jordan Peele', '2017', 'Terror', NULL),
(6, 'Harry Potter y la piedra filosofal', 'libro', 'J.K. Rowling', '1997', 'Fantasía', NULL),
(7, 'Parasite', 'pelicula', 'Bong Joon-ho', '2019', 'Thriller', NULL);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `producto_categoria`
--

DROP TABLE IF EXISTS `producto_categoria`;
CREATE TABLE IF NOT EXISTS `producto_categoria` (
  `id_producto` int NOT NULL,
  `id_categoria` int NOT NULL,
  PRIMARY KEY (`id_producto`,`id_categoria`),
  KEY `id_categoria` (`id_categoria`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Volcado de datos para la tabla `producto_categoria`
--

INSERT INTO `producto_categoria` (`id_producto`, `id_categoria`) VALUES
(1, 1),
(3, 1),
(4, 2),
(5, 3),
(2, 4),
(6, 4),
(5, 5),
(7, 5),
(3, 6),
(4, 6);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `resena`
--

DROP TABLE IF EXISTS `resena`;
CREATE TABLE IF NOT EXISTS `resena` (
  `id_resena` int NOT NULL AUTO_INCREMENT,
  `id_usuario` int NOT NULL,
  `id_producto` int NOT NULL,
  `puntuacion` tinyint NOT NULL,
  `comentario` text COLLATE utf8mb4_unicode_ci,
  `fecha_resena` date NOT NULL DEFAULT (curdate()),
  `metadatos` json DEFAULT NULL,
  PRIMARY KEY (`id_resena`),
  UNIQUE KEY `id_usuario` (`id_usuario`,`id_producto`),
  KEY `id_producto` (`id_producto`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Volcado de datos para la tabla `resena`
--

INSERT INTO `resena` (`id_resena`, `id_usuario`, `id_producto`, `puntuacion`, `comentario`, `fecha_resena`, `metadatos`) VALUES
(1, 1, 1, 9, 'Una obra maestra del cine moderno. Los niveles de sueño están brillantemente diseñados.', '2024-01-15', '{\"fuente\": \"web\", \"idioma\": \"es\", \"verificada\": true, \"contiene_spoiler\": false, \"fecha_verificacion\": \"2024-04-01\", \"tiempo_lectura_min\": 3}'),
(2, 2, 5, 10, 'Una crítica social brillante envuelta en una película de terror. Jordan Peele es un genio.', '2024-01-20', NULL),
(3, 3, 4, 10, 'La novela más importante de América Latina. García Márquez crea un universo único.', '2024-02-03', NULL),
(4, 4, 2, 8, 'Una adaptación épica. Algunos momentos lentos pero la ambientación es insuperable.', '2024-02-10', NULL),
(5, 5, 7, 9, 'Parasite es una masterclass de dirección. La tensión aumenta sin respiro.', '2024-02-18', NULL),
(6, 6, 3, 10, 'Un clásico absolutamente vigente. La distopía de Orwell se vuelve más relevante cada día.', '2024-03-01', NULL),
(7, 1, 6, 8, 'Un libro que marcó mi infancia. La magia de Rowling es inigualable para todas las edades.', '2024-03-10', NULL);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `usuario`
--

DROP TABLE IF EXISTS `usuario`;
CREATE TABLE IF NOT EXISTS `usuario` (
  `id_usuario` int NOT NULL AUTO_INCREMENT,
  `nombre` varchar(100) COLLATE utf8mb4_unicode_ci NOT NULL,
  `email` varchar(150) COLLATE utf8mb4_unicode_ci NOT NULL,
  `contrasena` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `fecha_registro` date NOT NULL DEFAULT (curdate()),
  `preferencias` json DEFAULT NULL,
  PRIMARY KEY (`id_usuario`),
  UNIQUE KEY `email` (`email`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Volcado de datos para la tabla `usuario`
--

INSERT INTO `usuario` (`id_usuario`, `nombre`, `email`, `contrasena`, `fecha_registro`, `preferencias`) VALUES
(1, 'Ana García', 'ana@mail.com', 'hash1', '2023-01-10', '{\"idioma\": \"es\", \"notificaciones\": true, \"generos_favoritos\": [\"Drama\", \"Ciencia Ficción\"]}'),
(2, 'Carlos López', 'carlos@mail.com', 'hash2', '2023-03-22', NULL),
(3, 'María Fernández', 'maria@mail.com', 'hash3', '2023-05-14', NULL),
(4, 'Juan Pérez', 'juan@mail.com', 'hash4', '2023-07-30', NULL),
(5, 'Laura Rodríguez', 'laura@mail.com', 'hash5', '2023-09-05', NULL),
(6, 'Diego Martínez', 'diego@mail.com', 'hash6', '2024-01-18', NULL);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `valoracion`
--

DROP TABLE IF EXISTS `valoracion`;
CREATE TABLE IF NOT EXISTS `valoracion` (
  `id_valoracion` int NOT NULL AUTO_INCREMENT,
  `id_usuario` int NOT NULL,
  `id_resena` int NOT NULL,
  `tipo` enum('like','dislike') COLLATE utf8mb4_unicode_ci NOT NULL,
  `fecha_valoracion` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id_valoracion`),
  UNIQUE KEY `id_usuario` (`id_usuario`,`id_resena`),
  KEY `id_resena` (`id_resena`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Volcado de datos para la tabla `valoracion`
--

INSERT INTO `valoracion` (`id_valoracion`, `id_usuario`, `id_resena`, `tipo`, `fecha_valoracion`) VALUES
(1, 2, 1, 'like', '2024-01-16 10:30:00'),
(2, 3, 1, 'like', '2024-01-17 09:15:00'),
(3, 4, 1, 'like', '2024-01-18 14:00:00'),
(4, 1, 2, 'like', '2024-01-21 08:45:00'),
(5, 5, 2, 'like', '2024-01-22 11:20:00'),
(6, 6, 3, 'like', '2024-02-04 16:00:00'),
(7, 1, 4, 'dislike', '2024-02-11 12:00:00'),
(8, 3, 5, 'like', '2024-02-19 10:00:00');

--
-- Restricciones para tablas volcadas
--

--
-- Filtros para la tabla `producto_categoria`
--
ALTER TABLE `producto_categoria`
  ADD CONSTRAINT `producto_categoria_ibfk_1` FOREIGN KEY (`id_producto`) REFERENCES `producto` (`id_producto`) ON DELETE CASCADE,
  ADD CONSTRAINT `producto_categoria_ibfk_2` FOREIGN KEY (`id_categoria`) REFERENCES `categoria` (`id_categoria`) ON DELETE CASCADE;

--
-- Filtros para la tabla `resena`
--
ALTER TABLE `resena`
  ADD CONSTRAINT `resena_ibfk_1` FOREIGN KEY (`id_usuario`) REFERENCES `usuario` (`id_usuario`) ON DELETE CASCADE,
  ADD CONSTRAINT `resena_ibfk_2` FOREIGN KEY (`id_producto`) REFERENCES `producto` (`id_producto`) ON DELETE CASCADE;

--
-- Filtros para la tabla `valoracion`
--
ALTER TABLE `valoracion`
  ADD CONSTRAINT `valoracion_ibfk_1` FOREIGN KEY (`id_usuario`) REFERENCES `usuario` (`id_usuario`) ON DELETE CASCADE,
  ADD CONSTRAINT `valoracion_ibfk_2` FOREIGN KEY (`id_resena`) REFERENCES `resena` (`id_resena`) ON DELETE CASCADE;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
