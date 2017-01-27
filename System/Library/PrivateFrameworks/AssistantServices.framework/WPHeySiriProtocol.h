/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPHeySiriProtocol <NSObject>
@optional
-(void)heySiriStartedAdvertising:(id)arg1;
-(void)heySiriAdvertisingPending:(id)arg1;
-(void)heySiriStoppedAdvertising:(id)arg1;
-(void)heySiri:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
-(void)heySiriStartedScanning:(id)arg1;
-(void)heySiriStoppedScanning:(id)arg1;
-(void)heySiri:(id)arg1 failedToStartScanningWithError:(id)arg2;

@required
-(void)heySiriDidUpdateState:(id)arg1;
-(void)heySiri:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;

@end

