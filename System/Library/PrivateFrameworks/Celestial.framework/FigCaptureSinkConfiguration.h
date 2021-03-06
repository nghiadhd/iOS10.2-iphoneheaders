/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FigCaptureIrisPreparedSettings;

@interface FigCaptureSinkConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _sinkID;
	int _sinkType;
	BOOL _videoDataDiscardsLateVideoFrames;
	BOOL _videoDataDerivedFromPreview;
	BOOL _irisMovieCaptureEnabled;
	SCD_Struct_BW2 _irisMovieDuration;
	SCD_Struct_BW2 _irisMovieVideoFrameDuration;
	int _irisMovieAutoTrimMethod;
	FigCaptureIrisPreparedSettings* _irisPreparedSettings;
	BOOL _optimizesImagesForOfflineVideoStabilization;
	BOOL _quadraHighResStillImageCaptureEnabled;

}

@property (nonatomic,copy) NSString * sinkID;                                                    //@synthesize sinkID=_sinkID - In the implementation block
@property (assign,nonatomic) int sinkType;                                                       //@synthesize sinkType=_sinkType - In the implementation block
@property (assign,nonatomic) BOOL videoDataDiscardsLateVideoFrames;                              //@synthesize videoDataDiscardsLateVideoFrames=_videoDataDiscardsLateVideoFrames - In the implementation block
@property (assign,nonatomic) BOOL videoDataDerivedFromPreview;                                   //@synthesize videoDataDerivedFromPreview=_videoDataDerivedFromPreview - In the implementation block
@property (assign,nonatomic) BOOL irisMovieCaptureEnabled;                                       //@synthesize irisMovieCaptureEnabled=_irisMovieCaptureEnabled - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 irisMovieDuration;                                   //@synthesize irisMovieDuration=_irisMovieDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 irisMovieVideoFrameDuration;                         //@synthesize irisMovieVideoFrameDuration=_irisMovieVideoFrameDuration - In the implementation block
@property (assign,nonatomic) int irisMovieAutoTrimMethod;                                        //@synthesize irisMovieAutoTrimMethod=_irisMovieAutoTrimMethod - In the implementation block
@property (nonatomic,retain) FigCaptureIrisPreparedSettings * irisPreparedSettings;              //@synthesize irisPreparedSettings=_irisPreparedSettings - In the implementation block
@property (assign,nonatomic) BOOL optimizesImagesForOfflineVideoStabilization;                   //@synthesize optimizesImagesForOfflineVideoStabilization=_optimizesImagesForOfflineVideoStabilization - In the implementation block
@property (assign,nonatomic) BOOL quadraHighResStillImageCaptureEnabled;                         //@synthesize quadraHighResStillImageCaptureEnabled=_quadraHighResStillImageCaptureEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)stringForSinkType:(int)arg1 ;
+(int)sinkTypeForString:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sinkType;
-(BOOL)videoDataDerivedFromPreview;
-(int)irisMovieAutoTrimMethod;
-(BOOL)quadraHighResStillImageCaptureEnabled;
-(BOOL)videoDataDiscardsLateVideoFrames;
-(SCD_Struct_BW2)irisMovieVideoFrameDuration;
-(SCD_Struct_BW2)irisMovieDuration;
-(FigCaptureIrisPreparedSettings *)irisPreparedSettings;
-(NSString *)sinkID;
-(void)setSinkType:(int)arg1 ;
-(void)setQuadraHighResStillImageCaptureEnabled:(BOOL)arg1 ;
-(void)setVideoDataDiscardsLateVideoFrames:(BOOL)arg1 ;
-(void)setVideoDataDerivedFromPreview:(BOOL)arg1 ;
-(void)setIrisMovieCaptureEnabled:(BOOL)arg1 ;
-(BOOL)irisMovieCaptureEnabled;
-(void)setIrisMovieDuration:(SCD_Struct_BW2)arg1 ;
-(void)setIrisMovieVideoFrameDuration:(SCD_Struct_BW2)arg1 ;
-(void)setIrisMovieAutoTrimMethod:(int)arg1 ;
-(void)setIrisPreparedSettings:(FigCaptureIrisPreparedSettings *)arg1 ;
-(BOOL)optimizesImagesForOfflineVideoStabilization;
-(void)setSinkID:(NSString *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setOptimizesImagesForOfflineVideoStabilization:(BOOL)arg1 ;
@end

