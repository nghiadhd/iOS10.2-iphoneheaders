/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKBXPCClient <NSObject>
@required
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
-(void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
-(void)openFileWithOpenInfo:(id)arg1 reply:(/*^block*/id)arg2;

@end

