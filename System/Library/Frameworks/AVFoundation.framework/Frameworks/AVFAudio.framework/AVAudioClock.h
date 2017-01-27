/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioTime;

@interface AVAudioClock : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioTime * currentTime; 
-(id)init;
-(void)dealloc;
-(AVAudioTime *)currentTime;
-(id)initWithNode:(AVAudioNodeImplBase*)arg1 ;
-(AudioTimeStamp)currentAudioTimeStamp;
-(id)awaitIOCycle:(unsigned*)arg1 ;
@end

