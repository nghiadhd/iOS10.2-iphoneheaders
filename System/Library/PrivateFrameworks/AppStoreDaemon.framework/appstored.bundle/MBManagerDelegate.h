/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MBManagerDelegate
@optional
-(void)manager:(id)arg1 didSetBackupEnabled:(BOOL)arg2;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3;
-(void)managerDidFinishBackup:(id)arg1;
-(void)managerDidFinishScan:(id)arg1;
-(void)manager:(id)arg1 didScanBundleWithID:(id)arg2 bytesUsed:(unsigned long long)arg3;
-(void)manager:(id)arg1 didScanDomainWithName:(id)arg2 forBundleID:(id)arg3 bytesUsed:(unsigned long long)arg4;
-(void)manager:(id)arg1 didScanFiles:(id)arg2 forDomainWithName:(id)arg3 bundleID:(id)arg4;
-(void)managerDidFinishRestore:(id)arg1;
-(void)manager:(id)arg1 didFinishRestoreForPath:(id)arg2;
-(void)managerDidCancelRestore:(id)arg1;
-(void)managerDidFinishVerification:(id)arg1;
-(void)manager:(id)arg1 didFailBackupWithError:(id)arg2;
-(void)manager:(id)arg1 didFailScanWithError:(id)arg2;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2;
-(void)manager:(id)arg1 didFailRestoreForPath:(id)arg2 withError:(id)arg3;
-(void)manager:(id)arg1 didFailVerificationWithError:(id)arg2;
-(void)managerDidLoseConnectionToService:(id)arg1;

@end

