/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, UACornerActionManager, NSString;

@interface UACornerActionManagerHandler : NSObject {

	BOOL _suspended;
	BOOL _terminated;
	NSUUID* _uuid;
	UACornerActionManager* _manager;
	NSString* _name;
	long long _priority;

}

@property (retain,readonly) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (retain,readonly) UACornerActionManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (readonly) long long priority;                                  //@synthesize priority=_priority - In the implementation block
@property (readonly) BOOL active; 
@property (assign) BOOL suspended; 
@property (readonly) BOOL terminated;                                     //@synthesize terminated=_terminated - In the implementation block
-(id)initWithManager:(id)arg1 name:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)suspend;
-(long long)priority;
-(BOOL)active;
-(BOOL)resume;
-(NSUUID *)uuid;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)terminated;
-(UACornerActionManager *)manager;
-(id)statusString;
-(BOOL)terminate;
-(BOOL)suspended;
@end

