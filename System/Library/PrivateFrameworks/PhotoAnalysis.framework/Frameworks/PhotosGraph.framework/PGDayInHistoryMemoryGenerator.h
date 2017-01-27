/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGDayInHistoryMemoryGenerator : PGMemoryGenerator {

	NSDate* _localDate;

}

@property (nonatomic,retain) NSDate * localDate;              //@synthesize localDate=_localDate - In the implementation block
-(NSDate *)localDate;
-(id)_potentialMemories:(unsigned long long)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)setLocalDate:(NSDate *)arg1 ;
@end

