//2016.02 Conrad Schweiz
//header_hint -> initialise Footer Nav and ToTop Button
//Dev. Marie-Soizic Knarr
//v1.02
var $j = jQuery.noConflict();
var amountScrolled = 300;


function detectBrowserWidth() {
    if ($j(window).width() < 768) {
//        console.log('Browser less than 768');
        return true;
    }
    else {
//        console.log('Browser more than 768');
        return false;
    }
}

function setFooter() {
    if (detectBrowserWidth()) {
       
            $j('body').append('<div id="cch_container_footer_mobile" class="cch_mobile_display test">' +
                    '<div id="cch_footer_btns">' +
                    '<a id="cch_btn_home" class="cch_footer_btn" href="/ce/fr/Welcome.html?WT.ac=mobile_footernav_home"><div><i class="fa fa-home"></i><br />Home</div></a>' +
                    '<a id="cch_btn_kontakt" class="cch_footer_btn" href="/ce/fr/content/contactez-nous/?WT.ac=footer_uberuns?WT.ac=mobile_footernav_kontakt"><i class="fa fa-envelope" ></i><br />Contact</a>' +
                    '<a id="cch_btn_impressum" class="cch_footer_btn" href="/ce/fr/content/info_agb_page"><i class="fa fa-file-text-o"></i><br />CGV</a>           ' +
                    '<div id="cch_btn_back">' +
                    '<button class="cch_footer_btn" onclick="history.go(-1);"><i class="fa fa-arrow-circle-left"></i><br />Retour</button>' +
                    '</div>' +
                    '</div>' +
                    '</div>');
    }
}

function setToTopBtn() {
    if (detectBrowserWidth()) {
// create the back to top button
        $j('body').prepend('<a href="#" class="back-to-top cch_mobile_display">Back to Top</a>');
        console.log('Start To Top');


        $j(window).scroll(function () {
            if ($j(window).scrollTop() > amountScrolled) {
                $j('a.back-to-top').fadeIn('slow');
            } else {
                $j('a.back-to-top').fadeOut('slow');
            }
        });

        $j('a.back-to-top, a.simple-back-to-top').click(function () {
            $j('html, body').animate({
                scrollTop: 0
            }, 700);
            return false;
        });

    }
}


$j(document).ready(function () {
    setFooter();
    setToTopBtn();
});