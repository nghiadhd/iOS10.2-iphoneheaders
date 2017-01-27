/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class DeviceManager, NSString;

@interface ICDevice : NSObject {

	void* _deviceProperties;

}

@property (assign) DeviceManager * deviceManager; 
@property (copy) NSString * name; 
@property (copy) NSString * productKind; 
@property (copy) NSString * transportType; 
@property (copy) NSString * UUIDString; 
@property (assign) BOOL hasOpenSession; 
@property (assign) BOOL autoOpenSession; 
@property (assign) BOOL openSessionPending; 
@property (assign) BOOL closeSessionPending; 
@property (assign) int usbLocationID; 
@property (assign) int usbProductID; 
@property (assign) int usbVendorID; 
@property (assign) id<ICDeviceDelegate> delegate; 
@property (readonly) CGImageRef icon; 
-(BOOL)isCameraDevice;
-(id)init;
-(void)setDelegate:(id<ICDeviceDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<ICDeviceDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)UUIDString;
-(id)valueForUndefinedKey:(id)arg1 ;
-(CGImageRef)icon;
-(NSString *)transportType;
-(void)setTransportType:(NSString *)arg1 ;
-(void)setProductKind:(NSString *)arg1 ;
-(int)usbLocationID;
-(void)setUsbLocationID:(int)arg1 ;
-(int)usbProductID;
-(void)setUsbProductID:(int)arg1 ;
-(void)setUsbVendorID:(int)arg1 ;
-(BOOL)hasOpenSession;
-(void)setHasOpenSession:(BOOL)arg1 ;
-(BOOL)autoOpenSession;
-(void)setAutoOpenSession:(BOOL)arg1 ;
-(BOOL)openSessionPending;
-(void)setOpenSessionPending:(BOOL)arg1 ;
-(BOOL)closeSessionPending;
-(void)setCloseSessionPending:(BOOL)arg1 ;
-(void)requestCloseSession;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(int)usbVendorID;
-(NSString *)productKind;
-(void)requestOpenSession;
-(void)setUUIDString:(NSString *)arg1 ;
-(DeviceManager *)deviceManager;
-(void)setDeviceManager:(DeviceManager *)arg1 ;
-(void)finalize;
@end

