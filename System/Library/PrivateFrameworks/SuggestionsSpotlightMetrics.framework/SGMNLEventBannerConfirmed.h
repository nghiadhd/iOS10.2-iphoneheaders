/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SuggestionsSpotlightMetrics.framework/SuggestionsSpotlightMetrics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SuggestionsSpotlightMetrics/SuggestionsSpotlightMetrics-Structs.h>
@class PETScalarEventTracker;

@interface SGMNLEventBannerConfirmed : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(void)trackEventWithScalar:(unsigned long long)arg1 app:(SGMBannerDisplayApp_)arg2 eventType:(id)arg3 titleAdj:(SGMEventStringAdj_)arg4 dateAdj:(SGMEventDateAdj_)arg5 duratAdj:(SGMEventDurationAdj_)arg6 ;
-(PETScalarEventTracker *)tracker;
@end

