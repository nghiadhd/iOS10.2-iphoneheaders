/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RequestDesktopSiteUIProcessListener.h>
#import <libobjc.A.dylib/SFContentBlockerManagerObserver.h>

@protocol RequestDesktopSiteWebProcessPlugInListener;
@class _WKRemoteObjectInterface, NSMutableSet, WKWebView, WBUInjectedJavaScriptController, NSString;

@interface _SFReloadOptionsController : NSObject <RequestDesktopSiteUIProcessListener, SFContentBlockerManagerObserver> {

	_WKRemoteObjectInterface* _requestDesktopSiteUIProcessPlugInListenerInterface;
	id<RequestDesktopSiteWebProcessPlugInListener> _requestDesktopSiteWebProcessPlugInListener;
	NSMutableSet* _domainsNeedingDesktopUserAgent;
	WKWebView* _webView;
	BOOL _hasEnabledContentBlockers;
	WBUInjectedJavaScriptController* _activityJSController;

}

@property (nonatomic,readonly) WBUInjectedJavaScriptController * activityJSController;              //@synthesize activityJSController=_activityJSController - In the implementation block
@property (nonatomic,readonly) BOOL loadedUsingDesktopUserAgent; 
@property (assign,nonatomic) BOOL hasEnabledContentBlockers;                                        //@synthesize hasEnabledContentBlockers=_hasEnabledContentBlockers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)contentBlockerManagerExtensionListDidChange:(id)arg1 ;
-(void)didMarkURLAsNeedingDesktopUserAgent:(id)arg1 ;
-(WBUInjectedJavaScriptController *)activityJSController;
-(void)requestDesktopSiteWithURL:(id)arg1 ;
-(void)requestDesktopSite;
-(id)initWithWebView:(id)arg1 activityJSController:(id)arg2 ;
-(BOOL)loadedUsingDesktopUserAgent;
-(BOOL)hasEnabledContentBlockers;
-(void)_checkForContentBlockers;
-(void)setHasEnabledContentBlockers:(BOOL)arg1 ;
@end

