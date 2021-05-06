<?php

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define( 'DB_NAME', 'wordpress' );

/** MySQL database username */
define( 'DB_USER', 'root' );

/** MySQL database password */
define( 'DB_PASSWORD', '' );

/** MySQL hostname */
define( 'DB_HOST', 'localhost' );

/** Database Charset to use in creating database tables. */
define( 'DB_CHARSET', 'utf8' );

/** The Database Collate type. Don't change this if in doubt. */
define( 'DB_COLLATE', '' );

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */

define('AUTH_KEY',         '6j*CaP!2!+ Co_.S`c_6W38#VK+?|u;c+B)J&t)k-q6i-aV8nkvKmF#,`c8@E|;G');
define('SECURE_AUTH_KEY',  '-3S{(D~pxv7gLaM-&ZAP|[s!M,oT+TKyEjDn~SL|>SEp?UO.fk~`LB}J3zW?52(.');
define('LOGGED_IN_KEY',    'DG-%ANw)QWGU?T&g,74R**C|NNZ]vus9m?,j}@a<1+`yV*{vgp%[?ZJc>lmtqSIW');
define('NONCE_KEY',        '{Pj7U%IsMp#gpg2NhZ-`qXO^=Xc7N)w2^r^Z0,0@BZ,c!T+8}KixGUD;<FW+Xq[D');
define('AUTH_SALT',        'Gp;Z,x_jJ0Vl|+_qG0[L3~!jn-X6io!ngB}horGtGfy>5dC}CU>`{P>dI?<uCyc0');
define('SECURE_AUTH_SALT', '@+vS)+M-aBR-tE3(3R%rg{#f5oJ1a(hR-u<ZsraGzzvoRiw)v(]q|3wz$EO]p5+-');
define('LOGGED_IN_SALT',   '-kmzgY$(L:ID`Iq#=)QDO9sq,E_2:2:-LdG-&0c4LU88i0eAvjvIjPai&;I0`J4/');
define('NONCE_SALT',       'K|-<@o1?4):~KR5+kGH^K>>l*EC~W#,PNMnrrKW,/h}8ZZ#bk<dFd7Ve?/UW?3oL');

/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each
 * a unique prefix. Only numbers, letters, and underscores please!
 */
$table_prefix = 'wp_';

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 *
 * For information on other constants that can be used for debugging,
 * visit the Codex.
 *
 * @link https://codex.wordpress.org/Debugging_in_WordPress
 */
define( 'WP_DEBUG', false );

/* That's all, stop editing! Happy publishing. */

/** Absolute path to the WordPress directory. */
if ( ! defined( 'ABSPATH' ) ) {
	define( 'ABSPATH', dirname( __FILE__ ) . '/' );
}

/** Sets up WordPress vars and included files. */
require_once( ABSPATH . 'wp-settings.php' );
