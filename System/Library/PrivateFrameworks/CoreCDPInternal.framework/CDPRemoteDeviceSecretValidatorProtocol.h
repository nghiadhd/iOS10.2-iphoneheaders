/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPRemoteDeviceSecretValidatorProtocol
@property (assign,nonatomic) unsigned long long supportedEscapeOfferMask; 
@required
-(void)setSupportedEscapeOfferMask:(unsigned long long)arg1;
-(unsigned long long)supportedEscapeOfferMask;
-(void)resetAccountCDPState;
-(void)cancelValidationWithError:(id)arg1;
-(void)cancelApproveFromAnotherDevice;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1;
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;

@end

