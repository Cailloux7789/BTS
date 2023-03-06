$BV.Internal.ajaxCallback(function(url,apiConfig){
if(!/(^|\.)(bazaarvoice\.com|conrad\.fr)(:\d+)?$/.test(location.hostname)){
throw "Bazaarvoice: Permission denied";
}
$BV.Internal.configureAppLoader("qa",false,{"cmn/7866/contentFocusingSupportInternal":"contentFocusingSupport"});
$BV.Internal.require(["qa/injection.qa","requester","domUtils","browserVersion","qa/analyticsInternalLegacyHooksQA","qa/contentFocusingSupportQA","jquery.core","dropdown","qa/analyticsHooksQA","parseUri","analyticsVersioning","analyticsHooks","cookies","magpie","magpieTracking","analyticsAutoTagHooks","contentDisplay","contentFocusingSupport","cmn/7866/contentFocusingSupportInternal"],function(Injection){
var materials={"BVQASourceID":"<div id=\"BVQAWidgetID\" class=\"BVQAWidget\"><div id=\"BVQABrowsePageID\" class=\"BVQAWidgetWrapper BVQABrowsePage\"><div id=\"BVQAHeaderID\" class=\"BVQAHeader\"><div id=\"BVQAQuestionAndAnswerCountID\" class=\"BVQAQuestionAndAnswerCount\">(<span class=\"BVQACount BVQAZeroCount\"><span class=\"BVQANumber\">0<\/span> questions<\/span> : <span class=\"BVQACount BVQAZeroCount\"><span class=\"BVQANumber\">0<\/span> réponses<\/span>)<\/div><h1 id=\"BVQAHeaderTitleID\" class=\"BVQATitle BVQAHeaderTitle\">Questions & Réponses sur ce produit<\/h1><h2 id=\"BVQAHeaderSubTitleID\" class=\"BVQASubTitle BVQAHeaderSubTitle\">Poser vos questions. Partager vos réponses.<\/h2><\/div><div id=\"BVQAMainID\" class=\"BVQAMain BVQAMainView\"><div class=\"BVQAPageTabs\"> <div class=\"BVQAPageTabSpacerLeft\">&nbsp;<\/div>\n\n <div class=\"BVQAPageTabSpacerMiddle\">&nbsp;<\/div>\n<div id=\"BVQAPageTabBrowseID\" class=\"BVQAPageTab BVQASelectedPageTab\">Naviguer parmi les Q&amp;r<\/div> <div class=\"BVQAPageTabSpacerMiddle\">&nbsp;<\/div>\n<div id=\"BVQAPageTabSearchID\" class=\"BVQAPageTab\" onclick=\"$BV.Internal.Requester.get('http://conrad.ugc.bazaarvoice.com/answers/6001-fr_fr/product/1485323/searchquestions.djs?format=embeddedhtml&amp;search=__SEARCHTEXT__','BVQAFrame','__CONFIGKEY__'); return false;\"><a data-bvjsref=\"http://conrad.ugc.bazaarvoice.com/answers/6001-fr_fr/product/1485323/searchquestions.djs?format=embeddedhtml&amp;search=__SEARCHTEXT__\" data-bvcfg=\"__CONFIGKEY__\" name=\"BV_TrackingTag_QA_Display_SearchTab\" href=\"javascript://\" title=\"Effectuer une recherche parmi les Q&amp;R\" class=\"BVQAPageTabLink\">Effectuer une recherche parmi les Q&amp;R<\/a><\/div>\n <div class=\"BVQAPageTabSpacerRight\">&nbsp;<\/div>\n<\/div><div id=\"BVQAViewQuestionsContentID\" class=\"BVQAMainContent BVQAViewQuestionsContent\"><div id=\"BVQANoQuestionsID\" class=\"BVQANoQuestions\"><div class=\"BVQATitle\">Soyez le premier à poser une question!<\/div><a data-bvjsref=\"http://conrad.ugc.bazaarvoice.com/answers/submit/6001-fr_fr/product/1485323/askquestion.djs?authsourcetype=__AUTHTYPE__&amp;campaignid=BV_QA_BROWSE&amp;format=embeddedhtml&amp;innerreturn=http%3A%2F%2Fconrad.ugc.bazaarvoice.com%2Fanswers%2F6001-fr_fr%2Fproduct%2F1485323%2Fquestions.djs%3Fformat%3Dembeddedhtml&amp;numanswers=0&amp;numquestions=0&amp;return=__RETURN__&amp;sessionparams=__BVSESSIONPARAMS__&amp;submissionparams=__BVSUBMISSIONPARAMETERS__&amp;submissionurl=__BVSUBMISSIONURL__&amp;user=__USERID__\" data-bvcfg=\"__CONFIGKEY__\" onclick=\"bvShowContentOnReturnQA('6001-fr_fr', '1485323', 'BVQAWidgetID');return typeof(BVQAOnSubmit)=='function' ? BVQAOnSubmit(this.href, 'QUESTION_SUBMISSION') : true;\" name=\"BV_TrackingTag_QA_Display_AskFirstQuestion\" href=\"javascript://\" title=\"Poser une nouvelle question \"><img src=\"http://conrad.ugc.bazaarvoice.com/answers/6001-fr_fr/static/buttonAskANewQuestion.gif\" alt=\"Poser une nouvelle question \" title=\"Poser une nouvelle question \" /><\/a> <ul id=\"BVSEO_meta\" style=\"display:none!important\">\n <li data-bvseo=\"bvDateModified\">2018-05-24 T05:38:05.482-05:00<\/li>\n <li data-bvseo=\"ps\">bvseo_pps, prod_bvqa, vn_prr_5.6<\/li>\n <li data-bvseo=\"cp\">cp-1, bvpage1<\/li>\n <li data-bvseo=\"co\">co_noquestions<\/li>\n <li data-bvseo=\"cf\">loc_en_US, sid_1485323, prod, sort_default<\/li>\n <\/ul>\n<\/div><\/div><\/div><div id=\"BVQAFooterID\" class=\"BVQAFooter\"><div id=\"BVQAGuidelinesID\" class=\"BVQAGuidelines\"><a name=\"BV_TrackingTag_QA_Display_QAndAGuidelines\" href=\"http://avis.conrad.fr/answers/6001-fr_fr/content/guidelines.htm\" target=\"_blank\" onclick=\"window.open(this.href,null,'left=50,top=50,width=500,height=500,toolbar=1,location=0,resizable=1,scrollbars=1'); return false;\" title=\"Politiques &amp; Instructions\">Politiques &amp; Instructions<\/a><\/div><\/div><\/div><\/div>","BVQASummaryBoxSourceID":"<div id=\"BVQASummaryBoxID\" class=\"BVQASummaryBox BVQASummaryBoxView\"><h1 id=\"BVQASummaryBoxTitleID\" class=\"BVQATitle BVQASummaryBoxTitle\">Questions & Réponses sur ce produit<\/h1><div id=\"BVQASummaryBoxAskFirstQuestionID\" class=\"BVQASummaryBoxLink\">Soyez le premier à <a data-bvjsref=\"http://conrad.ugc.bazaarvoice.com/answers/submit/6001-fr_fr/product/1485323/askquestion.djs?authsourcetype=__AUTHTYPE__&amp;campaignid=BV_QA_BROWSE&amp;format=embeddedhtml&amp;innerreturn=http%3A%2F%2Fconrad.ugc.bazaarvoice.com%2Fanswers%2F6001-fr_fr%2Fproduct%2F1485323%2Fquestions.djs%3Fformat%3Dembeddedhtml&amp;numanswers=0&amp;numquestions=0&amp;return=__RETURN__&amp;sessionparams=__BVSESSIONPARAMS__&amp;submissionparams=__BVSUBMISSIONPARAMETERS__&amp;submissionurl=__BVSUBMISSIONURL__&amp;user=__USERID__\" data-bvcfg=\"__CONFIGKEY__\" onclick=\"bvShowContentOnReturnFirstQA('6001-fr_fr', '1485323', 'BVQAWidgetID');return typeof(BVQAOnSubmit)=='function' ? BVQAOnSubmit(this.href, 'QUESTION_SUBMISSION') : true;\" name=\"BV_TrackingTag_QA_Display_AskQuestion\" href=\"javascript://\" title=\"Poser une question\">poser une question<\/a>.<\/div><\/div>"},
initializers={"BVQASourceID":[{"init":"bindJsLinks","data":{},"module":"requester"}],"BVQASummaryBoxSourceID":[{"init":"bindJsLinks","data":{},"module":"requester"}]},
widgets={};
widgets["content"]={"sourceId":"BVQASourceID","handledContentTypes":["Question","Answer"],"containerId":"BVQAContainer"};
widgets["summary"]={"sourceId":"BVQASummaryBoxSourceID","containerId":"BVQASummaryContainer"};
var injectionData={
apiConfig:apiConfig,
bvstateInfo:"p/1485323",
canonicalTags:false,
containerInitializer:false,
cookiePath:"/",
crossDomainUrl:"http://conrad.ugc.bazaarvoice.com/answers/6001-fr_fr/crossdomain.htm?format=embedded",
embeddedUrl:url,
globalInitializers:[{"module":"browserVersion","init":"initialize","data":{"useBodyTag":false,"containerId":"BVQAContainer"}},{"module":"browserVersion","init":"initialize","data":{"useBodyTag":false,"containerId":"BVQASummaryContainer"}},{"module":"dropdown","init":"addSelectHandlers","data":{"dropdownId":"BVQASortListID"}},{"module":"qa/contentFocusingSupportQA","init":"postInjection","data":{"application":"QA","defaultContentContainerId":"BVQAContainer","displayCode":"6001-fr_fr","tabSwitcher":"bvShowTabInternal","source":"readLink"}}],
gotoCookieRegexp:/^https?:\/\/[^/?#]+(\/[^?#]*)\//,
inFrameSubmissionEnabled:false,
pageIdPrefix:"BVQA",
pageTrackers:[],
postInjectionFunction:function(Inject){
if (window.$bv.isFunction(window.bvClosePopups)) {
window.$bv('.BVQAQuestionHeader').click(window.bvClosePopups);
}
if (window.bvAppendSubmission) {
window.bvAppendSubmission.showContent('QA');
}
},
replaceDisplayTokens:true,
replacementsPrefix:"BVQA",
replaceSessionParameters:false,
setWindowTitle:false,
soiContainerID:"BVQAContentValidationID_1485323",
soiContentIDs:[],
sviParameterName:"bvqap",
sviRedirectBaseUrl:"http://conrad.ugc.bazaarvoice.com/answers/6001-fr_fr/",
webAnalyticsConfig:{"customTrackedObjectsSelector":"","jsonData":{"bvDisplayCode":"6001-fr_fr","autoTagAnalyticsConfiguration":{"trackSubmissionPageLoads":true,"trackFormActions":false,"autoTagAnalyticsVersion":"latest","vendors":[{"vendorName":"magpie","anonymous":false,"brandDomain":"false","defaultClassesOnly":false}],"productTracking":{"tracking":true,"initialProductDisplay":false}},"productId":"1485323","eType":"Read","subjectType":"Product","bvAnalyticsVersion":"latest","rootCategoryId":"SHOP_B2C_TAB_COMPONENTS","analyticsWhitespaceTrackingEnabled":false,"bvProduct":"AskAndAnswer","attributes":{"numQuestions":0,"numAnswers":0,"good":true},"ciTrackingEnabled":false,"bvClientName":"conrad-fr","brand":"IDUINO","leafCategoryId":"0231310","bvExtension":{}},"customizersName":"BVQAAnalyticsCustomizers","SIWZeroDeployEnabled":false,"conversionTracking":{"conversionTrackingElementSelector":null,"conversionTrackingMetadataSelector":null,"conversionTrackingParseRegexp":null,"conversionTrackingName":"AddToCart"},"maxTrackingTagTraversalDepth":3,"customContainersFnName":"BVQAAnalyticsCustomContainers","customTrackedObjects":""},
widgetInitializers:initializers,
widgetLimit:1,
widgetMaterials:materials,
widgetMetadata:widgets,
windowTitle:null};
Injection.newInstance().apiInjection(injectionData);
});
});