/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, AVAudioMix, NSMutableDictionary, AVAudioOutputSettings, NSString;

@interface AVAssetReaderAudioMixOutputInternal : NSObject {

	NSArray* audioTracks;
	AVAudioMix* audioMix;
	NSMutableDictionary* audioVolumeCurvesForTracks;
	NSMutableDictionary* audioTimePitchAlgorithmsForTracks;
	NSMutableDictionary* audioTapProcessorsForTracks;
	AVAudioOutputSettings* audioOutputSettings;
	NSString* audioTimePitchAlgorithm;

}
@end

