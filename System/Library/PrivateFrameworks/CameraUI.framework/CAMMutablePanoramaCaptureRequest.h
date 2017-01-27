/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMPanoramaCaptureRequest.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestPersistence.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestLocation.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestPower.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestOrigin.h>

@class NSString, NSURL, CLLocation;

@interface CAMMutablePanoramaCaptureRequest : CAMPanoramaCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower, CAMMutableCaptureRequestOrigin>

@property (assign,nonatomic,__weak) id<CAMPanoramaCaptureRequestDelegate> delegate; 
@property (assign,nonatomic) long long captureOrientation; 
@property (assign,nonatomic) long long captureDevice; 
@property (assign,nonatomic) long long captureMode; 
@property (assign,nonatomic) long long physicalButtonType; 
@property (assign,nonatomic) unsigned short sessionIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long persistenceOptions; 
@property (assign,nonatomic) unsigned long long deferredPersistenceOptions; 
@property (assign,nonatomic) long long temporaryPersistenceOptions; 
@property (nonatomic,copy) NSURL * localDestinationURL; 
@property (nonatomic,copy) NSString * persistenceUUID; 
@property (assign,nonatomic) BOOL shouldExtractDiagnosticsFromMetadata; 
@property (assign,nonatomic) BOOL shouldPersistDiagnosticsToSidecar; 
@property (assign,nonatomic) BOOL shouldDelayRemotePersistence; 
@property (nonatomic,retain) CLLocation * location; 
@property (assign,nonatomic) unsigned assertionIdentifier; 
@property (assign,nonatomic) long long origin; 
-(void)setDelegate:(id<CAMPanoramaCaptureRequestDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOrigin:(long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setPersistenceOptions:(long long)arg1 ;
-(void)setDeferredPersistenceOptions:(unsigned long long)arg1 ;
-(void)setTemporaryPersistenceOptions:(long long)arg1 ;
-(void)setLocalDestinationURL:(NSURL *)arg1 ;
-(void)setPersistenceUUID:(NSString *)arg1 ;
-(void)setShouldExtractDiagnosticsFromMetadata:(BOOL)arg1 ;
-(void)setShouldPersistDiagnosticsToSidecar:(BOOL)arg1 ;
-(void)setShouldDelayRemotePersistence:(BOOL)arg1 ;
-(void)setAssertionIdentifier:(unsigned)arg1 ;
-(void)setCaptureOrientation:(long long)arg1 ;
-(void)setCaptureDevice:(long long)arg1 ;
-(void)setCaptureMode:(long long)arg1 ;
-(void)setPhysicalButtonType:(long long)arg1 ;
-(void)setSessionIdentifier:(unsigned short)arg1 ;
@end

