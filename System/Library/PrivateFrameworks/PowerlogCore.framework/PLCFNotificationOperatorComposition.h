/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, PLOperator, NSObject;

@interface PLCFNotificationOperatorComposition : NSObject {

	BOOL _listeningForNotifications;
	BOOL _isStateRequired;
	int _stateToken;
	NSString* _notificationName;
	/*^block*/id _operatorBlock;
	PLOperator* _operator;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (__weak) PLOperator * operator;                               //@synthesize operator=_operator - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) BOOL isStateRequired;                                //@synthesize isStateRequired=_isStateRequired - In the implementation block
@property (assign) int stateToken;                                      //@synthesize stateToken=_stateToken - In the implementation block
@property (assign) BOOL listeningForNotifications;                      //@synthesize listeningForNotifications=_listeningForNotifications - In the implementation block
@property (retain) NSString * notificationName;                         //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,copy) id operatorBlock;                            //@synthesize operatorBlock=_operatorBlock - In the implementation block
-(void)dealloc;
-(void)setNotificationName:(NSString *)arg1 ;
-(PLOperator *)operator;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)operatorBlock;
-(void)setOperatorBlock:(id)arg1 ;
-(void)setOperator:(PLOperator *)arg1 ;
-(BOOL)listeningForNotifications;
-(void)setListeningForNotifications:(BOOL)arg1 ;
-(BOOL)isStateRequired;
-(void)setIsStateRequired:(BOOL)arg1 ;
-(int)stateToken;
-(void)setStateToken:(int)arg1 ;
-(id)initWithOperator:(id)arg1 forNotification:(id)arg2 requireState:(BOOL)arg3 withBlock:(/*^block*/id)arg4 ;
-(BOOL)listenForNotifications:(BOOL)arg1 ;
-(id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 requireState:(BOOL)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)notificationName;
@end

