/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
#import <WebContentAnalysis/WFLSMMap.h>

@interface WFLSMScoreNormalizedMap : WFLSMMap {

	float* maxScore;
	float* minScore;

}
-(void)dealloc;
-(id)initWithMap:(LSMMapRef)arg1 ;
-(id)evaluate:(id)arg1 ;
@end

