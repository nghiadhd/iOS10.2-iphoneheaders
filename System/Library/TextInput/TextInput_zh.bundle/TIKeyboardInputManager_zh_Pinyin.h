/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TIKeyboardInputManager_zh_Phonetic.h>

@interface TIKeyboardInputManager_zh_Pinyin : TIKeyboardInputManager_zh_Phonetic
-(id)keyboardBehaviors;
-(BOOL)usesAutoDeleteWord;
-(id)validCharacterSetForAutocorrection;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(BOOL)shouldSearchCompletionForSubstrings;
-(BOOL)supportsPairedPunctutationInput;
-(BOOL)usesGeometryModelData;
@end

