/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtrasPlaybackDelegate.h>

@protocol VideosExtrasContextDelegate;
@class UIViewController, MPPlaybackContext, VideosExtrasRootViewController, MPMediaItem, NSURL, NSString;

@interface VideosExtrasContext : NSObject <VideosExtrasPlaybackDelegate> {

	id<VideosExtrasContextDelegate> _delegate;
	UIViewController* _featurePlaybackViewController;
	MPPlaybackContext* _featurePlaybackContext;
	VideosExtrasRootViewController* _extrasRootViewController;
	MPMediaItem* _mediaItem;
	NSURL* _javascriptURL;
	NSString* _buyParameters;
	long long _storeID;

}

@property (assign,nonatomic,__weak) id<VideosExtrasContextDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * featurePlaybackViewController;                         //@synthesize featurePlaybackViewController=_featurePlaybackViewController - In the implementation block
@property (nonatomic,retain) MPPlaybackContext * featurePlaybackContext;                               //@synthesize featurePlaybackContext=_featurePlaybackContext - In the implementation block
@property (nonatomic,readonly) VideosExtrasRootViewController * extrasRootViewController;              //@synthesize extrasRootViewController=_extrasRootViewController - In the implementation block
@property (nonatomic,readonly) MPMediaItem * mediaItem;                                                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy,readonly) NSURL * javascriptURL;                                             //@synthesize javascriptURL=_javascriptURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * buyParameters;                                          //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,readonly) long long storeID;                                                      //@synthesize storeID=_storeID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)extrasRootViewControllerClass;
+(id)overriddenJavascriptURL;
+(void)overrideJavascriptURL:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<VideosExtrasContextDelegate>)arg1 ;
-(id<VideosExtrasContextDelegate>)delegate;
-(id)initWithMediaItem:(id)arg1 ;
-(NSString *)buyParameters;
-(long long)storeID;
-(void)failWithError:(id)arg1 ;
-(MPMediaItem *)mediaItem;
-(VideosExtrasRootViewController *)extrasRootViewController;
-(void)extrasRequestReloadWithContext:(id)arg1 ;
-(void)extrasRequestsPlaybackStop;
-(void)_configureForMediaItem:(id)arg1 ;
-(void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(BOOL)arg2 ;
-(MPPlaybackContext *)featurePlaybackContext;
-(id)initWithApplicationJavascriptURL:(id)arg1 storeID:(long long)arg2 buyParameters:(id)arg3 ;
-(UIViewController *)featurePlaybackViewController;
-(void)setFeaturePlaybackViewController:(UIViewController *)arg1 ;
-(void)setFeaturePlaybackContext:(MPPlaybackContext *)arg1 ;
-(NSURL *)javascriptURL;
@end

