/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SymptomDiagnosticManagement.framework/SymptomDiagnosticManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DEExtensionManager, NSMutableArray;

@interface DiagnosticExtensionCaller : NSObject {

	DEExtensionManager* _manager;
	NSMutableArray* _liveDEs;

}
+(id)sharedInstance;
+(BOOL)getAttachmentsFrom:(id)arg1 forBundleID:(id)arg2 withParameters:(id)arg3 queue:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)init;
-(void)dealloc;
-(id)_getDEExtensionWithIdentifier:(id)arg1 ;
-(BOOL)_getAttachmentsFrom:(id)arg1 forBundleID:(id)arg2 withParameters:(id)arg3 queue:(id)arg4 reply:(/*^block*/id)arg5 ;
@end

