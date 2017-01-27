/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, TSCH3DGLStatisticsData;

@interface TSCH3DGLStatistics : NSObject {

	unsigned long long mLifespan;
	NSMutableArray* mFrames;

}

@property (nonatomic,readonly) TSCH3DGLStatisticsData * allFramesStatistics; 
@property (nonatomic,readonly) TSCH3DGLStatisticsData * currentFrameStatistics; 
-(void)activateShader:(id)arg1 ;
-(void)drawGeometry:(id)arg1 ;
-(void)pushStatistics;
-(TSCH3DGLStatisticsData *)allFramesStatistics;
-(TSCH3DGLStatisticsData *)currentFrameStatistics;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)endFrame;
-(void)beginFrame;
@end

