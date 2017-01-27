/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray, NSLock, NSError, NSString;

@interface GKJoinGroup : NSObject {

	NSObject*<OS_dispatch_queue> _targetQueue;
	NSMutableArray* _leftNotifiers;
	NSMutableArray* _rightNotifiers;
	NSMutableArray* _leftResults;
	NSMutableArray* _rightResults;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	NSLock* _lock;
	NSError* _error;
	NSString* _name;

}

@property (retain) NSLock * lock;                                                     //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> targetQueue;                //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * leftNotifiers;                          //@synthesize leftNotifiers=_leftNotifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * rightNotifiers;                         //@synthesize rightNotifiers=_rightNotifiers - In the implementation block
@property (retain) NSMutableArray * leftResults;                                      //@synthesize leftResults=_leftResults - In the implementation block
@property (retain) NSMutableArray * rightResults;                                     //@synthesize rightResults=_rightResults - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
@property (retain) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * name;                                         //@synthesize name=_name - In the implementation block
+(id)joinGroup;
+(id)joinGroupWithName:(id)arg1 ;
+(id)joinGroupForTargetQueue:(id)arg1 ;
+(id)joinGroupWithName:(id)arg1 taregetQueue:(id)arg2 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSLock *)lock;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)join:(/*^block*/id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSMutableArray *)leftNotifiers;
-(NSMutableArray *)rightNotifiers;
-(void)performLeftOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)performRightOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_join:(/*^block*/id)arg1 ;
-(void)aggregateJoin:(/*^block*/id)arg1 ;
-(void)aggregateJoinLeft:(/*^block*/id)arg1 ;
-(void)aggregateJoinRight:(/*^block*/id)arg1 ;
-(void)setLeftResults:(NSMutableArray *)arg1 ;
-(void)setRightResults:(NSMutableArray *)arg1 ;
-(void)performLeft:(/*^block*/id)arg1 ;
-(void)performRight:(/*^block*/id)arg1 ;
-(void)joinLeft:(/*^block*/id)arg1 ;
-(void)joinRight:(/*^block*/id)arg1 ;
-(void)setLeftNotifiers:(NSMutableArray *)arg1 ;
-(void)setRightNotifiers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)leftResults;
-(NSMutableArray *)rightResults;
-(id)initWithName:(id)arg1 targetQueue:(id)arg2 ;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(void)applyUpdates;
-(void)setLock:(NSLock *)arg1 ;
-(void)wait;
@end

