/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <ATFoundation/ATDownloadProgressListener.h>
#import <ATFoundation/ATAssetLinkControllerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, NSMutableSet, NSString;

@interface ATDownloadProgressManager : NSObject <NSXPCListenerDelegate, ATDownloadProgressListener, ATAssetLinkControllerObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableSet* _downloadObservers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)stop;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)getDownloadProgressForItemIdentifier:(id)arg1 withReplyBlock:(/*^block*/id)arg2 ;
-(void)getAllDownloadsWithReplyBlock:(/*^block*/id)arg1 ;
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didUpdateAssetState:(id)arg2 ;
@end

