/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOfflineCacheOperation.h>
#import <libobjc.A.dylib/MFDAOfflineCacheOperation.h>

@class NSString;

@interface _MFDADeferredSelectMailboxOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {

	NSString* _folderID;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2 ;
-(id)initWithMailbox:(id)arg1 ;
@end

