/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@interface SBDashBoardPowerChangeObserver : NSObject {

	id<NSObject> _notificationToken;
	BOOL _connectedToPower;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                                       //@synthesize block=_block - In the implementation block
@property (assign,getter=isConnectedToPower,nonatomic) BOOL connectedToPower;              //@synthesize connectedToPower=_connectedToPower - In the implementation block
-(BOOL)isConnectedToPower;
-(void)setIsConnectedToPower:(BOOL)arg1 ;
-(void)setConnectedToPower:(BOOL)arg1 ;
-(void)dealloc;
-(void)update;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
@end

