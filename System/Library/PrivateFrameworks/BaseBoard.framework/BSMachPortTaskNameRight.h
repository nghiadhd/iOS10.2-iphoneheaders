/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSMachPortSendRight.h>

@class BSAuditToken;

@interface BSMachPortTaskNameRight : BSMachPortSendRight {

	int _pid;
	BSAuditToken* _auditToken;

}

@property (nonatomic,readonly) int pid;                                       //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain,readonly) BSAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
+(id)taskNameForPID:(int)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithPID:(int)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BSAuditToken *)auditToken;
-(int)pid;
@end

