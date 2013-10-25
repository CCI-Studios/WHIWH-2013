(function($) {
	$(function() {
		$(".view-carousel")
		.append("<div id='carousel-buttons'><ul/></div>")
		.append("<a id='carousel-previous' href='#' onclick='carouselPrevious();return false;'><img src='/sites/all/themes/whiwh_custom/images/carousel-previous.png' alt='Previous Slide' /></a>")
		.append("<a id='carousel-next' href='#' onclick='carouselNext();return false;'><img src='/sites/all/themes/whiwh_custom/images/carousel-next.png' alt='Next Slide' /></a>");

		$(".view-carousel .views-row").each(function(i){
			$("<li class='button-"+i+"'><a href='#' onclick='carouselActivate("+i+");return false;'>"+i+"</a></li>")
			.appendTo("#carousel-buttons ul");
		});
		$("#carousel-buttons .button-0").addClass("active");
	});
}(jQuery));

function carouselActivate(i)
{
	(function($) {
		console.log("carouselActivate("+i+")")

		var $carousel = $(".view-carousel");
		$carousel.find(".views-row").hide();
		$carousel.find(".views-row-"+(i+1)).show();
		$("#carousel-buttons .active").removeClass("active");
		$("#carousel-buttons .button-"+i).addClass("active");
	}(jQuery));
}

function carouselActiveIndex()
{
	return jQuery("#carousel-buttons li.active").index("#carousel-buttons li");
}

function carouselNumOfSlides()
{
	return jQuery(".view-carousel .views-row").length;
}

function carouselNext()
{
	var i = carouselActiveIndex();
	console.log("current="+i);
	i++;
	console.log("tent. next="+i);
	if (i >= carouselNumOfSlides())
		i = 0;
	carouselActivate(i);
}

function carouselPrevious()
{
	var i = carouselActiveIndex();
	i--;
	if (i < 0)
		i = carouselNumOfSlides()-1;
	carouselActivate(i);
}