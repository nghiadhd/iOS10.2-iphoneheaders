/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUnlockClientProtocol <NSObject>
@required
-(void)keyDeviceLocked:(id)arg1;
-(void)enabledDevice:(id)arg1;
-(void)failedToEnableDevice:(id)arg1 error:(id)arg2;
-(void)beganAttemptWithDevice:(id)arg1;
-(void)completedUnlockWithDevice:(id)arg1;
-(void)failedUnlockWithError:(id)arg1;

@end

