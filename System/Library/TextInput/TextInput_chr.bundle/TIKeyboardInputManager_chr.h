/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/TextInput_chr.bundle/TextInput_chr
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_chr/TextInput_chr-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_chr : TIKeyboardInputManagerZephyr
-(BOOL)doesComposeText;
-(BOOL)dictionaryUsesExternalEncoding;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
@end

