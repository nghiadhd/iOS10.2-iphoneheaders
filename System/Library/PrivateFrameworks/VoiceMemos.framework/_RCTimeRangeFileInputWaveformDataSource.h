/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCFileInputWaveformDataSource.h>

@interface _RCTimeRangeFileInputWaveformDataSource : RCFileInputWaveformDataSource {

	BOOL _isDecomposedFragment;
	double _destinationBeginTime;
	SCD_Struct_RC4 _sourceTimeRange;

}

@property (assign,nonatomic) BOOL isDecomposedFragment;                   //@synthesize isDecomposedFragment=_isDecomposedFragment - In the implementation block
@property (assign,nonatomic) double destinationBeginTime;                 //@synthesize destinationBeginTime=_destinationBeginTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC4 sourceTimeRange;              //@synthesize sourceTimeRange=_sourceTimeRange - In the implementation block
-(void)saveGeneratedWaveformIfNecessary;
-(void)setDestinationBeginTime:(double)arg1 ;
-(void)setIsDecomposedFragment:(BOOL)arg1 ;
-(double)destinationBeginTime;
-(BOOL)isDecomposedFragment;
-(SCD_Struct_RC4)sourceTimeRange;
-(void)setSourceTimeRange:(SCD_Struct_RC4)arg1 ;
@end

