/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@interface VTCorruptDetector : NSObject {

	int _zeroSamplesCount;
	int _maxZeroSamplesCount;

}
-(id)init;
-(void)reset;
-(void)analyze:(AudioBuffer*)arg1 ;
-(int)getMaxZeroSampleCount;
-(BOOL)audioHasZeroRun;
@end

