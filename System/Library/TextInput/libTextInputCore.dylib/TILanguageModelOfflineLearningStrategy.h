/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TILanguageModelOfflineLearningTask;


@protocol TILanguageModelOfflineLearningStrategy <NSObject>
@property (readonly) TILanguageModelOfflineLearningTask * learningTask; 
@required
-(TILanguageModelOfflineLearningTask *)learningTask;
-(BOOL)learnMessages:(id)arg1 withRecipientRecords:(id)arg2;
-(id)filterMessages:(id)arg1;
-(void)didFinishLearning;

@end

