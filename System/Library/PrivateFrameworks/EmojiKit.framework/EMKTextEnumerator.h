/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmojiKit/EmojiKit-Structs.h>
@class NSMutableDictionary;

@interface EMKTextEnumerator : NSObject {

	NSMutableDictionary* _emojiDatasByLanguage;

}
-(id)init;
-(id)emojiDataForLanguage:(id)arg1 ;
-(void)enumerateEmojiSignifiersInString:(id)arg1 touchingRange:(NSRange)arg2 language:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
@end
