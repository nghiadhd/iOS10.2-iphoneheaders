/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <WebUI/WBUWebProcessPlugInAutoFillPageController.h>
#import <libobjc.A.dylib/RequestDesktopSiteWebProcessPlugInListener.h>
#import <libobjc.A.dylib/SFReaderWebProcessControllerProtocol.h>

@protocol SFReaderEventsListener, RequestDesktopSiteUIProcessListener;
@class _WKRemoteObjectInterface, _SFReaderWebProcessPlugInPageController, NSDictionary, _SFWebProcessPlugInPageSafeBrowsingController, SFWebProcessPlugInPageExtensionController, NSMutableSet, NSString;

@interface _SFWebProcessPlugInReaderEnabledPageController : WBUWebProcessPlugInAutoFillPageController <RequestDesktopSiteWebProcessPlugInListener, SFReaderWebProcessControllerProtocol> {

	unique_ptr<SafariServices::ReaderAvailabilityController, std::__1::default_delete<SafariServices::ReaderAvailabilityController> >* _readerAvailabilityController;
	_WKRemoteObjectInterface* _availabilityControllerInterface;
	id<SFReaderEventsListener> _readerActivityListenerProxy;
	_SFReaderWebProcessPlugInPageController* _readerPageController;
	long long _cachedReaderTopScrollOffset;
	NSDictionary* _initialScrollPositionAsDictionary;
	_SFWebProcessPlugInPageSafeBrowsingController* _safeBrowsingController;
	SFWebProcessPlugInPageExtensionController* _extensionController;
	id<RequestDesktopSiteUIProcessListener> _requestDesktopSiteUIProcessListener;
	_WKRemoteObjectInterface* _requestDesktopSiteWebProcessPlugInListenerInterface;
	BOOL _viewingReadingListArchive;
	NSDictionary* _initalArticleScrollPositionAsDictionary;
	NSDictionary* _initialReaderConfiguration;
	double _readerUserVisibleWidth;
	NSMutableSet* _domainsNeedingDesktopUserAgent;

}

@property (nonatomic,retain) _SFReaderWebProcessPlugInPageController * readerPageController;                   //@synthesize readerPageController=_readerPageController - In the implementation block
@property (nonatomic,copy) NSDictionary * initalArticleScrollPositionAsDictionary;                             //@synthesize initalArticleScrollPositionAsDictionary=_initalArticleScrollPositionAsDictionary - In the implementation block
@property (assign,nonatomic) long long cachedReaderTopScrollOffset;                                            //@synthesize cachedReaderTopScrollOffset=_cachedReaderTopScrollOffset - In the implementation block
@property (nonatomic,readonly) NSDictionary * initialReaderConfiguration;                                      //@synthesize initialReaderConfiguration=_initialReaderConfiguration - In the implementation block
@property (nonatomic,readonly) double readerUserVisibleWidth;                                                  //@synthesize readerUserVisibleWidth=_readerUserVisibleWidth - In the implementation block
@property (getter=isViewingReadingListArchive,nonatomic,readonly) BOOL viewingReadingListArchive;              //@synthesize viewingReadingListArchive=_viewingReadingListArchive - In the implementation block
@property (nonatomic,readonly) NSMutableSet * domainsNeedingDesktopUserAgent;                                  //@synthesize domainsNeedingDesktopUserAgent=_domainsNeedingDesktopUserAgent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(void)willDestroyBrowserContextController:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2 ;
-(void)setReaderPageController:(_SFReaderWebProcessPlugInPageController *)arg1 ;
-(OpaqueJSValueRef)originalArticleFinder;
-(void)setReaderFont:(id)arg1 ;
-(void)setReaderTheme:(id)arg1 ;
-(void)increaseReaderTextSize;
-(void)decreaseReaderTextSize;
-(void)didDetermineReaderAvailability:(BOOL)arg1 ;
-(void)didSetReaderConfiguration:(id)arg1 ;
-(void)prepareToTransitionToReader;
-(void)didCreateReaderPageContextHandle:(id)arg1 ;
-(void)loadNewReaderArticle;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 userVisibleWidth:(double)arg3 isViewingArchive:(BOOL)arg4 ;
-(void)setInitalArticleScrollPositionAsDictionary:(NSDictionary *)arg1 ;
-(void)collectReadingListItemInfoWithBookmarkID:(id)arg1 ;
-(void)collectReaderContentForMail;
-(void)setReaderUserVisibleWidth:(double)arg1 ;
-(void)prepareReaderContentForPrinting;
-(NSDictionary *)initialReaderConfiguration;
-(BOOL)isViewingReadingListArchive;
-(void)readerContentIsReadyForDisplay:(id)arg1 ;
-(NSDictionary *)initalArticleScrollPositionAsDictionary;
-(long long)cachedReaderTopScrollOffset;
-(void)setCachedReaderTopScrollOffset:(long long)arg1 ;
-(double)readerUserVisibleWidth;
-(void)_setUpReaderControllerInterface;
-(void)markURLAsNeedingDesktopUserAgent:(id)arg1 ;
-(void)_clearReaderControllerInterface;
-(void)_deferPageLoadingUntilSafeBrowsingCheckCompleteForFrame:(id)arg1 ;
-(void)_detectReaderAvailabilityAfterSameDocumentNavigation;
-(void)_detectAvailabilityAfterDelay:(double)arg1 loadEvent:(int)arg2 ;
-(_SFReaderWebProcessPlugInPageController *)readerPageController;
-(NSMutableSet *)domainsNeedingDesktopUserAgent;
@end

