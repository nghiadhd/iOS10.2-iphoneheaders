/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSArray, NSString;

@interface IDSP2PDelegate : NSObject <IDSServiceDelegate> {

	IDSService* fIDSService;
	queue* fQueue;
	block<void ()(const __CFString *, const __CFString *, const void *)>* fOnMsgCallback;
	block<void ()(std::__1::shared_ptr<IDSP2PSync::DeviceDescr>)>* fDeviceTrackingCallback;
	block<void ()(const __CFString *, const __CFString *, const void *, const __CFURL *, bool &)>* fOnUrlCallback;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > fName;
	shared_ptr<Registry>* fRegistry;
	shared_ptr<IDSP2PSync::DeviceDescr>* fLastReportedDevice;
	map<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)>, (anonymous namespace)::compareCFStringsSharedRef, std::__1::allocator<std::__1::pair<const ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> > > >* fAcks;
	NSArray* _fConnectedDevices;

}

@property (retain) NSArray * fConnectedDevices;                     //@synthesize fConnectedDevices=_fConnectedDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)fConnectedDevices;
-(BOOL)validateDevice:(id)arg1 ;
-(void)setFConnectedDevices:(NSArray *)arg1 ;
-(void)watchDidPair:(id)arg1 ;
-(id)validateDevices:(id)arg1 ;
-(void)invokeDeviceChangedCallback:(id)arg1 ;
-(id)compileDestinationSet:(id)arg1 ;
-(BOOL)updateDeviceSet:(id)arg1 withMessage:(id)arg2 withOptions:(id)arg3 withIdentifier:(id*)arg4 ;
-(BOOL)updateDeviceSet:(id)arg1 withURL:(id)arg2 withMessage:(id)arg3 withOptions:(id)arg4 withIdentifier:(id*)arg5 ;
-(void)invokeAckCallbackFor:(id)arg1 withSuccess:(BOOL)arg2 withError:(id)arg3 ;
-(id)uniqueDeviceIdFromIncomingDevId:(id)arg1 ;
-(void)invokeOnMessageCallbackWithDict:(id)arg1 andName:(id)arg2 andId:(id)arg3 ;
-(void)invokeOnFileCallbackWithURL:(id)arg1 withMessage:(id)arg2 andName:(id)arg3 andId:(id)arg4 ;
-(id)initWithServiceName:(id)arg1 logPrefix:(const char*)arg2 onDeviceState:(/*^block*/id)arg3 onMessage:(/*^block*/id)arg4 onURL:(/*^block*/id)arg5 queue:(dispatch_queue_sRef)arg6 registry:(shared_ptr<Registry>*)arg7 ;
-(shared_ptr<IDSP2PSync::DeviceDescr>*)getDeviceInProximity;
-(CFSharedRef<const __CFString>*)sendMessage:(id)arg1 withName:(id)arg2 withOptions:(id)arg3 withAck:(/*^block*/id)arg4 toDevice:(id)arg5 ;
-(CFSharedRef<const __CFString>*)sendFile:(id)arg1 withMessage:(id)arg2 withName:(id)arg3 withOptions:(id)arg4 withAck:(/*^block*/id)arg5 toDevice:(id)arg6 ;
-(void)dealloc;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
@end

