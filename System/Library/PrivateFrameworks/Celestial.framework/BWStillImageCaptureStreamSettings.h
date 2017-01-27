/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BWBracketSettings, NSArray;

@interface BWStillImageCaptureStreamSettings : NSObject {

	NSString* _portType;
	int _captureType;
	BWBracketSettings* _bracketSettings;
	NSArray* _validBracketedCaptureSequenceNumbers;

}

@property (nonatomic,readonly) NSString * portType;                                         //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) int captureType;                                             //@synthesize captureType=_captureType - In the implementation block
@property (nonatomic,readonly) BWBracketSettings * bracketSettings;                         //@synthesize bracketSettings=_bracketSettings - In the implementation block
@property (nonatomic,readonly) NSArray * validBracketedCaptureSequenceNumbers;              //@synthesize validBracketedCaptureSequenceNumbers=_validBracketedCaptureSequenceNumbers - In the implementation block
@property (nonatomic,readonly) int expectedFrameCount; 
-(void)dealloc;
-(id)description;
-(int)captureType;
-(BWBracketSettings *)bracketSettings;
-(int)expectedFrameCount;
-(NSArray *)validBracketedCaptureSequenceNumbers;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 bracketSettings:(id)arg3 validBracketedCaptureSequenceNumbers:(id)arg4 ;
-(NSString *)portType;
@end

