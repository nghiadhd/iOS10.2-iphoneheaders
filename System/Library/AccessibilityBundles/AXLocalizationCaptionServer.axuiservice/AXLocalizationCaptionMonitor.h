/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:53:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/AXLocalizationCaptionServer.axuiservice/AXLocalizationCaptionServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AXDispatchTimer, AXEventProcessor, NSObject;

@interface AXLocalizationCaptionMonitor : NSObject {

	AXDispatchTimer* _downTimer;
	BOOL _lockUI;
	/*^block*/id _elementCallback;
	/*^block*/id _pointInsideCallback;
	AXEventProcessor* _processor;
	NSObject*<OS_dispatch_queue> _handlingQueue;

}

@property (nonatomic,retain) AXEventProcessor * processor;                            //@synthesize processor=_processor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlingQueue;              //@synthesize handlingQueue=_handlingQueue - In the implementation block
@property (assign,nonatomic) BOOL lockUI;                                             //@synthesize lockUI=_lockUI - In the implementation block
@property (nonatomic,copy) id elementCallback;                                        //@synthesize elementCallback=_elementCallback - In the implementation block
@property (nonatomic,copy) id pointInsideCallback;                                    //@synthesize pointInsideCallback=_pointInsideCallback - In the implementation block
+(id)monitor;
-(void)_handleTouchEvent:(id)arg1 ;
-(void)setProcessor:(AXEventProcessor *)arg1 ;
-(void)setPointInsideCallback:(id)arg1 ;
-(AXEventProcessor *)processor;
-(id)elementCallback;
-(void)setLockUI:(BOOL)arg1 ;
-(void)setHandlingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setElementCallback:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlingQueue;
-(void)_initializeAccessibility;
-(BOOL)lockUI;
-(id)pointInsideCallback;
-(void)_endAccessibility;
-(id)init;
-(void)stopMonitoring;
-(void)startMonitoring;
@end

