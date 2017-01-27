/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface VMVoicemailTranscript : NSObject <NSSecureCoding> {

	float _confidence;
	NSString* _transcriptionString;
	NSArray* _segments;
	unsigned long long _confidenceRating;

}

@property (nonatomic,readonly) NSString * transcriptionString;                   //@synthesize transcriptionString=_transcriptionString - In the implementation block
@property (nonatomic,readonly) NSArray * segments;                               //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) float confidence;                                 //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) unsigned long long confidenceRating;              //@synthesize confidenceRating=_confidenceRating - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(float)confidence;
-(NSArray *)segments;
-(id)packTranscript;
-(unsigned long long)confidenceRating;
-(id)initWithTranscription:(id)arg1 ;
-(NSString *)transcriptionString;
@end

