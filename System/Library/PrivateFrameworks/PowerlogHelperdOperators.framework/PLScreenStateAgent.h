/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>
#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@class FBSDisplayLayoutMonitor, NSString;

@interface PLScreenStateAgent : PLAgent <FBSDisplayLayoutObserver> {

	FBSDisplayLayoutMonitor* _mainDisplayMonitor;
	FBSDisplayLayoutMonitor* _airPlayDisplayMonitor;
	FBSDisplayLayoutMonitor* _carPlayDisplayMonitor;

}

@property (retain) FBSDisplayLayoutMonitor * mainDisplayMonitor;                 //@synthesize mainDisplayMonitor=_mainDisplayMonitor - In the implementation block
@property (retain) FBSDisplayLayoutMonitor * airPlayDisplayMonitor;              //@synthesize airPlayDisplayMonitor=_airPlayDisplayMonitor - In the implementation block
@property (retain) FBSDisplayLayoutMonitor * carPlayDisplayMonitor;              //@synthesize carPlayDisplayMonitor=_carPlayDisplayMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointBacklightEvent;
+(id)entryEventForwardScreenState;
+(id)entryAggregateDefinitionForeground;
-(id)init;
-(void)dealloc;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)log;
-(void)initOperatorDependancies;
-(void)logEventForwardCarScreenState:(id)arg1 ;
-(void)logEventForwardAirPlayScreenState:(id)arg1 ;
-(FBSDisplayLayoutMonitor *)mainDisplayMonitor;
-(void)logEventForwardMainScreenState:(id)arg1 ;
-(void)accountWithLayoutEntries:(id)arg1 ;
-(void)createCarPlayWiFiAccountingEvent:(id)arg1 ;
-(void)createAirPlayWiFiAccountingEvent:(id)arg1 ;
-(void)logEventPointMainBacklightEvent:(id)arg1 withContext:(id)arg2 ;
-(void)setMainDisplayMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(FBSDisplayLayoutMonitor *)airPlayDisplayMonitor;
-(void)setAirPlayDisplayMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(FBSDisplayLayoutMonitor *)carPlayDisplayMonitor;
-(void)setCarPlayDisplayMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
@end

