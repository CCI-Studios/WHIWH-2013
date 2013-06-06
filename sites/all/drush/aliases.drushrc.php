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