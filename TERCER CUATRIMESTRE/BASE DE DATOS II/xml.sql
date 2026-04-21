-- phpMyAdmin SQL Dump
-- version 4.0.4
-- http://www.phpmyadmin.net
--
-- Servidor: localhost
-- Tiempo de generación: 21-04-2026 a las 19:34:16
-- Versión del servidor: 5.6.12-log
-- Versión de PHP: 5.4.16

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Base de datos: `xml`
--
CREATE DATABASE IF NOT EXISTS `xml` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `xml`;

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `cliente`
--

CREATE TABLE IF NOT EXISTS `cliente` (
  `id` varchar(50) NOT NULL,
  `razon_social` varchar(255) NOT NULL,
  `cuit` varchar(20) NOT NULL,
  `calle` varchar(255) NOT NULL,
  `numero` varchar(20) NOT NULL,
  `ciudad` varchar(100) NOT NULL,
  `provincia` varchar(100) DEFAULT NULL,
  `codigo_postal` varchar(20) DEFAULT NULL,
  `condicion_iva` varchar(2) NOT NULL,
  `extranjero` varchar(2) DEFAULT 'no',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Volcado de datos para la tabla `cliente`
--

INSERT INTO `cliente` (`id`, `razon_social`, `cuit`, `calle`, `numero`, `ciudad`, `provincia`, `codigo_postal`, `condicion_iva`, `extranjero`) VALUES
('CLI001', 'Juan Pérez', '20-12345678-9', 'Av. Sarmiento', '1500', 'Resistencia', 'Chaco', NULL, 'CF', 'no');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `contacto`
--

CREATE TABLE IF NOT EXISTS `contacto` (
  `id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `tipo` varchar(20) NOT NULL,
  `valor` varchar(255) NOT NULL,
  `cliente_id` varchar(50) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `id` (`id`),
  KEY `cliente_id` (`cliente_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=3 ;

--
-- Volcado de datos para la tabla `contacto`
--

INSERT INTO `contacto` (`id`, `tipo`, `valor`, `cliente_id`) VALUES
(1, 'email', 'juan@mail.com', 'CLI001'),
(2, 'telefono', '3624-112233', 'CLI001');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `descuento`
--

CREATE TABLE IF NOT EXISTS `descuento` (
  `id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `tipo` varchar(20) NOT NULL,
  `global` varchar(2) DEFAULT 'si',
  `motivo` text NOT NULL,
  `porcentaje` decimal(5,2) NOT NULL,
  `factura_id` varchar(50) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `id` (`id`),
  KEY `factura_id` (`factura_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

--
-- Volcado de datos para la tabla `descuento`
--

INSERT INTO `descuento` (`id`, `tipo`, `global`, `motivo`, `porcentaje`, `factura_id`) VALUES
(1, 'comercial', 'si', 'Cliente frecuente', '5.00', 'FAC001');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `factura`
--

CREATE TABLE IF NOT EXISTS `factura` (
  `id` varchar(50) NOT NULL,
  `tipo` char(1) DEFAULT 'B',
  `estado` varchar(10) DEFAULT 'borrador',
  `moneda` varchar(10) DEFAULT NULL,
  `version` varchar(10) DEFAULT '3.0',
  `fecha` date NOT NULL,
  `numero` varchar(50) NOT NULL,
  `punto_venta` varchar(50) NOT NULL,
  `subtotal` decimal(12,2) NOT NULL,
  `total_iva` decimal(12,2) NOT NULL,
  `total_final` decimal(12,2) NOT NULL,
  `observaciones` text,
  `cliente_id` varchar(50) NOT NULL,
  `vendedor_id` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `cliente_id` (`cliente_id`),
  KEY `vendedor_id` (`vendedor_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Volcado de datos para la tabla `factura`
--

INSERT INTO `factura` (`id`, `tipo`, `estado`, `moneda`, `version`, `fecha`, `numero`, `punto_venta`, `subtotal`, `total_iva`, `total_final`, `observaciones`, `cliente_id`, `vendedor_id`) VALUES
('FAC001', 'B', 'emitida', 'ARS', '3.0', '2026-04-21', '00001234', '0001', '410.00', '86.10', '496.10', 'Entrega en 48hs hábiles.', 'CLI001', NULL);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `item`
--

CREATE TABLE IF NOT EXISTS `item` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `codigo` varchar(50) NOT NULL,
  `descripcion` text NOT NULL,
  `cantidad` decimal(10,2) NOT NULL,
  `precio_unitario` decimal(10,2) NOT NULL,
  `alicuota_iva` decimal(5,2) NOT NULL,
  `unidad` varchar(10) DEFAULT 'un',
  `bonificado` varchar(2) DEFAULT 'no',
  `factura_id` varchar(50) NOT NULL,
  `item_ref` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `factura_id` (`factura_id`),
  KEY `item_ref` (`item_ref`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=3 ;

--
-- Volcado de datos para la tabla `item`
--

INSERT INTO `item` (`id`, `codigo`, `descripcion`, `cantidad`, `precio_unitario`, `alicuota_iva`, `unidad`, `bonificado`, `factura_id`, `item_ref`) VALUES
(1, 'PROD-001', 'Teclado mecanico', '2.00', '45.00', '21.00', 'un', 'no', 'FAC001', NULL),
(2, 'PROD-002', 'Monitor LG 24', '1.00', '320.00', '21.00', 'un', 'no', 'FAC001', NULL);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `vendedor`
--

CREATE TABLE IF NOT EXISTS `vendedor` (
  `id` varchar(50) NOT NULL,
  `nombre` varchar(255) NOT NULL,
  `legajo` varchar(50) DEFAULT NULL,
  `cliente_ref` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `cliente_ref` (`cliente_ref`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Restricciones para tablas volcadas
--

--
-- Filtros para la tabla `contacto`
--
ALTER TABLE `contacto`
  ADD CONSTRAINT `contacto_ibfk_1` FOREIGN KEY (`cliente_id`) REFERENCES `cliente` (`id`);

--
-- Filtros para la tabla `descuento`
--
ALTER TABLE `descuento`
  ADD CONSTRAINT `descuento_ibfk_1` FOREIGN KEY (`factura_id`) REFERENCES `factura` (`id`);

--
-- Filtros para la tabla `factura`
--
ALTER TABLE `factura`
  ADD CONSTRAINT `factura_ibfk_1` FOREIGN KEY (`cliente_id`) REFERENCES `cliente` (`id`),
  ADD CONSTRAINT `factura_ibfk_2` FOREIGN KEY (`vendedor_id`) REFERENCES `vendedor` (`id`);

--
-- Filtros para la tabla `item`
--
ALTER TABLE `item`
  ADD CONSTRAINT `fk_item_factura` FOREIGN KEY (`factura_id`) REFERENCES `factura` (`id`),
  ADD CONSTRAINT `fk_item_padre` FOREIGN KEY (`item_ref`) REFERENCES `item` (`id`);

--
-- Filtros para la tabla `vendedor`
--
ALTER TABLE `vendedor`
  ADD CONSTRAINT `vendedor_ibfk_1` FOREIGN KEY (`cliente_ref`) REFERENCES `cliente` (`id`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
