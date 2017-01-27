/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSTimer, NSDate, NSMutableSet;

@interface LSObserverTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	NSTimer* _timer;
	NSDate* _lastFiredDate;
	NSMutableSet* _applications;
	NSMutableSet* _plugins;
	double _minInterval;
	double _latency;
	SEL _appObserverSelector;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                          //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * lastFiredDate;                   //@synthesize lastFiredDate=_lastFiredDate - In the implementation block
@property (nonatomic,retain) NSMutableSet * applications;              //@synthesize applications=_applications - In the implementation block
@property (nonatomic,retain) NSMutableSet * plugins;                   //@synthesize plugins=_plugins - In the implementation block
@property (nonatomic,readonly) double minInterval;                     //@synthesize minInterval=_minInterval - In the implementation block
@property (nonatomic,readonly) double latency;                         //@synthesize latency=_latency - In the implementation block
@property (assign) SEL appObserverSelector;                            //@synthesize appObserverSelector=_appObserverSelector - In the implementation block
-(void)stopTimer;
-(void)addApplication:(id)arg1 ;
-(NSDate *)lastFiredDate;
-(double)minInterval;
-(void)setLastFiredDate:(NSDate *)arg1 ;
-(SEL)appObserverSelector;
-(id)initWithAppSelector:(SEL)arg1 queue:(id)arg2 ;
-(void)removeApplication:(id)arg1 ;
-(void)notifyObservers:(id)arg1 withApplication:(id)arg2 ;
-(void)setAppObserverSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)clear;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(double)latency;
-(void)sendMessage:(id)arg1 ;
-(NSMutableSet *)plugins;
-(void)setPlugins:(NSMutableSet *)arg1 ;
-(NSMutableSet *)applications;
-(void)setApplications:(NSMutableSet *)arg1 ;
@end

