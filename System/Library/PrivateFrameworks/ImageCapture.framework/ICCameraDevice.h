/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ICDevice.h>

@class NSArray, NSString;

@interface ICCameraDevice : ICDevice {

	void* _cameraProperties;

}

@property (readonly) NSArray * contents; 
@property (copy) NSString * volumePath; 
@property (getter=isEjectable) BOOL ejectable; 
@property (assign) BOOL beingEjected; 
@property (getter=isLocked) BOOL locked; 
@property (assign) BOOL allowsSyncingClock; 
@property (assign) unsigned long long estimatedNumberOfDownloadableItems; 
@property (assign) unsigned long long contentCatalogPercentCompleted; 
@property (readonly) BOOL batteryLevelAvailable; 
@property (readonly) unsigned long long batteryLevel; 
@property (readonly) double timeOffset; 
@property (assign) unsigned long long numberOfDownloadableItems; 
@property (getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice; 
@property (getter=isApplePTPCapable) BOOL applePTPCapable; 
@property (readonly) NSArray * notifyArray; 
@property (readonly) NSArray * mediaFiles; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isLocked;
-(NSArray *)contents;
-(double)timeOffset;
-(void)setLocked:(BOOL)arg1 ;
-(unsigned long long)batteryLevel;
-(void)requestCloseSession;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(void)setVolumePath:(NSString *)arg1 ;
-(void)clearNotifyArray;
-(NSString *)volumePath;
-(void)setEjectable:(BOOL)arg1 ;
-(BOOL)beingEjected;
-(void)setBeingEjected:(BOOL)arg1 ;
-(NSArray *)notifyArray;
-(BOOL)allowsSyncingClock;
-(void)setAllowsSyncingClock:(BOOL)arg1 ;
-(void)setContentCatalogPercentCompleted:(unsigned long long)arg1 ;
-(BOOL)batteryLevelAvailable;
-(void)setEstimatedNumberOfDownloadableItems:(unsigned long long)arg1 ;
-(unsigned long long)numberOfDownloadableItems;
-(void)setNumberOfDownloadableItems:(unsigned long long)arg1 ;
-(double)downloadCancelTimestamp;
-(id)generalQ;
-(id)deviceQSemaphore;
-(void)setAccessRestrictedAppleDevice:(BOOL)arg1 ;
-(BOOL)applePTPCapable;
-(void)setApplePTPCapable:(BOOL)arg1 ;
-(id)requestedFiles;
-(BOOL)isAccessRestrictedAppleDevice;
-(BOOL)isApplePTPCapable;
-(void)receivedDeviceCommandCompletion;
-(void)updateFiles:(id)arg1 withThumbnails:(BOOL)arg2 withMetadata:(BOOL)arg3 ;
-(void)decrementNumberOfDownloadableItems;
-(void)decrementEstimatedNumberOfDownloadableItems;
-(void)incrementEstimatedNumberOfDownloadableItems;
-(void)incrementNumberOfDownloadableItems;
-(void)addFolder:(id)arg1 ;
-(BOOL)isEjectable;
-(void)addObjectToNotifyArray:(id)arg1 ;
-(void)notifyDelegateOfAddedItem:(id)arg1 ;
-(void)notifyDelegateOfAddedItems:(id)arg1 ;
-(void)pendNotifyingDelegateOfAddedItem:(id)arg1 ;
-(id)filesOfType:(id)arg1 ;
-(void)requestSyncClock;
-(void)removeFolder:(id)arg1 ;
-(void)requestMaxThumbnails;
-(void)requestMaxMetadata;
-(void)requestMaxMetadataAndThumbnail;
-(void)requestThumbOfFiles:(id)arg1 withPreferredResolution:(unsigned long long)arg2 ;
-(void)requestMetadataOfFiles:(id)arg1 ;
-(void)requestThumbWithMetadataOfFiles:(id)arg1 withPreferredResolution:(unsigned long long)arg2 ;
-(void)addToThumbnailFetchQ:(id)arg1 ;
-(void)addToMetadataFetchQ:(id)arg1 ;
-(void)requestEject;
-(unsigned long long)estimatedNumberOfDownloadableItems;
-(unsigned long long)contentCatalogPercentCompleted;
-(void)requestOpenSession;
-(void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)requestDeleteFiles:(id)arg1 ;
-(NSArray *)mediaFiles;
-(void)cancelDownload;
-(void)finalize;
@end

