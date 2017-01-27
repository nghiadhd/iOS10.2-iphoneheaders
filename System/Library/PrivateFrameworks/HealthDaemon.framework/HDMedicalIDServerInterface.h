/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDMedicalIDServerInterface <NSObject>
@required
-(void)remote_medicalIDDataCreateIfNecessary:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)remote_updateMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_deleteMedicalIDDataWithCompletion:(/*^block*/id)arg1;
-(void)remote_medicalIDEmergencyContactsWithCompletion:(/*^block*/id)arg1;

@end

