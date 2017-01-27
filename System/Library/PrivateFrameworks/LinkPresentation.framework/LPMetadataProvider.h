/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/LPMetadataProviderSpecializationDelegate.h>

@class WKWebView, NSURL, LPLinkMetadata, NSMutableArray, LPMetadataProviderSpecialization, LPStatisticsTimingToken, NSString;

@interface LPMetadataProvider : NSObject <WKNavigationDelegate, LPMetadataProviderSpecializationDelegate> {

	unsigned _loggingID;
	WKWebView* _webView;
	NSURL* _URL;
	LPLinkMetadata* _metadata;
	BOOL _complete;
	BOOL _fetchingFromExistingWebView;
	NSMutableArray* _pendingResolvers;
	long long _specializationState;
	LPMetadataProviderSpecialization* _specializedMetadataProvider;
	LPStatisticsTimingToken* _fetchTimingToken;
	BOOL _useSpecializedProviders;
	BOOL _fetchSubresources;
	BOOL _cancelled;
	double _timeout;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign) BOOL cancelled;                                      //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL useSpecializedProviders;              //@synthesize useSpecializedProviders=_useSpecializedProviders - In the implementation block
@property (assign,nonatomic) BOOL fetchSubresources;                    //@synthesize fetchSubresources=_fetchSubresources - In the implementation block
@property (assign,nonatomic) double timeout;                            //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestMetadataForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_copyDefaultWebViewConfiguration;
+(id)_defaultUserAgent;
+(id)_incompleteMetadataRequests;
+(id)_metadataExtractorScript;
+(id)_callbackQueue;
+(id)requestMetadataForWebView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setFetchSubresources:(BOOL)arg1 ;
-(void)startFetchingMetadataForWebView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
-(void)metadataProviderSpecialization:(id)arg1 didFailWithError:(id)arg2 ;
-(void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2 ;
-(void)startFetchingMetadataForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_startWatchdogTimer;
-(void)_fetchMetadataFromWebView;
-(void)_fetchSubresources;
-(void)_cancelDueToTimeout;
-(void)_completedWithMainResourceImageData:(id)arg1 MIMEType:(id)arg2 URL:(id)arg3 ;
-(void)_fetchedMetadata:(id)arg1 ;
-(void)_redistinguishImagesAndIcons;
-(void)_completedWithResolvedMetadata:(id)arg1 error:(id)arg2 ;
-(void)_fetchResolvableItems:(id)arg1 group:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchFirstSuccessfulItem:(id)arg1 group:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchNextSuccessfulItem:(id)arg1 currentIndex:(unsigned)arg2 group:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startFetchingSubresourcesForPartialMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)useSpecializedProviders;
-(void)setUseSpecializedProviders:(BOOL)arg1 ;
-(BOOL)fetchSubresources;
@end

