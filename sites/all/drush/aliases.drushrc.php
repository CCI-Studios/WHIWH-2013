<?php

$aliases['dev'] = array(
	'uri'=> 'dev.whiwh.com',
	'root' => '/home/whiwh/subdomains/dev/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'whiwh',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),

	'ssh-options' => "-p 37241",
);

$aliases['staging'] = array(
	'uri'=> 'whiwh.ccistaging.com',
	'root' => '/home/staging/subdomains/whiwh/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),

	'ssh-options' => "-p 37241",
);

$aliases['dev2'] = array(
	'uri'=> 'dev2.whiwh.com',
	'root' => '/home/whiwh/subdomains/dev2/public_html',
	'remote-host'=> 'host.lambtonshield.com',
	'remote-user'=> 'whiwh',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);