/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTrackReaderInspector.h>

@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {

	OpaqueFigMutableCompositionRef _figMutableComposition;

}

@property (getter=_mutableComposition,nonatomic,readonly) OpaqueFigMutableCompositionRef mutableComposition; 
-(void)dealloc;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(int)playabilityValidationResult;
-(id)segmentForTrackTime:(SCD_Struct_AV2)arg1 ;
-(id)segments;
-(BOOL)isPlayable;
-(void)finalize;
@end

