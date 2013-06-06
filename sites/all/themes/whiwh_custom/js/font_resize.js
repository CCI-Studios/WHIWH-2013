(function($) {
	$(function () {
		var $body = $('.region-content'),
			$resize = $('.menu-name-menu-font-resize-menu'),
			$up = $resize.find('.leaf.last a'),
			$down = $resize.find('.leaf.first a'),
			default_size = 16,
			size_increment = 2,
			size_min = 10,
			size_max = 20,
			key = 'sgl_font_resize',
			value = parseInt($.cookie(key) || default_size);


		var fontResize = function(size) {
			$body.css('fontSize', size+'px');
		}
		fontResize(value);

		$up.click(function() {
			value = Math.min(value + size_increment, size_max);
			$.cookie(key, value, {path:'/'});
			fontResize(value);
			console.log("up.click font-size="+value);
			return false;
		});

		$down.click(function() {
			value = Math.max(value - size_increment, size_min);
			$.cookie(key, value, {path:'/'});
			fontResize(value);
			return false;
		});
	});
}(jQuery));