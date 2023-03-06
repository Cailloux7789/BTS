var cookieConsentDialog = (function ($, document) {
	var screen = {}, $overlay, $modal, $content;

	// Center the modal in the viewport
	screen.center = function() {
		var top, left;

		top = Math.max($(window).height() - $modal.outerHeight(), 0) / 2;
		left = Math.max($(window).width() - $modal.outerWidth(), 0) / 2;

		$modal.css({
			top : top + $(window).scrollTop(),
			left : left + $(window).scrollLeft()
		});
	};

	// Open the modal
	screen.open = function(settings) {
		$content.empty().append(settings.content);

		$modal.css({
			width : settings.width || 'auto',
			height : settings.height || 'auto'
		});

		screen.center();
		$(window).bind('resize.cookieModalWindow', screen.center);
		$modal.show();
		$overlay.show();
	};

	// Close the modal
	screen.close = function() {
		$modal.hide();
		$overlay.hide();
		$content.empty();
		$(window).unbind('resize.cookieModalWindow');
	};
	
	screen.enableTracking = function() {
		var formId = "enableTrackingForm";
		var url = "/ce/nl/enableTracking.html";
		submitFormAjax(formId, url);
		screen.close();
		$("#cookiewarnscreen").css({display : "none"});
		
		return false;
	};
	
	screen.disableTracking = function() {
		var formId = "disableCookieTrackingForm";
		var url = "/ce/nl/disableTracking.html";
		submitFormAjax(formId, url);
		screen.close();
		$("#cookiewarnscreen").css({display : "block"});
		return false;
	};

	// Generate the HTML and add it to the document
	$overlay = $('<div id="cookieOverlay"></div>');
	$modal = $('<div id="cookieModalWindow"></div>');
	$content = $('<div id="cookieModalContent"></div>');

	$modal.hide();
	$overlay.hide();
	$modal.append($content);

	$(document).ready(function() {
		$('body').append($overlay, $modal);
	});

	$("#enableTrackingButton,#disableTrackingLink").click(function(e) {
		screen.close();
	});

	return screen;
})(jQuery, document);

function submitFormAjax(formId, url) {
	var formData = jQuery("#" + formId).serialize() + "&ajaxSubmit=true";
	
	jQuery.ajax({
		type: "POST",
		url: url,
		data: formData,
		dataType: "json",
		success: onSuccess
	});
	return false;
}

function hideCookieScreen() {
	var url = "/ce/nl/hideCookieScreen.html";
	jQuery.ajax({
		type: "GET",
		dataType: "json",
		url: url,
		success: function(result) {}
	});
	jQuery("body").css({top : 0});
	jQuery("#cookie_box_header").css({display : "none"});
	return false;
}

function onSuccess(data) {
	var page  = data.page;
	var value = data.value;
	if('cookieInfo' == page) {
		if('enable' == value) {
			jQuery("#enableFormWrapper").css({display : "none"});
			jQuery("#disableFormWrapper").css({display : "block"});
		}
		if('disable' == value) {
			jQuery("#disableFormWrapper").css({display : "none"});
			jQuery("#enableFormWrapper").css({display : "block"});
		}
	}
	return false;
}

function enableTracking() {
	return cookieConsentDialog.enableTracking();
}

function disableTracking() {
	return cookieConsentDialog.disableTracking();
}