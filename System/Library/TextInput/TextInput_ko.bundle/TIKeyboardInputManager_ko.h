/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/TextInput_ko.bundle/TextInput_ko
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ko/TextInput_ko-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_ko : TIKeyboardInputManagerZephyr {

	Hangul2SetAutomata* _batchConverter;
	BOOL _deleteSyllable;

}
-(void)dealloc;
-(void)clearInput;
-(BOOL)shouldExtendPriorWord;
-(BOOL)canHandleKeyHitTest;
-(id)initWithConfig:(id)arg1 ;
-(BOOL)updateLanguageModelForKeyboardState;
-(BOOL)supportsLearning;
-(BOOL)doesComposeText;
-(BOOL)acceptsCharacter:(unsigned)arg1 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)acceptInput;
-(void)setInputIndex:(unsigned)arg1 ;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 ;
-(void)syncToLayoutState:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)setInput:(id)arg1 ;
-(id)composeJamo:(id)arg1 ;
@end

