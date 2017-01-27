/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TTSSpeechRequestDelegate <NSObject>
@required
-(oneway void)speechRequestDidStart:(id)arg1 forService:(id)arg2;
-(oneway void)speechRequestDidPause:(id)arg1 forService:(id)arg2;
-(oneway void)speechRequestDidContinue:(id)arg1 forService:(id)arg2;
-(oneway void)speechRequest:(id)arg1 withMark:(long long)arg2 didStartForRange:(NSRange)arg3 forService:(id)arg4;
-(oneway void)speechRequest:(id)arg1 didStopWithSuccess:(BOOL)arg2 phonemesSpoken:(id)arg3 forService:(id)arg4 error:(id)arg5;

@end

