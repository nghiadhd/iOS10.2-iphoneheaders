/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class VideoMovie;

@interface FrameGeneratorCacheInfo : NSObject {

	VideoMovie* m_movie;
	SCD_Struct_Mi1 m_time;
	CGSize m_size;
	double m_rotation;

}

@property (nonatomic,retain) VideoMovie * movie; 
@property (assign,nonatomic) SCD_Struct_Mi1 time; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double rotation; 
-(CGSize)size;
-(void)dealloc;
-(void)setSize:(CGSize)arg1 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(SCD_Struct_Mi1)time;
-(void)setTime:(SCD_Struct_Mi1)arg1 ;
-(VideoMovie *)movie;
-(void)setMovie:(VideoMovie *)arg1 ;
@end

