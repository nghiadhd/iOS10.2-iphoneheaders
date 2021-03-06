/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _SFSearchRequest, NSDictionary, NSArray, NSString;

@interface SFSpeechRecognitionRequest : NSObject {

	BOOL _forceOfflineRecognition;
	BOOL _shouldReportPartialResults;
	BOOL _detectMultipleUtterances;
	double _maxiumRecognitionDuration;
	_SFSearchRequest* _searchRequest;
	NSDictionary* _voiceTriggerEventInfo;
	long long _taskHint;
	NSArray* _contextualStrings;
	NSString* _interactionIdentifier;

}

@property (setter=_setSearchRequest:,getter=_searchRequest,nonatomic,retain) _SFSearchRequest * _searchRequest;                                        //@synthesize searchRequest=_searchRequest - In the implementation block
@property (assign,nonatomic) BOOL detectMultipleUtterances;                                                                                            //@synthesize detectMultipleUtterances=_detectMultipleUtterances - In the implementation block
@property (assign,setter=_setForceOfflineRecognition:,getter=_forceOfflineRecognition,nonatomic) BOOL _forceOfflineRecognition;                        //@synthesize forceOfflineRecognition=_forceOfflineRecognition - In the implementation block
@property (setter=_setVoiceTriggerEventInfo:,getter=_voiceTriggerEventInfo,nonatomic,retain) NSDictionary * _voiceTriggerEventInfo;                    //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
@property (assign,setter=_setMaximumRecognitionDuration:,getter=_maximumRecognitionDuration,nonatomic) double _maxiumRecognitionDuration;              //@synthesize maxiumRecognitionDuration=_maxiumRecognitionDuration - In the implementation block
@property (assign,nonatomic) long long taskHint;                                                                                                       //@synthesize taskHint=_taskHint - In the implementation block
@property (assign,nonatomic) BOOL shouldReportPartialResults;                                                                                          //@synthesize shouldReportPartialResults=_shouldReportPartialResults - In the implementation block
@property (nonatomic,copy) NSArray * contextualStrings;                                                                                                //@synthesize contextualStrings=_contextualStrings - In the implementation block
@property (nonatomic,copy) NSString * interactionIdentifier;                                                                                           //@synthesize interactionIdentifier=_interactionIdentifier - In the implementation block
-(id)init;
-(void)setInteractionIdentifier:(NSString *)arg1 ;
-(long long)taskHint;
-(void)setTaskHint:(long long)arg1 ;
-(void)_setForceOfflineRecognition:(BOOL)arg1 ;
-(NSString *)interactionIdentifier;
-(void)setContextualStrings:(NSArray *)arg1 ;
-(void)_setVoiceTriggerEventInfo:(id)arg1 ;
-(BOOL)_powerMeteringAvailable;
-(id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4 ;
-(BOOL)shouldReportPartialResults;
-(_SFSearchRequest *)_searchRequest;
-(void)setShouldReportPartialResults:(BOOL)arg1 ;
-(BOOL)automaticallyEndpoint;
-(void)_setSearchRequests:(id)arg1 ;
-(id)_searchRequests;
-(id)_dictationOptionsWithTaskHint:(long long)arg1 requestIdentifier:(id)arg2 ;
-(id)_speechRequestOptions;
-(double)_maximumRecognitionDuration;
-(void)_setMaximumRecognitionDuration:(double)arg1 ;
-(BOOL)_forceOfflineRecognition;
-(void)_setSearchRequest:(id)arg1 ;
-(NSDictionary *)_voiceTriggerEventInfo;
-(NSArray *)contextualStrings;
-(BOOL)detectMultipleUtterances;
-(void)setDetectMultipleUtterances:(BOOL)arg1 ;
@end

