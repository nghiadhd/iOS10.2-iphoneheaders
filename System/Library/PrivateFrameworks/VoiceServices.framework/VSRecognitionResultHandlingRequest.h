/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSRecognitionResultHandler;
@class NSArray, VSRecognitionAction;

@interface VSRecognitionResultHandlingRequest : NSObject {

	id<VSRecognitionResultHandler> _handler;
	NSArray* _results;
	VSRecognitionAction* _action;

}
-(void)dealloc;
-(id)handler;
-(id)results;
-(id)initWithHandler:(id)arg1 results:(id)arg2 ;
-(id)nextAction;
-(void)setNextAction:(id)arg1 ;
@end

