/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRDSleepObserverDelegate;
#import <mediaremoted/mediaremoted-Structs.h>
@interface MRDSleepObserver : NSObject {

	unsigned _connection;
	unsigned _identifier;
	id<MRDSleepObserverDelegate> _delegate;
	IONotificationPortRef _port;

}

@property (nonatomic,readonly) unsigned connection;                              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) IONotificationPortRef port;                       //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) id<MRDSleepObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)notifyDelegateOfSleepWithCompletion:(/*^block*/id)arg1 ;
-(void)notifyDelegateOfWake;
-(id)init;
-(void)setDelegate:(id<MRDSleepObserverDelegate>)arg1 ;
-(id<MRDSleepObserverDelegate>)delegate;
-(unsigned)identifier;
-(unsigned)connection;
-(IONotificationPortRef)port;
@end

