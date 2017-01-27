/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SuggestionsSpotlightMetrics.framework/SuggestionsSpotlightMetrics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SuggestionsSpotlightMetrics/SuggestionsSpotlightMetrics-Structs.h>
@class PETScalarEventTracker;

@interface SGMContactDetailConfirmed : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(void)trackEventWithScalar:(unsigned long long)arg1 type:(SGMContactDetailType_)arg2 extracted:(SGMDetailExtractionType_)arg3 ;
-(PETScalarEventTracker *)tracker;
@end

