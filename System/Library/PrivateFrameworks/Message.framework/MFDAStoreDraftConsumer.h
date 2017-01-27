/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDASyncResponseConsumer.h>

@class NSString, MFError;

@interface MFDAStoreDraftConsumer : NSObject <MFDASyncResponseConsumer> {

	BOOL _success;
	NSString* _serverId;
	MFError* _error;

}

@property (nonatomic,readonly) NSString * serverId;              //@synthesize serverId=_serverId - In the implementation block
@property (nonatomic,readonly) MFError * error;                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL success;                     //@synthesize success=_success - In the implementation block
-(void)dealloc;
-(NSString *)serverId;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(MFError *)error;
-(BOOL)success;
@end

