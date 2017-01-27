/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SLWeiboClientSessionProtocol.h>
#import <libobjc.A.dylib/SLMicroBlogSheetDelegate.h>

@protocol SLWeiboRemoteSessionProtocol, OS_dispatch_queue, OS_dispatch_semaphore;
@class SLRemoteSessionProxy, NSCache, NSObject, NSBundle, CLInUseAssertion, NSString;

@interface SLWeiboSession : NSObject <SLWeiboClientSessionProtocol, SLMicroBlogSheetDelegate> {

	SLRemoteSessionProxy*<SLWeiboRemoteSessionProtocol> _remoteSession;
	NSCache* _profileImageCache;
	NSObject*<OS_dispatch_queue> _remoteSessionQueue;
	NSObject*<OS_dispatch_semaphore> _remoteSessionQueueSemaphore;
	NSBundle* _serviceBundle;
	CLInUseAssertion* _locationInUseAssertion;
	/*^block*/id _connectionResetBlock;
	/*^block*/id _locationInformationChangedBlock;

}

@property (nonatomic,copy) id connectionResetBlock;                         //@synthesize connectionResetBlock=_connectionResetBlock - In the implementation block
@property (nonatomic,copy) id locationInformationChangedBlock;              //@synthesize locationInformationChangedBlock=_locationInformationChangedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteInterface;
-(id)init;
-(void)acceptLocationUpdate:(id)arg1 ;
-(id)_createOrGetRemoteSession;
-(void)setConnectionResetBlock:(id)arg1 ;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(void)fetchSessionInfo:(/*^block*/id)arg1 ;
-(void)ensureUserRecordStore;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCurrentUrlLimits:(/*^block*/id)arg1 ;
-(void)fetchCurrentImageLimits:(/*^block*/id)arg1 ;
-(void)setGeotagStatus:(int)arg1 ;
-(void)fetchGeotagStatus:(/*^block*/id)arg1 ;
-(void)sendStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPermaLinkFromLastStatusUpdate:(/*^block*/id)arg1 ;
-(void)beginPotentialLocationUse;
-(void)endPotentialLocationUse;
-(void)showSettingsIfNeeded;
-(id)serviceAccountTypeIdentifier;
-(void)deferExpensiveOperations;
-(void)stopDeferringExpensiveOperations;
-(long long)characterCountForText:(id)arg1 shortenedURLCost:(long long)arg2 ;
-(BOOL)countMediaAttachmentsTowardCharacterCount;
-(id)cachedProfileImageDataForScreenName:(id)arg1 ;
-(id)locationInformationChangedBlock;
-(void)setLocationInformationChangedBlock:(id)arg1 ;
-(void)tearDownConnectionToRemoteSession;
-(void)setClientInfo:(id)arg1 ;
-(void)setGeotagAccountSetting:(BOOL)arg1 ;
-(id)connectionResetBlock;
@end

